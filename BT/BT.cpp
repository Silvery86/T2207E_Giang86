#include <stdio.h>

int main(){
	int n;
	printf("Vui long nhap gia tri cua n=");
	scanf("%d",&n);
	int a=1;
	int S=0;

	while(a<=n){
		S += a;
		a++;

	}
	printf("Gia tri cua S= 1 + 2 + 3 + ... + n la: %d",S);
}