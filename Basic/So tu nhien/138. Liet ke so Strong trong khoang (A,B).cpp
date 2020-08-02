#include <stdio.h>
#include <math.h>

int giaithua(int n);

void check(int n,int m){
	int temp,count,sum,temp2,store[10];
	
	if(m<n){
		for(int i=m ; i<=n ; i++){
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
	else {
		for(int i=n ; i<=m ; i++){
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

}

int giaithua(int n){
	int multi=1;
	for(int i=n ; i>0 ; i--)
		multi*=i;
	return multi;
}


int main(){
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	check(n,m);
	
	return 0;
}

