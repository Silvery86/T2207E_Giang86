#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Vui long nhap n=");
	scanf("%d",&n);

	int ary[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	int x;
	printf("Vui long nhap x=");
	scanf("%d",&x);

	int ss;
	int smin=0;
	int min=0;

	for(int i=0;i<n;i++){
		ss = sqrt((ary[i]-x) * (ary[i]-x));
		if(ss>0){
			smin=ss;
			break;
		}
	}

	for(int i=0;i<n;i++){
		ss = sqrt((ary[i]-x) * (ary[i]-x));
		if(ss<smin){
			min = ary[i];
		}
	}
	printf("So co gia tri gan x nhat = %d",min);
}