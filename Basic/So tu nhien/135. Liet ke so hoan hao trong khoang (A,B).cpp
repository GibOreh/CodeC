#include <stdio.h>

void check(int n,int m){
	int sum=0;
	if(n<=m){
		for(int i=n; i<m ;i++){
		sum=0;
		for(int j=1 ; j<i ;j++){
			if(i%j==0)
				sum+=j;
		}
		if(sum==i){
			printf("%d ",sum);
		}
	 	}	
	}
	else{
		for(int i=m; i<n ;i++){
		sum=0;
		for(int j=1 ; j<i ;j++){
			if(i%j==0)
				sum+=j;
		}
		if(sum==i){
			printf("%d ",sum);
		}
	}	
	}
	
}


int main(){
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	check(n,m);
	return 0;
}

