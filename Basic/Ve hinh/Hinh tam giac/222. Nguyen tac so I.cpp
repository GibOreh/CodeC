#include <stdio.h>

void out(int n,int m=0){
	m==0 ? m=n : m=m;
	int ahihi=0;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<=i ; j++){	
			printf("%d",++ahihi);	
		}
		printf("\n");
	}
}

int main(){
	int n;
	scanf("%d",&n);
	out(n);
	
	return 0;
}
