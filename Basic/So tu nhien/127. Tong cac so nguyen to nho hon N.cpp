#include <stdio.h>

int check(int n){
	int temp,sum=0;
	for(int i=2 ; i<=n ; i++){
		temp=0;
		for(int j=2 ; j<i ;j++){
			if(i%j==0)
				temp++;
		}
		if(temp==0){
			sum+=i;
		}		
	}
	return sum;
}


int main(){
	int n;
	scanf("%d",&n);
	printf("%d",check(n));
	
	return 0;
}

