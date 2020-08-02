#include <stdio.h>
#include <math.h>


int main(){
	int n,fibo[100];
	scanf("%d",&n);
	fibo[0]=0 , fibo[1]=1;
	
	for(int i=2 ; i<100 ; i++){
		fibo[i] = fibo[i-2] + fibo[i-1];
	}
	
	for(int j=0 ; j<n ; j++){
		printf("%d ",fibo[j]);
	}
	
	return 0;
}
