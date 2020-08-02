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
	int temp;
	
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m-1 ; j++){
			for(int k=j ; k<m ; k++){
				if(x[j][i] < x[k][i]){
					temp = x[j][i];
					x[j][i] = x[k][i];
					x[k][i] = temp;
				}
			}
		}
	}
	
}

int main(){
	int x[20][20],n,store[10][10],m=3;
	scanf("%d",&n);
	in(x,n);
	check(x,n);
	out(x,n);
	
	
	return 0;
}
