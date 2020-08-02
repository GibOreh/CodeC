#include <stdio.h>

void in(int x[],int n){
	for(int i=0 ; i<n ; i++){
		scanf("%d",&x[i]);
	}
}

void check(int x[],int n){
	int max=x[0],min=x[0];
	for(int i=0 ; i<n ; i++){
		if(max < x[i])
			max = x[i];
		if(min > x[i])
			min = x[i];	
	}
	printf("%d ",max);
	printf("%d",min);
}

int main(){
	int x[20],n;
	scanf("%d",&n);
	in(x,n);
	check(x,n);
	
	return 0;
}
