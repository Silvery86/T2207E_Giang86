#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Vui long nhap n=");
	scanf("%d",&n);

	int ary[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}

// Tim gia tri nho nhat va lon nhat trong mang
		int min = ary[0];
		int max = ary[0];

	for(int i=0;i<n;i++){
		if(ary[i]>max){
			max = ary[i];
			}
		}

	for(int i=0;i<n;i++){
		if(ary[i]<min){
			min = ary[i];
			}
		}

// So sanh 2 gia tri min max xem gia tri nao xa 0 nhat
	int a;
	int b;
	a=max * max;
	b=min * min;
	if(a>b){
		if(max>0){
			printf("Chuoi so chua tat ca phan tu trong mang la: [%d den %d]",-max,max);
		}else{
			printf("Chuoi so chua tat ca phan tu trong mang la: [%d den %d]",max,-max);
			}
	}else{
		if(min>0){
			printf("Chuoi so chua tat ca phan tu trong mang la: [%d den %d]",-min,min);
		}else{
			printf("Chuoi so chua tat ca phan tu trong mang la: [%d den %d]",min,-min);
		}
		
	}
}
	

