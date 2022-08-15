#include <stdio.h>
#include <string.h>

int main(){
	int count=0;
	char s1[50];
	char s2[50];
	char smin[50];
	char smax[50];
	int T=0;
	printf("Vui long nhap s1=");
	scanf("%s",s1);
	printf("Vui long nhap s2=");
	scanf("%s",s2);

	if(strcmp(s1,s2)==0){
		printf("Yes");
	}
	if(strlen(s1)<strlen(s2)){
		strcpy(smin,s1);
		strcpy(smax,s2);
	}else{
		strcpy(smin,s2);
		strcpy(smax,s1);
	}


	for(int i=0;i<=strlen(smin);i++){
		for(int j=0;j<=strlen(smin);j++){
			if(smin[j]==smax[i]){
				count+=1;
				if(T<count){
					T=count;
				}
			}
			count=0;
		}
	}

	if(T==strlen(smin)){
		printf("Yes");
	}
		printf("No");




	}
	
