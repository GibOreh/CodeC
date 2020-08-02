#include <stdio.h>

void out(int x[][20],int n,int m=0){
	m==0 ? m=n : m=m;
	
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<i+1 ; j++){
			if(i==n-1 || j==0 || i==j)
				printf("*");
			else printf(".");	
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
