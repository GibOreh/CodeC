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
	int min = n<m ? n:m;
	int max = n<m ? m:n;
	
	bool test,test1;	
	for(int j=min ; j<=max ; j++){
		test = 1;
		test1 = 0;
		for(int i=2 ; i+i<=j ; i++){
			if(isPrime(i)){
				if(j%i==0){
					test1=1;
					if(j%(i*i)!=0)
						test=0;	
				}
			} 
		}
		if(test && test1) printf("%d ",j);
	}
	
}

int main(){
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	act(n,m);
	
	return 0;
}
