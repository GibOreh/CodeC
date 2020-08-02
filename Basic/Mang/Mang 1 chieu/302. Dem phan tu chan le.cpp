#include <stdio.h>

void in(int x[],int n){
	for(int i=0 ; i<n ; i++){
		scanf("%d",&x[i]);
	}
}

void check(int x[],int n){
	int countOdd=0,countEven=0;
	for(int i=0 ; i<n ; i++){
		if(x[i] % 2 ==0)
			countEven++;
		else countOdd++;
	}

	printf("%d ",countEven);
	printf("%d ",countOdd);
}

int main(){
	int x[20],n;
	scanf("%d",&n);
	in(x,n);
	check(x,n);
	
	return 0;
}
