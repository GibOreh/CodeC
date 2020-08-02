#include <stdio.h>

void out(int x[][20],int n,int m=0){
	if(m == 0)
		m = n;
	for(int i=0 ; i<n ; i++){	
		for(int j=0 ; j<m ; j++){
			if(j<m-i){
				printf("%d",j+1+i);
			}
			else printf("%d",m);
		}	
		printf("\n");
	}
}


int main(){
	int x[20][20],n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	out(x,n,m);
	
	return 0;
}
