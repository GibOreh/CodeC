#include <stdio.h>

void act(int n,int m){
	bool test;
	int min,max;
	int sum,temp1,count,temp,store[10],count1;
	m>n ? (max=m, min=n): (min=m, max=n);
	 
	for(int i=min ; i<=max ; i++){
		test=true;
		temp=i;
		count1=0;
		sum=0;
		count=0;
		
		while(temp!=0){
			temp1 = temp % 10;
			store[count++] = temp1;
			temp /=10;
		}
		
		for(int k=0 ; k<count ; k++){
			if(store[k] != store[count-k-1])
				test = false;
			sum+=store[k];
		}
		
		for(int j=0 ; j<count ; j++){
			if(store[j] !=6)
				count1++;
		}	
			
		if(test ==true && count1!=count && sum%10==8)
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
