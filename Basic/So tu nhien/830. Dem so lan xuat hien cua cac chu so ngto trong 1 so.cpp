#include <stdio.h>

bool checkSNT(long x){
	if(x<2)
		return false;
	for(int i=2 ; i*i<=x ; i++){
		if(x%i ==0)
			return false;		  
	}
	return true;
}

void checkAll(long x){
	long temp,temp1=0,count1;
	long prime[20], count[20];
	
	for(int i=0 ; i<20 ; i++){
		count[i] =0;
		prime[i] =0;
	}
	
	while(x!=0){
		temp = x%10;
		if(checkSNT(temp) == true){
			count1=0;
			for(int i=0 ; i<temp1+1 ; i++){
				if(temp != prime[i]){
					count1++;
				}
				else count[i]++;			
			}
			if(count1 == temp1+1){
				prime[temp1] = temp;
				count[temp1]++;
				temp1++;
			}
				
		}
		
		x/=10;
	}
	
	for(int i=temp1-1 ; i>=0 ; i--){
		printf("%d %d\n",prime[i], count[i]);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	checkAll(n);
	
	
	return 0;
}
