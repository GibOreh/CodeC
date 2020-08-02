#include <stdio.h>
#include <math.h>

void out(int x[][20],int n,int m=0){
	if(m == 0)
		m = n;
	int y = abs(m-n); 
	for(int i=0 ; i<n ; i++){	
		for(int j=0 ; j<m ; j++){
			if(i<m-j){
				printf("%c",'A'+i+j);
			}
			else printf("%c",'A'+m-j-1);
			
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
