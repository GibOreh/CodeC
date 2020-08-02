#include <stdio.h>

void out(int x[][20],int n,int m=0){
	if(m == 0)
		m = n;
	for(int i=0 ; i<n ; i++){	
		for(int j=0 ; j<m+i ; j++){
			if(j<i) printf("~");
			else if(i==0 || i==n-1 || j==m+i-1 || j<i+1)
			 	printf("*");
			else printf(".");		
		}	
		printf("\n");
	}
}


int main(){
	int x[20][20],n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	out(x,n,m);
	
	return 0;
}
