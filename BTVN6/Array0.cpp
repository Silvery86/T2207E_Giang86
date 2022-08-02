#include <stdio.h>
int main()
{
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int ary[n];
	int high;
	int x;
	
	printf("Nhap %d so nguyen:\n",n);

	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	high = ary[0];
	
	
// Duyet mang tim gia tri lon nhat high
	for(int i=1;i<n;i++)
	{
		if(ary[i] > high){
			high = ary[i];
			}
	}
	printf("\n Gia tri lon nhat la: %d",high);

	x = high;
// Tim gia tri thuoc tap khong phai la high >> gan cho x

	for(int i=0;i<n;i++){
			if(ary[i]<high){
			x=ary[i];
			break;
		}
	}	

// Xay ra 2 truong hop 
	//1. x =  high > Khong co so lon thu 2
	//2. x != high >> Duyet tap tim gia tri lon thu 2
	if(x==high){
		printf("\n Khong co gia tri lon thu 2");
	}else{
		for(int i=0;i<n;i++)
	{
		if(ary[i] != high && x < ary[i]){
			x = ary[i];
		}
	}
	printf("\n Gia tri lon thu 2 la: %d",x);

	}
}