#include <stdio.h>
int main(){
	int a;
	int b;
	int min;
	int max;
	printf("Vui long nhap a=");
	scanf("%d",&a);
	printf("Vui long nhap b=");
	scanf("%d",&b);

	if(a>=b){
		min=b;
		max=a;
	}else{
		min=a;
		max=b;
	}

	for(int i=min;i>0;i--){

		if(a%i==0 && b%i==0){
		printf("Uoc chung lon nhat cua a va b = %d\n",i);
		break;
	}
	}



	for(int i=max; i>0; i++){

		if(i%a==0 && i%b==0){
		printf("Boi chung nho nhat cua a va b = %d\n",i);
		break;
	}
	}




}