#include <stdio.h>
#include <math.h>

void out(int n,int m=0){
	m==0 ? m=n : m=m;
	
	int ahuhu=0, x=1;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<=i ; j++){
			x+=ahuhu++;
			printf("%d ",x);	
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
