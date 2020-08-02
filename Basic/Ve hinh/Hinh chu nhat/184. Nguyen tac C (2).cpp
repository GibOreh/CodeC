#include <stdio.h>
#include <math.h>
int a[100][100];
//3 5
//OUTPUT
//12345
//23454
//34543
//
//5 3
//OUTPUT
//123
//232
//321
//432
//543

void out(int n,int m=0){
	m==0 ? m=n : m=m;
	int x = m<n?n:m;

	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			if(m>i+j || j==0)
				a[i][j] = 1+i+j;
			else a[i][j] = a[i][j-1] - 1;			
		}
	}
}
void print(int n,int m){
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			printf("%d",a[i][j]);			
		}
		printf("\n");
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
