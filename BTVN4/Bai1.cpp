#include <stdio.h>
int main(){
	float n;
	printf("Vui long nhap gia tri cua n =");
	scanf("%f",&n);

	int a=0;

	while(a<n){
		if(a%2 != 0){
			printf("a=%d\n",a);
			a++;
		}else{
		a++;
	}
	}
}