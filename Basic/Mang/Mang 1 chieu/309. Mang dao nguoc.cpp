#include <stdio.h>

void in(int x[],int n){
	for(int i=0 ; i<n ; i++){
		scanf("%d",&x[i]);
	}
}

void out(int x[],int n){
	for(int i=n-1 ; i>=0 ; i--){
		printf("%d ",x[i]);
	}
}

int main(){
	int x[20],y[20],n,store[20];
	scanf("%d",&n);
	in(x,n);
	out(x,n);
	
	return 0;
}
