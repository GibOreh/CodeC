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

void Delete(int x[],int p,int &n){
	for(int i=p ; i<n ; i++){
		x[i] = x[i+1];
	}
	n--;
}

void act(int x[],int &n){
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			if(i==j)
				continue;
			if(x[i] == x[j])
				Delete(x,j,n);
		}
	}	
}

int main(){
	int x[20],n;
	scanf("%d",&n);
	in(x,n);
	act(x,n);
	out(x,n);
	
	return 0;
}
