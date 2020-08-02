#include <stdio.h>

void out(int n){
	for(int i=0 ; i<n ; i++){	
		for(int j=0 ; j<n-i ; j++){
			printf("%c",'A'+n-i+j-2);	
		}	
		printf("\n");
	}
}

int main(){
	int n;
	scanf("%d",&n);
	out(n);
	
	return 0;
}
