#include <stdio.h>
#include <math.h>
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

	float d;

	d = ((pow(b,2)) - (4*a*c));

	if(d>0){
		float x1;
		float x2;
		
		x1 = (-b + sqrt(d))/(2*a);
		x2 = (-b - sqrt(d))/(2*a);
		printf( "Phuong trinh co 2 nghiem la %f va %f",x1,x2);
		
	}else{
		if(
			d<0){
			printf("Phuong trinh vo nghiem");
		
			
		}else{
			float x3;
			x3 = ( -b / (2*a) );
			printf("Phuong trinh co nghien kep la %f",x3);
		}
}
}