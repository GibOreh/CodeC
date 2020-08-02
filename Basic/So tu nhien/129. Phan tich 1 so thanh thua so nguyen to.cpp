#include <stdio.h>

void check(int n){
	int temp,sum=0,temp1;
	for(int i=2 ; i<=n ; i++){
		temp=0;
		temp1=n;
		for(int j=2 ; j<i ;j++){
			if(i%j==0){
				temp++;
				break;
			}				
		}
		
		if(temp==0){
			if(temp1%i==0){
				temp1/=i;
				printf("%d ",i);
			}
		}		
	}
}


int main(){
	int n;
	scanf("%d",&n);
	check(n);
	
	return 0;
}

