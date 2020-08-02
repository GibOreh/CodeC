#include <stdio.h>


int main(){
	int a,b,sumA=0,sumB=0,temp1;
	scanf("%d",&a);
	scanf("%d",&b);
	
	int A=a;
	int B=b;
	
	while(a!=0){
		temp1=0;
		temp1=a%10;
		sumA+=temp1;
		a/=10;
	}
	
	while(b!=0){
		temp1=0;
		temp1=b%10;
		sumB+=temp1;
		b/=10;
	}
	
	if(sumA	<= sumB){
		printf("%d ",A);
		printf("%d",B);
	}
	else {
		printf("%d ",B);
		printf("%d",A);
	}
	
	
	return 0;
}

