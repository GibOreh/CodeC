#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char x[50];
	gets(x);
	int len = strlen(x);
	for(int i=0 ; i<len ; i++){
		if(x[i] != ' ')
			printf("%c ",x[i]);
	}
	
	

	
	return 0;
}
