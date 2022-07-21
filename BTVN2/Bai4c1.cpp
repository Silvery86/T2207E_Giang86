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

	int max;

	max = a;

	if(b>max){
		max=b;
	}else {
		max=a;
	}

	if(c>max){
		max=c;
	}else{
		max=max;
	}
printf("So lon nhat la %d",max);
}
