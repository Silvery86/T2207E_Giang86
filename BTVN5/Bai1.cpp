#include <stdio.h>
int main(){
	int n;
	printf("Vui long nhap n=");
	scanf("%d",&n);
	int sum =0;

	for(int i=0; i<=n; i++){
		if(n%i==0){
			printf("Uoc cua n la: %d\n",i);
			sum+=i;
		}

	}
	printf("Tong cac uoc cua n = %d",sum);
}