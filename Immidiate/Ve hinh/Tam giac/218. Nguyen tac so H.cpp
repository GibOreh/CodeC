#include <stdio.h>

void check(int x[][10],int n, int m=0){
	if(m == 0)
		m = n;
	
	int temp1=2;
	int temp;
	
	for(int i=0 ; i<n ; i++){
		temp=1;
		
		for(int j=0 ; j<i+i+1 ; j++){
			
			printf("%d",temp);
			if( (i+i+1) / 2 >j)
				temp+=temp1;		
			else temp-=temp1;
		}
		printf("\n");
	}
	
}

int main(){
	int x[10][10],n;
	scanf("%d",&n);
	check(x,n);
	
	return 0;
}
