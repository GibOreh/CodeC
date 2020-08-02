#include <stdio.h>
#include <math.h>

int check(int n){
	int temp,count=0,temp1,temp2,store[10],count1,sum,count2;
	for(int i=2 ; i<=n ; i++){
		
		temp=0;
		count2=0;
		count1=0;
			temp2 = i;
			
			while(temp2!=0){				
				store[count1++] = temp2%10;
				temp2/=10;
			}
			for(int j=0 ; j<count1; j++){
				if(store[j] != store[count1-j-1] || store[j]==9){
					count2++;
					break;
				}
			}
			if(count2==0){
				printf("%d ",i);
				count++;	
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




