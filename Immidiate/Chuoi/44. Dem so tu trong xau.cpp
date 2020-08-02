#include <stdio.h>
#include <string.h>

int main(){
	char c[50];
	gets(c);
	int count=1;
	
	for(int i=0 ; i<strlen(c) ; i++){
		if(c[i] == ' ' && c[i-1]!=' ')
			count++;
	}
	
	printf("%d",count);
	
	
	return 0;
}
