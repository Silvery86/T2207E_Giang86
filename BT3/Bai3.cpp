#include <stdio.h>
int main(){
	int n;
	printf("Vui long nhap n=");
	scanf("%d",&n);

	float S=0;
	for(int i=1;i<=n;i++){
		S = (i-1) + (i-2);
		}
	printf("S= %f",S);

}