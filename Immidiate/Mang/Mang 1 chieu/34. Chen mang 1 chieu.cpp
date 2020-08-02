#include <stdio.h>

void in(int x[],int n){
	for(int i=0 ; i<n ; i++){
		scanf("%d",&x[i]);
	}
}

void out(int x[],int n){
	for(int i=0 ; i<n ; i++){
		printf("%d ",x[i]);
	}
	printf("\n");
}

void act(int x[],int y[],int store[],int m,int n,int p){
	int tempX,tempY;
	
	for(int i=0 ; i<p ; i++){
		store[i] = x[i];
	}
	
	for(int i=p ; i<m+p ; i++){
		store[i] = y[i-p];
	}
	
	for(int i=p ; i<n ; i++){
		store[i+m] = x[i];
	}
}

int main(){
	int x[20],n,m,p,y[20],store[20];
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&p);
	in(x,n);
	in(y,m);
	act(x,y,store,m,n,p);
	out(store,m+n);
	
	return 0;
}
