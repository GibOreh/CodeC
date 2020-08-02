#include <stdio.h>
int x[100][100];

void check(int n, int m=0){
	if(m == 0)
		m = n;	
	int temp1=2;
	int temp;	
	
	for(int i=0 ; i<n ; i++){
		temp=2;
		bool test=1;
		for(int j=0 ; j<i+i+1 ; j++){
			if(test){
				printf("%d",temp);
				if((i+1)*2 == temp){
					test = 0;
					continue;
				}				
				temp+=2;
			}
			else {
				temp-=2;
				printf("%d",temp);
			}
				
		}
		printf("\n");
	}
	
}

int main(){
	int n;
	scanf("%d",&n);
	check(n);
	
	return 0;
}
