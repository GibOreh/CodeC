#include <stdio.h>

void in(int x[],int n){
	for(int i=0 ; i<n ; i++){
		scanf("%d",&x[i]);
	}
}

void check(int x[],int n){
	bool test;
	for(int i=0 ; i<n ; i++){
		test = true;
		for(int j=i-1 ; j>=0 ; j--){
			if(x[i] == x[j])
				test = false;	
		}
		if(test == true)
			printf("%d ",x[i]);
	}	
}

int main(){
	int x[20],n;
	scanf("%d",&n);
	in(x,n);
	check(x,n);
	
	return 0;
}
