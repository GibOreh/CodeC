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

void swap(int &x,int &y){
	int temp = x;
	x =y;
	y =temp;
}

void act(int x[],int n){
	int store[10],mark,min;
	bool test;
	
	for(int i=0 ; i<n-1 ; i++){
		min = 999;
		for(int j=i ; j<n ; j++){
			if(min > x[j]){
				min = x[j];
				mark =j;
			}
		}	
		swap(x[i],x[mark]);
		out(x,n);
		
		
	}
	
	
}

int main(){
	int x[20],n;
	scanf("%d",&n);
	in(x,n);
	act(x,n);
	
	
	return 0;
}
