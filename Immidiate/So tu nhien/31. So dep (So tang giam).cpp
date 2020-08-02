#include <stdio.h>
#include <math.h>

bool isPrime(int n){
	if(n<2)
		return false;
	for(int i=2 ; i*i<=n ; i++){
		if(n%i==0)
			return false;
	}
	return true;
}

void act(int n){
	bool test;
	int temp1,countD,countX=0,countU,count,temp,store[10];
	
	 
	for(int i=pow(10,n-1) ; i<pow(10,n) ; i++){
		if(isPrime(i) ==false)
			continue;	
		countU=0;
		countD=0;
		temp=i;
		count=0;
		
		while(temp!=0){
			temp1 = temp % 10;
			store[count++] = temp1;
			temp /=10;
		}
		
		for(int k=0 ; k<n-1 ; k++){
			if(store[k] > store[k+1])
				countU++;
			if(store[k] < store[k+1])
				countD++;
		}		
		if(countU==n-1 || countD==n-1)
			countX++;
	}
	printf("%d",countX);		
}

int main(){
	int n;
	scanf("%d",&n);
	act(n);
	
	return 0;
}
