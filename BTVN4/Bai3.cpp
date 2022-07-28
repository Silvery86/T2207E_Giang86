#include <stdio.h>
int main(){
	int n;
	printf("Vui long nhap gia tri cua n =");
	scanf("%d",&n);

	int a=0;

	while(a<=n){
		if(n%a == 0){
			printf("a=%d\n",a);
			a++;
		}else{
		a++;
	}
	}
}