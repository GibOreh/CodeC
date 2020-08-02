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

void check(int x[],int n){
	int temp=0;
	for(int i=0 ; i<n ; i++){
		for(int j=i+1 ; j<n ; j++){
			if(x[i] < x[j]){
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
}

int main(){
	int x[20],n;
	scanf("%d",&n);
	in(x,n);
	check(x,n);
	out(x,n);
	
	return 0;
}
