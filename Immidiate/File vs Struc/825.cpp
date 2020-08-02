#include <stdio.h>
#include <string.h>
#define flush while((getchar()) != '\n')

struct budget{
	char name[50];
	int nums;
	int option;
	int cost;
};

int count(){
	FILE *outfile = fopen("B17DCPT163.bin","rb");
    int c = 0,  temp = fgetc(outfile) ;
    while (temp = fgetc(outfile)!= EOF){
        c ++ ;
        fseek(outfile,sizeof(budget)*c, SEEK_SET) ;
    }
    fclose(outfile) ;
    return c;
}

void addnew(int n){
	FILE *outfile = fopen("B17DCPT163.bin","ab");
	int count1=0,count2=0;
	int c = count();
	for(int i=1 ; i<=n ; i++){
		budget s;
		s.nums = i+c;
		flush;
		scanf("%d",&s.option);
		if(s.option==1) count1++;
		else if(s.option==2) count2++;
		flush;
		gets(s.name);
		scanf("%d",&s.cost);
		fseek(outfile,0,SEEK_END);
		fwrite(&s,sizeof(s),1,outfile);
	}
	fclose(outfile);
	printf("%d %d",count1,count2);
}

void edit(int n){
	FILE *outfile = fopen("B17DCPT163.bin","rb+");
	fseek(outfile,sizeof(budget)*(n-1),SEEK_SET);
	budget s;
	s.nums = n;
	flush;
	s.option = 2;
	gets(s.name);
	scanf("%d",&s.cost);
	fwrite(&s,sizeof(s),1,outfile);
	puts(s.name);
}

void display(){
	FILE *outfile = fopen("B17DCPT163.bin","rb");
	int n = count();
	int c = 0;
	int in=0,out=0,save;
	
	for(int i=0 ; i<n ; i++){
		budget s;
		fseek(outfile,sizeof(budget)*i,SEEK_SET);
		fread(&s,sizeof(s),1,outfile);
		if(s.option==1) in+=s.cost;
		else if(s.option==2) out+=s.cost;
	}
	save = in - out;
	printf("%d %d %d",in,out,save);
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
    //    printf("%d",n) ;
        break ;
    case 2 :
        scanf("%d",&n);
        edit(n) ;
    //    printf("%d",n);
        break;  
    case 3 :
        display() ;
        break ;
    default :
        printf("") ;
    }
    return 0;
}
