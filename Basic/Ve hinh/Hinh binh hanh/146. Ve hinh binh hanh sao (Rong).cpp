#include <stdio.h>

void out(int x[][20],int n,int m=0){
	if(m == 0)
		m = n;
	for(int i=0 ; i<n ; i++){	
		for(int j=0 ; j<n+n-i-1 ; j++){
			if(j<n-i-1) printf("~");
			else if(i==0 || i==n-1 || j==n+n-i-2 || j==n-i-1)
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
