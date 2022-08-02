#include <stdio.h>
int main(){
	int n;
	printf("Vui long nhap n=");
	scanf("%d",&n);

	int ary[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	int a;
	int x;
	printf("Vui long nhap x=");
	scanf("%d",&x);

	for(int i=0;i<n;i++){
		if(ary[i] == x){
			a=true;
		}
	}
	if(a==true){
		printf("x nam trong mang");
	}else{
		printf("x khong nam trong mang");
	}
}