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

	int min;

	min = a;

	if(b>min){
		min=a;
	}else {
		min=b;
	}

	if(c>min){
		min=min;
	}else{
		min=c;
	}
printf("So nho nhat la %d",min);
}
