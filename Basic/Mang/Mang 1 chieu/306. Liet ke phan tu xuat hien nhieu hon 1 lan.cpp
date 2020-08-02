#include <stdio.h>

void in(int x[],int n){
	for(int i=0 ; i<n ; i++){
		scanf("%d",&x[i]);
	}
}

void check(int x[],int n){
	int count=0,count1=0,store[5];
	bool test;
	for(int i=0 ; i<n/2 ; i++){
		store[i] =-999;
	}
	
	for(int i=0 ; i<n ; i++){
		test = true;
		for(int j=i+1 ; j<n ; j++){
			if(x[i] == x[j]){				
				for(int k=0; k<5 ; k++){
					if(x[i] == store[k])
						test = false;
				}
				if(test == true){
					store[count++] = x[i];
				}
			}					
		}						
	}	
	for(int i=0 ; i<count ; i++){
		printf("%d ",store[i]);
		count1++;
	}
	if(count1 == 0)
		printf("%d",count1);
}

int main(){
	int x[20],n;
	scanf("%d",&n);
	in(x,n);
	check(x,n);
	
	return 0;
}
