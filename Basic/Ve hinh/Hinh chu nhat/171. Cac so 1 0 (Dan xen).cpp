#include <stdio.h>

void out(int n,int m=0){
	m==0 ? m=n : m=m;
	
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			if((i+j) %2 ==0)	
				printf("%d",1);
			else printf("%d",0);	
		}
		printf("\n");
	}
}

int main(){
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	out(n,m);
	
	return 0;
}
