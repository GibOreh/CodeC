#include <stdio.h>

void in(int x[],int n){
	for(int i=0 ; i<n ; i++){
		scanf("%d",&x[i]);
	}
}

void check(int x[],int n){
	int max2=x[0],max=0;
	for(int i=0 ; i<n ; i++){
		if(max2 < x[i])
			max2 = x[i];
	}
	
	for(int i=0 ; i<n ; i++){
		if(max < x[i] && x[i]!=max2)
			max = x[i];
	}
	printf("%d ",max);
}

int main(){
	int x[20],n;
	scanf("%d",&n);
	in(x,n);
	check(x,n);
	
	return 0;
}
