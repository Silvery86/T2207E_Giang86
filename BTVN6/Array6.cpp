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

			}else{
// Khi dieu kien 1 sai so sanh voi max tim so lan lon hon va reset luot dem lai bang 0
		
			if(max<count){
			max=count;
			count=0;
			
			}else{
			count=0;
			}

		}
	}
// Kiem tra lai dieu kien sau khi ket thuc vong lap
	if(max<count){
		max=count;
	}
// Kiem tra luot dem xem truong hop tat ca cac so deu khong phai so duong
	if(max>0){
		printf("So luong so duong lien tiep lon nhat = %d",max);
	}else{
		printf("Mang khong co so nao duong");
	}

	}
	

