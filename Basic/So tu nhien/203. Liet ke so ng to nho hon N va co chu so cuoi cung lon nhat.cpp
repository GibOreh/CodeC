#include <stdio.h>
#include <stdio.h>

int check(int n){
	int temp,count=0,temp1,temp2,count1,store[5];
	for(int i=2 ; i<=n ; i++){
		temp=0;
		count1=0;
		//lay I de xet so ng to
		for(int j=2 ; j<i ;j++){
			if(i%j==0)
				temp++;
		}
		if(temp==0){
			temp2 = i;
			// tach so
			while(temp2!=0){ 
				temp1=0;
				store[count1]=temp2%10;
				temp2/=10;
				count1++;
			}
			//so sanh chu so cuoi cung
			temp = store[0];
			for(int k=0 ; k<count1 ; k++){
				if(temp < store[k])
					temp = store[k];
			}
			if(temp == store[0]){
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




