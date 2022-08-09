#include <stdio.h>
int main(){
	int n;
	printf("Vui long nhap n=");
	scanf("%d",&n);

	float S=0;
	for(int i=1;i<=n;i++){
		S += 1.0/i;
		}
	printf("S= %f",S);

}