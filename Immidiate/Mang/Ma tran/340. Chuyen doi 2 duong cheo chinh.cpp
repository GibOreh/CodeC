#include <stdio.h>

void in(int x[][10],int n,int m=0){
	if(m == 0)
		m = n;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			scanf("%d",&x[i][j]);
		}
	}
}

void out(int x[][10],int n,int m=0){
	if(m == 0)
		m = n;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
}

void swap(int &x, int &y){
	int temp=x;
	x = y;
	y =temp;
}

void check(int x[][10],int n, int m=0){
	if(m == 0)
		m = n;
	int count =0;
	
	for(int i=0 ; i<n ; i++){			
		swap(x[i][i],x[i][n-i-1]);
	}
	
}

int main(){
	int x[10][10],n;
	scanf("%d",&n);
	in(x,n);
	check(x,n);
	out(x,n);
	
	return 0;
}
