#include <stdio.h>
#include <math.h>

void out(int x[][20],int n,int m=0){
	if(m == 0)
		m = n;
	int y = abs(m-n); 
	for(int i=0 ; i<n ; i++){	
		for(int j=0 ; j<m ; j++){
			if(i==0 || j==0) printf("%d",i+j+1);
			else if(i<m-j){
				printf("%d",i+j+1);
			}
			else printf("%d",m-j);
			
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
