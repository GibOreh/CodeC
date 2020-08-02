#include <stdio.h>
#include <stdio.h>

int check(int n){
	int temp,sum,count=0,temp1,temp2;
	for(int i=2 ; i<=n ; i++){
		sum=0;
		temp=0;
		for(int j=2 ; j<i ;j++){
			if(i%j==0)
				temp++;
		}
		if(temp==0){
			temp2 = i;
			while(temp2!=0){
				temp1=0;
				temp1=temp2%10;
				sum+=temp1;
				temp2/=10;
			}
			if(sum % 5==0){
				printf("%d ",i);
				count++;
			}
				
		}		
	}
	printf("\n");
	return count;
}


int main(){
	int n;
	scanf("%d",&n);
	printf("%d",check(n));
	
	
	
	return 0;
}




