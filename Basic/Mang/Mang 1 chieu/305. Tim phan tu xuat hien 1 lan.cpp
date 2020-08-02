#include <stdio.h>

void in(int x[],int n){
	for(int i=0 ; i<n ; i++){
		scanf("%d",&x[i]);
	}
}

void check(int x[],int n){
	bool test;
	int count=0;
	for(int i=0 ; i<n ; i++){
		test = true;
		for(int j=0 ; j<n ; j++){
			if(i==j)
				continue;
			if(x[i] == x[j]){
				test = false;
			}
		}
		if(test == true){
			printf("%d ",x[i]);
			count++;
		}		
	}	
	if(count == 0)
		printf("%d",count);
}

int main(){
	int x[20],n;
	scanf("%d",&n);
	in(x,n);
	check(x,n);
	
	return 0;
}
