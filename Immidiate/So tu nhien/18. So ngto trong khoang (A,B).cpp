#include <stdio.h>

bool isPrime(int n){
	if(n<2)
		return false;
	for(int i=2 ; i*i<=n ; i++){
		if(n%i==0)
			return false;
	}
	return true;
}

void act(int n,int m){
	bool test;
	int min,max;
	int sum,temp1,count,temp,store[10],count1;
	m>n ? (max=m, min=n): (min=m, max=n);
	 
	for(int i=min ; i<=max ; i++){
		if(isPrime(i)== true)
			printf("%d ",i);
	}
		
		
	
}

int main(){
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	act(n,m);
	
	return 0;
}
