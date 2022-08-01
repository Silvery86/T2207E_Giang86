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
	x= ary[0];
	

	for(int i=1;i<n;i++)
	{
		if(ary[i] > high){
			high = ary[i];
			}
	}

	for(int i=1;i<n;i++){
			if(ary[i]<high){
			x=ary[i];
	}
	}	


		for(int i=0;i<=n;i++)
	{
		if(ary[i] != high && x < ary[i]){
			x = ary[i];
		}
	}

	
		printf("\n Gia tri lon nhat la: %d",high);
		printf("\n Gia tri lon thu 2 la: %d",x);
}