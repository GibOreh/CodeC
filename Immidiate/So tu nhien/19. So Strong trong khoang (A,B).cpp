#include <stdio.h>

int giaithua(int n){
	
	int multi =1;
	
	for(int i=n ; i>1 ; i--)
		multi*=i;
	return multi;
}

void act(int n,int m){
	bool test;
	int min,max;
	int sum,temp1,count=0,temp;
	m>n ? (max=m, min=n): (min=m, max=n);
	 
	for(int i=min ; i<=max ; i++){
		sum=0;
		temp=i;
		while(temp!=0){
			temp1 = temp % 10;
			sum+=giaithua(temp1);
			temp /=10;
		}
		
		if(sum==i){
			printf("%d ",i);
			count++;
		}			
	}		
	if(count==0)
		printf("%d",0);
}

int main(){
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	act(n,m);
	
	return 0;
}
