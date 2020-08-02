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
	int sum,temp1,count=0,temp,fibo[100];
	m>n ? (max=m, min=n): (min=m, max=n);
	
	fibo[0]=0 , fibo[1]=1;	
	for(int i=2 ; i<100 ; i++){
		fibo[i] = fibo[i-2] + fibo[i-1];
	}
	 
	for(int i=min ; i<=max ; i++){
		if(isPrime(i)==false)
			continue;		
		test=false;
		sum=0;
		temp=i;
		
		while(temp!=0){
			temp1 = temp % 10;
			sum+=temp1;
			temp /=10;
		}
		
		for(int k=0 ; k<100 ; k++){
			if(sum==fibo[k]){
				test=true;
				break;
			}
		}
		
		if(test == true)
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
