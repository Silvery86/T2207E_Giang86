#include <stdio.h>
int main(){
	// input number
	int num;
	printf("Vui long nhap num=");
	scanf("%d",&num);
	// r = num mod 2
	int r;
	r = num % 2;
	// r=0
	if(r == 0){
// chay vao day neu YES
		printf("Number is Even");
	}else{
// chay vao day neu NO
		printf("Number is  ");
	}
}