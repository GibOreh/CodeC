#include <stdio.h>

void out(int x[][20],int n,int m=0){
	if(m == 0)
		m = n;
	for(int i=0 ; i<n ; i++){	
		for(int j=0 ; j<m ; j++){
			
			if(n%2==0 && m%2==0){
				if(i==n/2 || i==n/2-1 || j==m/2 || j==m/2-1)
					printf("%d",0);
				else printf("%d",1);
			}
			
			if(n%2!=0 && m%2!=0) {
				if(i==n/2 || j==m/2 )
					printf("%d",0);
				else printf("%d",1);	
			}
			
			if(n%2==0 && m%2!=0){
				if(i==n/2 || i==n/2-1 || j==m/2)
					printf("%d",0);
				else printf("%d",1);
			}
			
			if(n%2!=0 && m%2==0) {
				if(i==n/2 || j==n/2-1 || j==m/2)
					printf("%d",0);
				else printf("%d",1);	
			}
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
