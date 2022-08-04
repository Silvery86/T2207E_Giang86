#include <stdio.h>
int main(){
	int n;
	printf("Vui long nhap n=");
	scanf("%d",&n);

	int ary[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	 int sum = 0;
	 int max = 0;
// Duyet mang tinh tong cac chuoi so duong lien tiep

	for (int i=0;i<n;i++){
		if(ary[i] > 0){
			sum += ary[i];
// Tim tong lon nhat cua cac so duong lien tiep
			if(max<sum){
			max=sum;
			}
	}else{
		sum=0;
		}
	}

// Kiem tra luot dem xem truong hop tat ca cac so deu khong phai so duong
	if(sum>0){
		printf("Tong chuoi so duong lien tiep lon nhat = %d",max);
	}else{
		printf("Mang khong co so nao duong");
	}
}
	

