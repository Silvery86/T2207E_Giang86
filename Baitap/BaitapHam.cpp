#include <stdio.h>
// Viet ham kiem tra 1 so co phai la so nguyen to 
bool ktSoNguyenTo(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	printf("Vui long nhap n=");
	scanf("%d",&n);

	if(ktSoNguyenTo(n)){
		printf("So nay la so nguyen to");
	}else{
		printf("So nay khong phai so nguyen to");
	}
}