#include <stdio.h>
int main(){
	int a;
	printf("Vui long nhap a=");
	scanf("%d",&a);

	int b;
	printf("Vui long nhap b=");
	scanf("%d",&b);

	int c;
	printf("Vui long nhap c=");
	scanf("%d",&c);

	if(a>b){
		if(a>c){
			printf("So lon nhat la: %d",a);
		}else{
			printf("So lon nhat la: %d",c);
		}
	}else{
		if(b>c){
			printf("So lon nhat la: %d",b);

		}else{
			printf("So lon nhat la: %d",c);
		}
	}
}
