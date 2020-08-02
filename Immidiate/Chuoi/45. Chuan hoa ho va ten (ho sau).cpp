#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct ahi{
	int static count;
	char cc[50];
};

void test(){
	
}

int main(){
	char c[50];
	
	
	gets(c);
	bool test=false;
	int mark,temp;
	
	for(int i=0 ; i<strlen(c) ; i++){
		if(c[i] !=' '){
			test=true;
		}
		if(test ==true){
			if(c[i] == ' ' && c[i+1] != ' '){
				mark =i;
				break;
			}
		}
	}
		
	for(int i=mark+1 ; i<=strlen(c) ; i++){
		if(c[i] == ' ' && c[i-1] != ' ' || c[i] =='\0'){
			temp=i;
			for(int j=i-1 ; j>=0 ; j--){
				if(c[j-1] ==' ' || j==0){
					for(int k=j ; k<i ; k++){
						if(k==j){
							strupr(&c[k]);
							printf("%c",c[k]);
						}
							
						else {
							strlwr(&c[k]);
							printf("%c",c[k]);		
						}
					}
					if(c[i]!='\0')
						printf(" ");				
					break;
				}
			}					
		}
	}
	printf(", ");

	for(int i=0 ; i<strlen(c) ; i++){
		if(c[i]==' ' &&  c[i-1] !=' ' ){
			for(int k=0 ; k<i ; k++){
				strupr(&c[k]);
				printf("%c",c[k]);
			}
			break;	
		}
	}
	
	return 0;
}
	

