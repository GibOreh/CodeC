#include <stdio.h>
#include <string.h>

int main(){
	char c[50];
	gets(c);
	bool test;
	
	for(int i=0 ; i<=strlen(c) ; i++){
		if(c[i] == ' ' && c[i-1] != ' ' || c[i]=='\0'){
			test = false;
			for(int j=i-1 ; j>=0 ; j--){
				if(c[j-1] == ' ' || j==0)
					test =true;
				if(test==true){
					for(int k=j ; k<i ; k++)
						printf("%c",c[k]);
					break;
				}		
			}
			printf("\n");
		}
	}
	
	return 0;
}
