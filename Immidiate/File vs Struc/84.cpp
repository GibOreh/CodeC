#include <stdio.h>
#include <string.h>
#define flush while((getchar()) != '\n')

struct sv{
	char name[50];
	int nums;
	float p[3];
}; sv ss[100];

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
	for(int i=1 ; i<=n ; i++){
		sv s;
		s.nums = i+c;
		flush;
		gets(s.name);
		for(int i=0 ; i<3 ; i++)
			scanf("%f",&s.p[i]);
		fseek(outfile,0,SEEK_END);
		fwrite(&s,sizeof(s),1,outfile);
	}
	fclose(outfile);
}

void edit(int n){
	FILE *outfile = fopen("B17DCPT163.bin","rb+");
	fseek(outfile,sizeof(sv)*(n-1),SEEK_SET);
	sv s;
	s.nums = n;
	flush;
	gets(s.name);
	for(int i=0 ; i<3 ; i++)
		scanf("%f",&s.p[i]);
	fwrite(&s,sizeof(s),1,outfile);
}

float sumPoint(int n){
	float sum=0;
	for(int i=0 ; i<3 ; i++)
		sum+=ss[n].p[i];
	return sum;
}

void sort(){
	int n = count();
	for(int i=0 ; i<n-1 ; i++){
		for(int j=i+1 ; j<n ; j++){
			if(sumPoint(i) > sumPoint(j)){
				sv s = ss[i];
				ss[i] = ss[j];
				ss[j] = s;
			}
		}	
	}
}

void display(){
	FILE *outfile = fopen("B17DCPT163.bin","rb");
	int n = count();
	int c = 0;
	
	for(int i=0 ; i<n ; i++){
		fseek(outfile,sizeof(sv)*i,SEEK_SET);
		fread(&ss[i],sizeof(sv),1,outfile);
	}
	sort();
	for(int i=0 ; i<n ; i++){
		printf("%d %s",ss[i].nums,ss[i].name);
		for(int j=0 ; j<3 ; j++)
			printf(" %.1f",ss[i].p[j]);
		printf("\n");
	}
	fclose(outfile);
}

int main(){
//	FILE *outfile = fopen("B17DCPT163.bin","wb");
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
