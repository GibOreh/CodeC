#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char c[50];
	gets(c);
	bool test;
	char min[10]="",temp[10]="", max[10]="";
	int mark=0,maxs=0 , mins=10;
	
		
	for(int i=0 ; i<strlen(c) ; i++){	
	
		if(c[i]==' ' && isalpha(c[i-1])!=0 ){	
			strncat(max,c+mark, i-mark );	
			strncat(min,c+mark, i-mark );
			mark = i+1;
			break;
		}
		
	}
	
	for(int i=mark ; i<=strlen(c) ; i++){
		
		if(c[i] == ' ' || c[i]=='\0' && c[i-1] !=' ' ){
			if(strlen(max) < i-mark){
				strcpy(max,temp);
				strncat(max, c+mark, i-mark);
			}
			
			if(strlen(min) > i-mark){
				strcpy(min,temp);
				strncat(min, c+mark, i-mark);
			}
		}
		if(c[i] == ' ' && c[i+1] !=' '){
			mark=i+1;
		}
	}
	printf(max);
	printf(" ");
	puts(min);
	
	
	return 0;
}
	

