#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char x[50];
	int alpha=0, nums=0, others =0;
	gets(x);
	int len = strlen(x);
	for(int i=0 ; i<len ; i++){
		if(isalpha(x[i]) !=0)
			alpha++;
		else if(isdigit(x[i]) != 0)
			nums++;
		else others++;			
	}
	printf("%d %d %d",alpha,nums,others);

	
	return 0;
}
