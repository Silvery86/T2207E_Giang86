#include <stdio.h>
int main(){
	int n;
	printf("Vui long nhap n=");
	scanf("%d",&n);

	int arr[n];
	printf("Vui long nhap:");
	for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}

	printf("Thu tu nguoc lai cac phan tu trong mang:");
	for(int i=n-1;i>=0;i--){
		printf(" %d ",arr[i]);
	}

}