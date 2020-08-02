#include <stdio.h>

void in(int x[],int n){
	for(int i=0 ; i<n ; i++){
		scanf("%d",&x[i]);
	}
}

void out(int x[],int n){
	for(int i=0 ; i<n ; i++){
		printf("%d ",x[i]);
	}
}

void check(int x[],int n){
	int temp,odd[n],even[n],countO=0,countE=0;
	for(int i=0 ; i<n ; i++){
		if(x[i] %2==0)
			even[countE++] = x[i];
		else odd[countO++] = x[i];
	}
	out(even,countE);
	printf("\n");
	out(odd,countO);
}

int main(){
	int x[20],n;
	scanf("%d",&n);
	in(x,n);
	check(x,n);
	
	return 0;
}
