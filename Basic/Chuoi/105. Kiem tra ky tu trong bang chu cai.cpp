#include <stdio.h>
#include <ctype.h>

int main(){
	char x;
	scanf("%c",&x);	
	
	if(isalpha(x) != 0){
		printf("%d",1);
	}
	else printf("%d",0);
	
	
	
	return 0;
}
