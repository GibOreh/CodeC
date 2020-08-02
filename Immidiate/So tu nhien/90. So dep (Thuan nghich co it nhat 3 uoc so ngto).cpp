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
		sum = 0;
		test = true;
		temp = i;
		count = 0;
		while(temp!=0){
			temp1 = temp % 10;
			store[count++] = temp1;
			temp /=10;
		}
		
		for(int k=0 ; k<count/2 ; k++){
			if(store[k] != store[count-k-1])
				test = false;
		}
		
		count = 0;
		
		if(test ==true){
			for(int j=2 ; j*2<=i ; j++){
				if(isPrime(j) == true){
					if(i%j ==0)
						count++;
				}	
			}
			if(count >2){
				printf("%d ",i);
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
