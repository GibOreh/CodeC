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
}

void insert(int x[],int y[],int p,int store[],int n,int z){
	int count=0;
	for(int i=0 ; i<p ; i++){
		store[count++] = x[i];
	}
	for(int i=0 ; i<z ; i++){
		store[count++] = y[i];
	}
	for(int i=p ; i<n ; i++){
		store[count++] = x[i];
	}
}



int main(){
	int x[20],y[20],n,z,p,store[20];
	scanf("%d",&n);
	scanf("%d",&z);
	in(x,n);
	in(y,z);
	scanf("%d",&p);
	insert(x,y,p,store,n,z);
	out(store,n+z);
	
	return 0;
}
