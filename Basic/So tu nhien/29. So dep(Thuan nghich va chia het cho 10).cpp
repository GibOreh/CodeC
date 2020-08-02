#include <stdio.h>
#include <math.h>

int check(int n){
	int count1,store[10],sum,temp2,count=0,count2;
	for(int i=pow(10,n-1) ; i<pow(10,n) ; i++){
		count1 =0;
		sum=0;
		temp2 =i;
		count2=0;
		while(temp2!=0){								
				store[count1] = temp2%10;
				sum+=store[count1++];
				temp2/=10;
			}
		if(sum%10!=0)
			continue;
			
		for(int j=0 ; j<count1/2; j++){
				if(store[j] != store[count1-j-1]){
					count2++;
					break;
				}					
			}	
		
		if(count2==0){
			count++;
		}	
	}	
	return count;
}


int main(){
	int n;
	scanf("%d",&n);
	printf("%d",check(n));
	
	return 0;
}




