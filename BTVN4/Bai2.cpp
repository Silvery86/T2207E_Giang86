#include <stdio.h>
#include <math.h>
int main(){
	float n;
	printf("Vui long nhap n=");
	scanf("%f",&n);

	int a=0;
	int max;

	while(a<n){
		if((a%2 == 0)&&(a%3 ==0)){
			max = a;
			a++;
			}else{
				a++;
			}
		}
		printf("max = %d",max);	
}