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
	int temp;
	 
	hihi:for(int i=2 ; i<=n ; i++){
		temp=i;
		if(n%i ==0 && isPrime(i) ==true){
			printf("%d",i);
			n/=i;
			
			if(n!=1){
				printf("x");	
			}
			else break;
			goto hihi;		
		}
		
		
	}
	
}

int main(){
	int n;
	scanf("%d",&n);
	act(n);
	
	return 0;
}
