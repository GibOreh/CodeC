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

void check(int x[][20],int y[][20],int z[][20],int n, int m=0){
	if(m == 0)
		m=n;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			z[i][j] = x[i][j] - y[i][j];
		}
	}
}

int main(){
	int x[20][20],n,m,y[20][20],z[20][20];
	scanf("%d",&n);
	scanf("%d",&m);
	in(x,n,m);
	in(y,n,m);
	check(x,y,z,n,m);
	out(z,n,m);
	
	
	return 0;
}
