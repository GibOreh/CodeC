#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char s1[100],s2[100];
void del(int n){
	for(int i=n ; i<strlen(s1)-1 ; i++){
		s1[i] = s1[i+1];
	}
	s1[strlen(s1)-1] = '\0';
}

int main(){
	gets(s1);
	gets(s2);
	for(int i=0 ; i<strlen(s1) ; i++){
		bool test=1;
		if(s1[i] == s2[0]){
			for(int j=1,k=i+1 ; j<strlen(s2) ; j++,k++){
				if(s1[k] != s2[j]){
					test = 0;
					break;
				}
			}
			if(test==1){
				for(int l=0 ; l<strlen(s2) ; l++){
					del(i);
				}
				i=0;
			}	
		}
	}
	puts(s1);
	return 0;
}

