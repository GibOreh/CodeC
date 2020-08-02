#include <stdio.h>
#include <math.h>
int a[100][100];

void print(int n,int m){
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			printf("%d",a[i][j]);			
		}
		printf("\n");
	}
}

void out(int n,int m=0){
	m==0 ? m=n : m=m;
	int x = m<n?n:m;
//4321
//3212
//2123
//1234	
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			if(x>i+j)
				a[i][j] = x-i-j;
			else a[i][j] = a[i][j-1] + 1;			
		}
	}
}

int main(){
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	out(n,m);
	print(n,m);
	
	return 0;
}
