#include <stdio.h>
#include <math.h>

void check(int n){
	int temp,count,sum,temp2,store[5];
	for(int i=1 ; i<=n ; i++){
		temp=0;
		temp2=i;
		count=0;
		sum=0;
		while(temp2!=0){
			store[count++]=temp2%10;
			temp2/=10;	
		}
		for(int j=0 ; j<count ; j++){
			sum+=pow(store[j],count);
		}
		
		if(sum==i)
			printf("%d ",i);		
	}
}


int main(){
	int n;
	scanf("%d",&n);
	check(n);
	
	return 0;
}

