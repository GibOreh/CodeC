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

bool checkSNT(int x){
	if(x<2)
		return false;
		
	for(int i=x-1 ; i>1 ; i--){
		if(x % i==0)
			return false;
	}
	return true;
}

void check(int x[][20],int n, int m=0){
	if(m == 0)
		m=n;
	int sum=0;
	
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			if(i != j && n-j-1 != i)
				continue;
			if(checkSNT(x[i][j]))
				sum+=x[i][j];
		}
	}
	printf("%d",sum);
}

int main(){
	int x[20][20],n,store[10][10],m=3;
	scanf("%d",&n);
	in(x,n);
	check(x,n);
	
	
	return 0;
}
