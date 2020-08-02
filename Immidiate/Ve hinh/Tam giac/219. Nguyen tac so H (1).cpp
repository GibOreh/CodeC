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
	
	int temp1=2;
	int temp;
	
	for(int i=0 ; i<n ; i++){
		temp=1;
		for(int j=0 ; j<n+i ; j++){
			
			if(j<n-i-1){
				printf("~");
				continue;
			}
			
			printf("%d",temp);
			if( j >= n-1)
				temp-=temp1;		
			else temp+=temp1;
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
