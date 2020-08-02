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
	int tempMax,max=x[0],min=max,tempMin;
	for(int i=0 ; i<n ; i++){
		if(max <= x[i]){
			max = x[i];
			tempMax = i;
		}
		if(min >= x[i]){
			min = x[i];
			tempMin = i;
		}	
	}
	printf("%d ",max);
	printf("%d",tempMax+1);
	printf("\n%d ",min);
	printf("%d ",tempMin+1);
}

int main(){
	int x[20],n;
	scanf("%d",&n);
	in(x,n);
	check(x,n);
	
	return 0;
}
