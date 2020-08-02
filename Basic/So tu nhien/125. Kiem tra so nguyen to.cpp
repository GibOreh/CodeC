#include <stdio.h>

int check(int n){
	int temp=0;
		for(int j=2 ; j*j<=n ;j++){
			if(n%j==0)
				temp++;
		}
		if(temp==1){
			return 1;
		}
		return 0;
	}


int main(){
	int n;
	scanf("%d",&n);
	printf("%d",check(n));
	return 0;
}

