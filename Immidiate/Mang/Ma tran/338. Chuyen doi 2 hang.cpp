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


void check(int x[][10],int n, int m){
	if(m == 0)
		m=n;
	int sum=0,sumR,markR,store[n*m];
	
	for(int i=0 ; i<n ; i++){
		sumR=0;
		for(int j=0 ; j<m ; j++){
			sumR+=x[i][j];
		}
		if(sumR > sum){
			sum = sumR;
			markR =i;
		}		
	}
	
	int sumC,markC,sum1=0,count=0;
	for(int i=0 ; i<m ; i++){
		sumC=0;
	
		for(int j=0 ; j<n ; j++){
			if(j==markR)
				continue;
			sumC+=x[j][i];
		}
		if(sumC > sum1){
			sum1 = sumC;
			markC =i;
		}
	}
	
	for(int i=0 ; i<n ; i++){
		if(i==markR)
			continue;
		for(int j=0 ; j<m ; j++){
			if(j==markC)
				continue;
			store[count++] = x[i][j];
		}
	}
	
	for(int i=0 ; i<(n-1)*(m-1) ; i++){
		if(i%(m-1)==0 && i!=0)
			printf("\n");
		printf("%d ",store[i]);		
	}
}

int main(){
	int x[10][10],n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	in(x,n,m);
	check(x,n,m);
	
	
	return 0;
}
