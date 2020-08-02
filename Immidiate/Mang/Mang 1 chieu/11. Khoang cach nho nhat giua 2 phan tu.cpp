#include <stdio.h>
#include <math.h>

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

void check(int x[],int n){
	int min = 99,tempX,tempY;
	
	for(int i=0 ; i<n ; i++){
		for(int j=i+1 ; j<n ; j++){
			if(abs(x[i] - x[j]) < min){
				min = abs(x[i] - x[j]);
				tempX = x[j];
				tempY = x[i];
			}
		}
	}
	printf("%d %d %d",min,tempX,tempY);
	
}

int main(){
	int x[20],n;
	scanf("%d",&n);
	in(x,n);
	check(x,n);
	
	return 0;
}
