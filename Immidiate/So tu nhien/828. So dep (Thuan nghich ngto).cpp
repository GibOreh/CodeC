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

void act(int n,int m){
	bool test;
	int min,max;
	int sum,temp1,count,temp,store[10];
	m>n ? (max=m, min=n): (min=m, max=n);
	
	 
	for(int i=min ; i<=max ; i++){
		count =0;
		temp=i;
		sum=0;
		while(temp!=0){
			temp1 = temp % 10;
			store[count++] = temp1;
			temp /=10;
		}
		
		for(int k=0 ; k<count ; k++){
			sum+=store[k]*pow(10,count-1-k);
		} 
		
		if(isPrime(sum) ==true && isPrime(i)==true && i!=sum) 
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
