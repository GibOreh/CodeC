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
	int sum,temp1,count=0,temp;
	m>n ? (max=m, min=n): (min=m, max=n);
	 
	for(int i=min ; i<=max ; i++){
		temp =i;
		sum=0;
		test =true;
		
		if(isPrime(temp) ==false)
			continue;
			
		while(temp!=0){
			temp1 = temp % 10;
			if(isPrime(temp1) ==false)
				goto ahu;
			sum+=temp1;
			temp /=10;	
		}
		
		if(isPrime(sum) ==false)
			ahu:continue;
		count++;	
	}
	printf("%d",count);
}

int main(){
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	act(n,m);
	
	return 0;
}
