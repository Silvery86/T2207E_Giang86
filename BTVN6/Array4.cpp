#include <stdio.h>
int main(){
	int n;
	printf("Vui long nhap n=");
	scanf("%d",&n);

	int ary[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}


	int x=ary[0];

	for(int i=0;i<n;i++){
		if(ary[i]%2 != 0 && ary[i]>x ){
			x = ary[i];
		}
	}

	if(x%2==0){
		printf("Mang khong co so le nao");
	}else{
		printf("Mang co so le lon nhat la: %d",x);
	}
	
}