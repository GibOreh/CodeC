#include <stdio.h>

int main(){
	int a[100],b[100],n,count1=0,count=0;
	scanf("%d",&n);
	for(int i=0 ; i<n ; i++)
		scanf("%d",&a[i]);
		
	for(int i=0 ; i<n-1 ; i++){
		for(int j=i+1 ; j<n ; j++){
			if(a[i]>a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for(int i=0 ; i<n ; i++){
		if(a[i] ==a[i+1]){
			count++;
			for(int j=i+1 ; j<n ; j++){
				if(a[j] == a[j+1]){
					i=j+1;
				}
				else {
					break;
				}
			}
			b[count1++] = a[i];
		}
	}
	printf("%d\n",count);
	for(int i=0 ; i<count1 ; i++)
		printf("%d ",b[i]);
	
	return 0;
}
