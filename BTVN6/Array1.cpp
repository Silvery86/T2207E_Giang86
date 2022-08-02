#include <stdio.h>
int main(){
	int n;
	printf("Vui long nhap n=");
	scanf("%d",&n);

	int ary[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}


	int sum=0;
	int count = 0;
	int ave;

	for(int i=0;i<n;i++){
		if(ary[i]%2 != 0){
			sum += ary[i];
			count++;
		}
	}
	if(count == 0){
		printf("Mang khong co so le nao");
	}else{
	ave = sum / (float)count;
	printf("Trung binh cong cac so le trong mang = %d",ave);
	}
}