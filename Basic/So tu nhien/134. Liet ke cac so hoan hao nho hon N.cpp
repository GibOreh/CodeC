#include <stdio.h>

void check(int n){
	int sum;
	for(int i=1; i<=n ;i++){
		sum=0;
		for(int j=1 ; j+j<=i ;j++){
			if(i%j==0)
				sum+=j;
		}
		if(sum==i){
			printf("%d ",sum);
		}
	}
}


int main(){
	int n;
	scanf("%d",&n);
	check(n);
	return 0;
}

