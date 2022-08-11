#include <stdio.h>
#include "BTVN8.h"

int main(){
	int x,y;
	printf("Vui long nhap 2 so:\n");
	scanf("%d",&x);
	scanf("%d",&y);
	int i;

	i=timUocChungLN(x,y);
	printf("Uoc chung lon nhat cua %d va %d la: %d",x,y,i);
}