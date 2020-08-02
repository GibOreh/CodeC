#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char x[50];
	gets(x);
	strupr(x);
	puts(x);

	return 0;
}
