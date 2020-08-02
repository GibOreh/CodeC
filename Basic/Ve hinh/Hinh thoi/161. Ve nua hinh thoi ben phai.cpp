#include <stdio.h>

void out(int x[][20],int n,int m=0){
	if(m == 0)
		m = n;
	for(int i=0 ; i<n+n-1 ; i++){
		if(i<n)
			for(int j=0 ; j<=i ; j++){
				printf("*");
			}
		else for(int j=0 ; j<n+n-i-1 ; j++){
				printf("*");
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
