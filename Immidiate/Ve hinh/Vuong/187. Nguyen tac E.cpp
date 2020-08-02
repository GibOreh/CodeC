#include <stdio.h>

void out(int x[][100],int n){
	for(int i=0 ; i<n+n-1 ; i++){
		for(int j=0 ; j<n+n-1 ; j++){
			printf("%d",x[i][j]);
		}
		printf("\n");
	}
}

void check(int x[][100],int n){
	
	for(int i=0 ; i<n+n-1 ; i++){
		for(int j=i ; j<n+n-1-i ; j++){
			x[i][j] = n-i;
		}
				
		for(int j=i+1 ; j<n+n-2-i ; j++){
			x[j][n+n-2-i] = n-i;
		}
		
		for(int j=n+n-2-i ; j>=i ; j--){
			x[n+n-2-i][j] = n-i;
		}	
			
		for(int j=n+n-2-i ; j>i ; j--){
			x[j][i] = n-i;
		}
	}
}

int main(){
	int x[100][100]={0},n;
	scanf("%d",&n);
	check(x,n);
	out(x,n);
	return 0;
}
