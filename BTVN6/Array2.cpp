#include <stdio.h>
int main(){
	int n;
	printf("Vui long nhap n=");
	scanf("%d",&n);

	int ary[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
// Phan tu dau tien luon la so 0
	int sum=0;
	int count = 0;
	int ave;
	int count2 = 0;

	for(int i=0;i<n;i++){
		count++;
		if(ary[i]%2 != 0 && count%2 == 0){
			sum += ary[i];
			count2++;
		}
	}
	if(count2 == 0){
		printf("Mang khong co so le nao o vi tri chan");
	}else{
	ave = sum / (float)count2;
	printf("Trung binh cong cac so le trong mang = %d",ave);
	}
}