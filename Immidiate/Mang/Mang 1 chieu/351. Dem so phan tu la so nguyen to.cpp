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

void check(int x[],int n,int store[]){
	int count=0;
	bool test;
	for(int i=0 ; i<n ; i++){
		test = true;
		for(int j=x[i]-1 ; j>1 ; j--){
			// x[i] chia het cho j -> khong phai so ngto
			if(x[i] % j ==0){
				test = false;
			}
		}
		
		//check condition and store value (x[i] = 1 false)
		if(test == true && x[i]>1){
			store[count++] = x[i];
		}	
	}
	
	//numbers of value
	printf("%d ",count);
	for(int i=0 ; i<count ; i++){
		printf("%d ",store[i]);
	}
	
}

int main(){
	int x[20],n,store[10];
	scanf("%d",&n);
	in(x,n);
	check(x,n,store);
	
	return 0;
}
