#include <stdio.h>
#include <math.h>

int giaithua(int n);

void check(int n){
	int temp,count,sum,temp2,store[10];
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
			sum+=giaithua(store[j]);
		}
		
		if(sum==i)
			printf("%d ",i);		
	}
}

int giaithua(int n){
	int multi=1;
	for(int i=n ; i>0 ; i--)
		multi*=i;
	return multi;
}


int main(){
	int n;
	scanf("%d",&n);
	check(n);
	
	return 0;
}

