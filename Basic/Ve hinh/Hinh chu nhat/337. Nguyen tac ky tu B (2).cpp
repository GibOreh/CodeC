#include <stdio.h>
#include <math.h>

void out(int x[][20],int n,int m=0){
	if(m == 0)
		m = n;
	int y = abs(m-n); 
	for(int i=0 ; i<n ; i++){	
		for(int j=0 ; j<m ; j++){
			if(m-j<=n-i){
				printf("%c",'A'+m-1);
			}
			else printf("%c",'A'+n-i-1+j);
			
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
