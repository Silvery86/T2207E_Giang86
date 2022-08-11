#include <stdio.h>
#include "BTVN8.h"

int main(){
	int x,y,z;
	printf("Vui long nhap cac canh cua tam giac\n");
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	int P;

	if(ktTamGiac(x,y,z)){
		P=tinhChuViTamGiac(x,y,z);
		printf("Chu vi cua tam giac la: %d",P);
	}else{
		printf("Khong phai ba canh tam giac");
	}

}