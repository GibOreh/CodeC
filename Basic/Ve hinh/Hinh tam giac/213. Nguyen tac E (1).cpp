#include <stdio.h>

void out(int n,int m=0){
	m==0 ? m=n : m=m;
	
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<=i; j++){
				printf("%d",i+j+1);	
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
