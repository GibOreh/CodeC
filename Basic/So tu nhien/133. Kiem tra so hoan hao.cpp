#include <stdio.h>

int check(int n){
	int sum=0;
	for(int j=1 ; j<n ;j++){
		if(n%j==0)
			sum+=j;
	}
	if(sum==n){
		return 1;
	}
	return 0;
}


int main(){
	int n;
	scanf("%d",&n);
	printf("%d",check(n));
	return 0;
}

