#include <stdio.h>

void check(int n){
	int temp;
	for(int i=1 ; i<=n ; i++){
		temp=0;
		for(int j=2 ; j<i ;j++){
			if(i%j==0)
				temp++;
		}
		if(temp==0){
			printf("%d ",i);
		}		
	}
}


int main(){
	int n;
	scanf("%d",&n);
	check(n);
	
	return 0;
}

