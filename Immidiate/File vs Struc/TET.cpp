#include <stdio.h>
#include <string.h>
#define flush while((getchar()) != '\n')

struct sv{
	char name[100];
	int nums;
	char code[100];
};

int count(){
	FILE *outfile = fopen("B17DCPT163.bin","rb") ;
    int c = 0,  temp = fgetc(outfile) ;
    while (temp = fgetc(outfile)!= EOF){
        c ++ ;
        fseek(outfile,sizeof(sv)*c, SEEK_SET) ;
    }
    fclose(outfile) ;
    return c;
}

void addnew(int n){
	FILE *outfile = fopen("B17DCPT163.bin","ab");
	
	int c = count();
	flush;
	for(int i=1 ; i<=n ; i++){
		sv s;
		s.nums = i+c;
		gets(s.code);
		gets(s.name);
		fseek(outfile,0,SEEK_END);
		fwrite(&s,sizeof(s),1,outfile);
	}
	fclose(outfile);
}

void edit(){
	FILE *outfile = fopen("B17DCPT163.bin","rb+");
	char temp[100];
	flush;
	gets(temp);
	bool test=1;
	sv ss;
	
	int n = count();
	for(int i=0 ; i<n ; i++){
		sv s;
		fseek(outfile,sizeof(sv)*i,SEEK_SET);
		fread(&s,sizeof(s),1,outfile);
		if(strcmp(temp,s.code)==0){
			ss.nums = i+1;
			test=0;
			gets(ss.code);
			gets(ss.name);
			fseek(outfile,sizeof(sv)*i,SEEK_SET);
			fwrite(&ss,sizeof(ss),1,outfile);
			puts(ss.code);
			break;
		}	
	}
	if(test==1) printf("");
	fclose(outfile);
}

void display(){
	FILE *outfile = fopen("B17DCPT163.bin","rb");
	int n = count();
	flush;
	char temp[100];
	gets(temp);
	bool test=1;
	int c = strlen(temp);
	if(c!=7 && c!=10) goto hi;
	
	
	for(int i=0 ; i<n ; i++){
		sv s;
		fseek(outfile,sizeof(sv)*i,SEEK_SET);
		fread(&s,sizeof(s),1,outfile);
		if(strncmp(s.code,temp,c)!=0)
			continue;	
		test=0;
		printf("%d %s %s\n",s.nums,s.name,s.code);
	}
	
	hi : if(test==1) printf("");
	fclose(outfile);
}

int main(){
//	FILE *outfile = fopen("B17DCPT163.bin","wb+");
//	fclose(outfile);
	int n ;
    scanf("%d", &n);
    switch (n) {
    case 1 :
        scanf("%d", &n) ;
        addnew(n) ;
        printf("%d",n) ;
        break ;
    case 2 :
        edit() ;
        break ;
    case 3 :
        display() ;
        break ;
    default :
        printf("") ;
    }
    return 0;
}
