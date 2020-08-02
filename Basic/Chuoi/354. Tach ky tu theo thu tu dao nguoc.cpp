#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char x[50];
	gets(x);
	int len = strlen(x);
	for(int i=len-1 ; i>=0 ; i--){
		if(x[i] != ' ')
			printf("%c ",x[i]);
	}
	
	return 0;
}
