#include <stdio.h>

void in(int x[][10],int n,int m=0){
	if(m == 0)
		m = n;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			scanf("%d",&x[i][j]);
		}
	}
}

void out(int x[][10],int n,int m=0){
	if(m == 0)
		m = n;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
}

void check(int x[][10],int n, int m=0){
	if(m == 0)
		m = n;
	char temp='`';
	
	for(int i=0 ; i<n ; i++){
		
		if(i%2==0){
			temp+=(i+1);
			for(int j=0 ; j<=i ; j++){		
				printf("%c ",temp++);
			}
		}
		else {
				temp+=i;
				for(int j=0 ; j<=i ; j++){		
					printf("%c ",temp--);
				}
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
