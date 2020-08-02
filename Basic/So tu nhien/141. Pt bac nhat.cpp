#include <stdio.h>

int main(){
	float a,b;
	scanf("%f",&a);
	scanf("%f",&b);
	float re = -b/a;
	
	if(a==0 && b==0)
		printf("VSN");
	else if(a==0 && b!=0)
		printf("VN");
	else if(a!=0 && b==0)
		printf("0.00");
	else printf("%.2f ",re);
		
	
	
	return 0;
}
