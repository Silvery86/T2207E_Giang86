#include <stdio.h>

int main(){
	int n;
	printf("Vui long nhap n =");
	scanf("%d",&n);
	int sum=0;

	for(int i;n>0;n/=10){
		i = n%10;
		sum = sum + i;
		}
	printf("Tong cac chu so cua n= %d",sum);
}