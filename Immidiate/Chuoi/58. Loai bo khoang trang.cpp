#include <stdio.h>
#include <string.h>

void del(char c[],int p){
	for(int i=p ; i<strlen(c) ; i++){
		c[i] = c[i+1];
	}
}

int main(){
	char c[50];
	gets(c);
	
	ahi :for(int i=0 ; i<strlen(c) ; i++){
		if(c[i] == ' '){
			del(c,i);
			goto ahi;
		}
			
	}
	puts(c);
	
	return 0;
}
