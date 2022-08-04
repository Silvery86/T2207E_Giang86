#include <stdio.h>
int main(){
	int n;
	printf("Vui long nhap n=");
	scanf("%d",&n);

	int ary[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	 int count = 0;
	 int max = 0;

// Duyet mang dem so luong so duong lien tiep lon nhat

	for (int i=0;i<n;i++){
		if(ary[i] > 0){
			count++;
// Khi dieu kien 1 dung gan max voi so lan lon hon
			if(max<count){
			max=count;
		}
// Reset gia tri dem ve 0 neu dieu kien sai
	}else{
		count = 0;
	}
}
// Kiem tra luot dem xem truong hop tat ca cac so deu khong phai so duong
	if(max>0){
		printf("So luong so duong lien tiep lon nhat = %d",max);
	}else{
		printf("Mang khong co so nao duong");
	}
}

