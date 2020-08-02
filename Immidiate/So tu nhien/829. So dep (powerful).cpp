#include <stdio.h>

bool isPrime(int n){
	for(int i=2 ; i*i<=n ; i++){
		if(n%i==0)
			return false;
	}
	return true;
}

void act(int n,int m){
	bool test;
	int min,max;
	int sum,temp1,count,temp,store[10];
	m>n ? (max=m, min=n): (min=m, max=n);
	 
	for(int i=min ; i<=max ; i++){
		for(int j=2 ; j*2<=i ; j++){
			if(isPrime(j) ==true && i%(j*j)==0){
				printf("%d ",i);
				break;
			}
		}
	}
}

int main(){
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	act(n,m);
	
	return 0;
}
