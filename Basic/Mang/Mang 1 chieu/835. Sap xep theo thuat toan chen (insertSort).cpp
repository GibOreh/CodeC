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

void insertSort(int x[],int n){
	int temp,count,j;
	for(int i=0 ; i<n-1 ; i++){
		j = i;
		if(x[i] > x[i+1]){
			temp = x[i+1];
			while(x[j] > temp){
				x[j+1] = x[j];
				j--;
			}
			x[j+1] = temp;
		}
		out(x,n);	
	}	
}

int main(){
	int x[20],n;
	scanf("%d",&n);
	in(x,n);
	insertSort(x,n);
	
	return 0;
}
