#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char c[50];
	gets(c);
	bool test=false;
	int mark,temp;
	
	for(int i=strlen(c)-1 ; i>=0 ; i--){
		if(c[i] !=' ' ){
			test=true;
		}
		if(test ==true){
			if(c[i] == ' ' && c[i-1]!= ' '){
				mark =i;
				break;
			}
		}
	}
		
	for(int i=0 ; i<=mark ; i++){
		if(c[i] == ' ' && c[i-1] != ' ' ){
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
					if(i<mark)
						printf(" ");
					
					break;
				}
			}					
		}
	}
	printf(", ");

	for(int i=strlen(c)-1 ; i>=0 ; i--){
		if(c[i]==' ' && isalpha(c[i+1]) !=0 ){
			for(int k=i+1 ; k<strlen(c) ; k++){
				strupr(&c[k]);
				printf("%c",c[k]);
			}
			break;	
		}
	}
	
	return 0;
}
	

