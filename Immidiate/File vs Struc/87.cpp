#include <stdio.h>
#include <string.h>
#define flush while((getchar()) != '\n')

struct product{
	char name[50];
	int nums;
	float a,b;
};

int count(){
	FILE *outfile = fopen("B17DCPT163.bin","rb") ;
    int c = 0,  temp = fgetc(outfile) ;
    while (temp = fgetc(outfile)!= EOF){
        c ++ ;
        fseek(outfile,sizeof(product)*c, SEEK_SET) ;
    }
    fclose(outfile) ;
    return c;
}

void addnew(int n){
	FILE *outfile = fopen("B17DCPT163.bin","ab");
	
	int c = count();
	for(int i=1 ; i<=n ; i++){
		product s;
		s.nums = i+c;
		flush;
		gets(s.name);
		scanf("%f %f",&s.a,&s.b);
		fseek(outfile,0,SEEK_END);
		fwrite(&s,sizeof(s),1,outfile);
	}
	fclose(outfile);
}

void edit(int n){
	FILE *outfile = fopen("B17DCPT163.bin","rb+");
	fseek(outfile,sizeof(product)*(n-1),SEEK_SET);
	product s;
	s.nums = n;
	flush;
	gets(s.name);
	scanf("%f %f",&s.a,&s.b);
	fwrite(&s,sizeof(s),1,outfile);
}

bool check(product s){
	if(s.b - s.a > s.a) return 1;
	return 0;
}

void display(){
	FILE *outfile = fopen("B17DCPT163.bin","rb");
	int n = count();
	
	for(int i=0 ; i<n ; i++){
		product s;
		fseek(outfile,sizeof(product)*i,SEEK_SET);
		fread(&s,sizeof(s),1,outfile);
		if(check(s)==0)
			continue;
		printf("%d %s",s.nums,s.name);
		printf(" %.2f %.2f",s.a,s.b);
		printf("\n");
	}
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
        scanf("%d",&n);
        edit(n) ;
        printf("%d",n) ;
        break ;
    case 3 :
        display() ;
        break ;
    default :
        printf("") ;
    }
    return 0;
}
