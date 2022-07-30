#include <stdio.h>
int main(){
	int n;
	int i;
	int max=0;
	printf("Vui long nhap n=");
	scanf("%d",&n);

	while(n<=0){

		printf("Vui long nhap n=");
	    scanf("%d",&n);

		
		}
		for(i=0;n>0;n/=10){
			i=n%10;

			if(i>max){max=i;
			}
		}
		printf("Chu so lon nhat cua n= %d",max);
	}
