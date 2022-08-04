#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Vui long nhap n=");
	scanf("%d",&n);

	int ary[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
		for(int j=0;j<i;j++){
			if(ary[i]==ary[j]){
				printf("Vui long nhap gia tri khac\n");
				i--;
				break;
			}
		}
		
	}
	printf("Cac so trong mang bao gom: ");
	for(int i=0;i<n;i++){
		printf(" %d ",ary[i]);
	}
}