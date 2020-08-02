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
	printf("\n");
}

void act(int x[],int n){
	int countE=0,countO =0;
	for(int i=0 ; i<n ; i++){
		if(x[i] %2==0)
			countE++;
		else countO++;
	}
	
	printf("%d ",countE);
	for(int i=0 ; i<n ; i++){
		if(x[i] %2==0)
			printf("%d ",x[i]);
	}
	
	printf("\n%d ",countO);
	for(int i=0 ; i<n ; i++){
		if(x[i] %2!=0)
			printf("%d ",x[i]);
	}
}

int main(){
	int x[20],n;
	scanf("%d",&n);
	in(x,n);
	act(x,n);
	
	return 0;
}
