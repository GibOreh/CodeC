#include <stdio.h>

void act(int n){
	ahi: for(int i=2 ; i<=n ; i++){
		if(n==1)
			break;
		if(n%i ==0){
			printf("%d ",i);
			n/=i;
			goto ahi;
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	act(n);
	
	return 0;
}
