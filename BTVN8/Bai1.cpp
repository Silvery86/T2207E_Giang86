#include <stdio.h>
#include "BTVN8.h"

int main(){
	int sum;
	int n;
	printf("Vui long nhap n=");
	scanf("%d",&n);
	sum = tinhTongCacChuSo(n);
	printf("Tong cac chu so cua %d la: %d",n,sum);

}