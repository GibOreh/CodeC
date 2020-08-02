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

void check(int x[][10],int n, int m=0){
	if(m == 0)
		m = n;
	int temp,temp1;
	for(int i=0 ; i<n ; i++){
		
		temp = 1;
		
		for(int j=0 ; j<i+i+1 ; j++){			
			printf("%d",temp);
			temp++;	
		}
		
		printf("\n");
	}
	
}

int main(){
	int x[10][10],n;
	scanf("%d",&n);
	check(x,n);
	
	return 0;
}
