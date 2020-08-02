#include <stdio.h>

void in(int x[],int n){
	for(int i=0 ; i<n ; i++){
		scanf("%d",&x[i]);
	}
}

void out(int x[],int n){
	for(int i=0 ; i<n ; i++){
		printf("%d ",x[i]);
	}
	printf("\n");
}

bool isPrime(int n){
	if(n<2)
		return false;
	for(int i=2 ; i*i<=n ; i++){
		if(n%i==0)
			return false;
	}
	return true;
}

void act(int x[],int n){
	int store[10],count=0;
	bool test;
	
	for(int i=0 ; i<n ; i++){
		if(isPrime(x[i])== true){
			test = true;
			for(int j=0 ; j<count ; j++){
				if(x[i] == store[j])
					test =false;
			}
			
			if(test ==true)
				store[count++] = x[i];
		}
	}
	
	for(int i=0 ; i<count ; i++){
		for(int j=i+1 ; j<count ; j++){
			if(store[i] > store[j]){
				store[i] = store[i] + store[j];
				store[j] = store[i] - store[j];
				store[i] = store[i] - store[j];
			}
		}
	}
	
	int Scount;	
		for(int i=0 ; i<count ; i++){
			Scount=0;
			for(int j=0 ; j<n ; j++){
				if(store[i] ==x[j])
					Scount++;
			}
			printf("%d %d\n",store[i],Scount);
		}
	
	
}

int main(){
	int x[20],n;
	scanf("%d",&n);
	in(x,n);
	act(x,n);
	
	return 0;
}
