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

void bubbleSort(int x[],int n){
	int temp,count;
	for(int i=0 ; i<n-1 ; i++){
		count=0;
		for(int j=0 ; j<n-1-i ; j++){
			if(x[j] > x[j+1]){
				temp = x[j];
				x[j] = x[j+1];
				x[j+1] = temp;
				count++;
			}
		}	
		if(count > 0)
			out(x,n);			
	}	
}

int main(){
	int x[20],n;
	scanf("%d",&n);
	in(x,n);
	bubbleSort(x,n);
	
	return 0;
}
