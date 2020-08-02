#include <stdio.h>

void in(int x[][20],int n,int m=0){
	if(m == 0)
		m = n;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			scanf("%d",&x[i][j]);
		}
	}
}

void out(int x[][20],int n,int m=0){
	if(m == 0)
		m = n;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
}

void check(int x[][20],int n, int m=0){
	if(m == 0)
		m=n;
	int sumRow,sumCollum;
	
	for(int i=0 ; i<n ; i++){
		sumRow=0;
		for(int j=0 ; j<m ; j++){
			sumRow+=x[i][j];
		}
		printf("%d ",sumRow);
	}
	printf("\n");
	
	for(int i=0 ; i<n ; i++){
		sumCollum=0;
		for(int j=0 ; j<m ; j++){
			sumCollum+=x[j][i];
		}
		printf("%d ",sumCollum);
	}
}

int main(){
	int x[20][20],n,m;
	scanf("%d",&n);
	in(x,n);
	check(x,n);
	
	
	return 0;
}
