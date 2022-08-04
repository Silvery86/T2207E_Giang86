#include <stdio.h>
int main(){
	int n;
	printf("Vui long nhap n=");
	scanf("%d",&n);

	int ary[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	 int min = ary[0];

// Duyet mang gan min cho gia tri duong bat ky
	for (int i=0;i<n;i++){
		if(ary[i] > 0){
			min = ary[i];
			break;}
	}
// Duyet mang gan min cho gia tri duong nho nhat
		for (int i=0;i<n;i++){
		if(ary[i] < min && ary[i]>0){
			min = ary[i];
		}
	}
// Kiem tra gia tri tra ket qua
	if(min>0){
		printf("So duong nho nhat = %d",min);
	}else{
		printf("Mang khong co so nao duong");
	}

}