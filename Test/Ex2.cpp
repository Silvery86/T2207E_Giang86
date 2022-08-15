#include <stdio.h>

int main(){
	int n;
	printf("Vui long nhap kich thuoc cua mang =");
	scanf("%d",&n);


	int arr[n];
	printf("Vui long nhap cac so trong mang:\n");
	for(int i=0; i<n;i++){
	scanf("%d",&arr[i]);
	}

	for(int i=0;i<n;i++){
		if(arr[i]!=0 && arr[i]!=1){
			for(int j=2;j<arr[i];j++){
				if(arr[i]%j==0){
					printf("No prime number");
				}
			}
		}
	}
}
	