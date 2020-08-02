#include <stdio.h>

int check(int n,int m){
	int temp,sum=0;
	
	if(n>=m){
	  	for(int i=m+1 ; i<=n ; i++){
			temp=0;
			for(int j=2 ; j<i ;j++){
				if(i%j==0)
					temp++;
			}	
			if(temp==0){
				sum+=i;
			}		
		}	
	}
	else {
		for(int i=n+1 ; i<=m ; i++){
			temp=0;
			for(int j=2 ; j<i ;j++){
				if(i%j==0)
					temp++;
			}	
			if(temp==0){
				sum+=i;
			}		
		}
	}
		
	return sum;
}


int main(){
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	printf("%d",check(n,m));
	
	return 0;
}

