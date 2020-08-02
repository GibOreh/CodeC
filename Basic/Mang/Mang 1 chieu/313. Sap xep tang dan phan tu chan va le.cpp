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

void check(int x[],int n,int store[]){
	int count=0,temp;
	for(int i=0 ; i<n ; i++){
		for(int j=i+1 ; j<n ; j++)
			if(x[i] > x[j]){
				temp =x[i];
				x[i] =x[j];
				x[j] =temp;
			}	
	}
	for(int i=0 ; i<n ; i++){
		if(x[i] %2 ==0){
			store[count++] = x[i];
		}	
	}
	for(int i=0 ; i<n ; i++){
		if(x[i] %2 != 0){
			store[count++] = x[i];
		}	
	}
}

int main(){
	int x[20],n,store[20];
	scanf("%d",&n);
	in(x,n);
	check(x,n,store);
	out(store,n);
	
	return 0;
}
