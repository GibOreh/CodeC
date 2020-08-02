#include <stdio.h>
#include <string.h>

char s1[500],temp[100],cmp[100];
void del(int n){
	for(int i=n ; i<strlen(s1)-1 ; i++){
		s1[i] = s1[i+1];
	}
	s1[strlen(s1)-1] = '\0';
}

int main(){
	gets(s1);
	int mark=0,mark1=0;	
	for(int i=0 ; i<strlen(s1) ; i++){
		if(s1[i] == ' '){
			strncpy(temp,s1+mark,i-mark);
			mark = i+1;
			mark1 = i+1;
			for(int j=mark ; j<=strlen(s1) ; j++){
				if(s1[j] == ' ' || s1[j]=='\0'){
					strncpy(cmp,s1+mark1,j-mark1);
					if(strncmp(temp,cmp,j-mark1)==0){
						for(int k=mark1 ; k<=j ; k++)
							del(mark1);
						j = mark1;
					}
					else mark1 = j+1;
				}
			}
		}
	}
	
	puts(s1);
	
	
	return 0;
}
