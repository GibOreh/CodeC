#include <stdio.h>

void out(int x[][20],int n,int m=0){
	m==0 ? m=n : m=m;
	
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n-i ; j++){
			printf("%d",n-i+j);	
		}
		printf("\n");
	}
}

int main(){
	int x[20][20],n;
	scanf("%d",&n);
	out(x,n);
	
	return 0;
}
