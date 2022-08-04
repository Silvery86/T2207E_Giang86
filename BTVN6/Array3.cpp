#include <stdio.h>
int main(){
	int n;
	printf("Vui long nhap n=");
	scanf("%d",&n);

	int ary[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	// Khai bao gia tri boolean
	bool a = false;
	int x;
	printf("Vui long nhap x=");
	scanf("%d",&x);

	for(int i=0;i<n;i++){
		if(ary[i] == x){
			a=true;
			break;
		}
	}
	// Vi a la gia tri boolean nen da tra ve true hoac false nen khong can so sanh
	if(a){
		printf("x nam trong mang");
	}else{
		printf("x khong nam trong mang");
	}
}