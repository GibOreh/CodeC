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

void move(int x[],int p,int n,int store[]){
	int count=0;
	for(int i=n-p ; i<n ; i++){
		store[count++] = x[i];
	}
	for(int i=0 ; i<n-p ; i++){
		store[count++] = x[i];
	}
}

//void act(int x[],int &n,int store[]){
//	for(int i=0 ; i<n ; i++){
//		
//	}	
//}

int main(){
	int x[20],n,z,store[20];
	scanf("%d",&n);
	in(x,n);
	scanf("%d",&z);
	move(x,z,n,store);
	out(store,n);
	
	return 0;
}
