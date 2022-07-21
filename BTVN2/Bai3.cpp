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

	if(a>0 && b>0 && c>0){
	if(a+b>c && a+c>b && b+c>a){
	
			float p;
			float s;
			// Tinh chu vi P
			p=(a+b+c);
			s= (sqrt( ( pow(pow(a,2)+pow(b,2)+pow(c,2)) - (2* (pow(a,4)+pow(b,4)+pow(c,4)) ) )/4);
				printf("abc la 3 canh cua tam giac. ");
				printf("Chu vi cu tam giac la %f va ",p);
				printf("Dien tich cua tam giac la %",s);
		}else{
			printf("abc khong phai la 3 canh cua tam giac");
		}}else{
			printf("abc khong phai la 3 canh cua tam giac");
		}
	}