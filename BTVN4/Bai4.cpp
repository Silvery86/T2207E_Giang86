#include <stdio.h>

int main(){
	int a;
	int x=0;
	int n;
	printf("Vui long nhap n=");
	scanf("%d",&n);

	while(n>0){
		a = n%10;
		x = x * 10 + a;
		n = n / 10;
	}
	printf("So nghich dao cua n= %d",x);
}