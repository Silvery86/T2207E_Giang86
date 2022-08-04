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
	printf("Chuoi so chua tat ca phan tu trong mang la: [%d den %d]",min,max);	

}