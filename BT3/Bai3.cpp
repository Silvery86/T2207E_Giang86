#include <stdio.h>
int main(){
	int n;
	printf("Vui long nhap n=");
	scanf("%d",&n);
	int arr[n];
	int F;
	arr[0]=1;
	arr[1]=1;
	for(int i=2;i<n;i++){
		arr[i] = arr[i-1] + arr[i-2];
		F = arr[i];
		}
	printf("So fibonaci thu n = %d",F);

}