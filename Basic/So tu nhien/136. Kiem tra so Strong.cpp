#include <stdio.h>
#include <math.h>

int giaithua(int n);

int check(int n){
	int temp,count,sum,temp2,store[10];
		temp=0;
		temp2=n;
		count=0;
		sum=0;
		while(temp2!=0){
			store[count++]=temp2%10;
			temp2/=10;	
		}
		for(int j=0 ; j<count ; j++){
			sum+=giaithua(store[j]);
		}
		
		if(sum==n)
			return 1;
			return 0;		
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
	printf("%d",check(n));
	
	return 0;
}

