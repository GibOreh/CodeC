#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char x[50];
	int Char=0,expression=0,nums=0;
	gets(x);
	int len = strlen(x);
	for(int i=0 ; i<len ; i++){
		if(isalpha(x[i]) != 0)
			Char++;
		else if(isdigit(x[i]) != 0)
			nums++;	
		else expression++;
	}
	printf("%d %d %d",nums,Char,expression);
	

	
	return 0;
}
