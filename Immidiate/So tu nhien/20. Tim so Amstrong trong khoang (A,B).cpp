#include <stdio.h>
#include <math.h>

void act(int n,int m){
	bool test;
	int min,max;
	int sum,temp1,count=0,temp,store[10];
	m>n ? (max=m, min=n): (min=m, max=n);
	 
	for(int i=min ; i<=max ; i++){
		temp =i;
		sum=0;
		count=0;
			
		while(temp!=0){
			temp1 = temp % 10;
			store[count++] = temp1;
			temp /=10;	
		}
		
		for(int j=0 ; j<count ; j++){
			sum+= pow(store[j],count);
		}
		
		if(sum ==i)
			printf("%d ",i);
			
	}
}

int main(){
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	act(n,m);
	
	return 0;
}
