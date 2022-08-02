#include <stdio.h>
int main(){

	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			printf("*\t");
		}
		printf("\n");
	}

printf("\n");
printf("\n");


	for(int i=0;i<5;i++){
		if(i%2==0){
			for(int j=0;j<5;j++){
			printf("*\t");
		}}else{
			for(int j=0;j<4;j++){
			printf("*\t");
		}
	}
	printf("\n");
	
}

printf("\n");
printf("\n");


for(int i=0;i<5;i++){
		for(int j=0;j<=i;j++){
			printf("*\t");
		}
		printf("\n");
	}

printf("\n");
printf("\n");

for(int i=0;i<=5;i++){
	// De co 5 hang
		for(int j=0;j<i;j++){
			// De co i nhom
			for(int k=0;k<i;k++){
				// De co i sao
				printf("*");
			}
			printf(" ");
		}
		printf("\n");
	}

}