#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char x[50],compare[50];
	gets(x);
	int len = strlen(x);
	for(int i=0 ; i<len ; i++){
		isupper(x[i]) ==0 ? compare[i] =0
						:compare[i] =1;
	}
	
	for(int i=0 ; i<len ; i++){
		compare[i] ==0 ? strupr(&x[i])
						:strlwr(&x[i]);
	}
	puts(x);

	
	return 0;
}
