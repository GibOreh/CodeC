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
	int temp,temp1,store[10],count,count1=0,real[10];
	bool test;
	
	for(int i=0 ; i<n ; i++){
		if(x[i]<10)
			continue;
		test = true;
		temp =x[i];
		count=0;
		while(temp!=0){
			temp1 = temp % 10;
			store[count++] = temp1;
			temp /=10;
		}
		
		for(int k=0 ; k<count/2 ; k++){
			if(store[k] != store[count-k-1])
				test = false;
		}
		
		if(test == true)
			real[count1++] = x[i];
	}
	
	printf("%d ",count1);
	out(real,count1);
	
}

int main(){
	int x[20],n;
	scanf("%d",&n);
	in(x,n);
	act(x,n);
	
	return 0;
}
