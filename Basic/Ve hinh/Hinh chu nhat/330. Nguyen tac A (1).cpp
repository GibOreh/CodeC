#include <stdio.h>

void out(int n,int m=0){
	m==0 ? m=n : m=m;
	int x = m<n?n:m;
	
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			if(i<=j)	
				printf("%c",'a'+ x-i-1);
			else printf("%c",'a'+ x-j-1);			
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
