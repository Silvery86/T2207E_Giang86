#include <stdio.h>
#include <math.h>
int main(){
	int day;
	printf("Vui long nhap ngay = ");
	scanf("%d",&day);

	int month;
	printf("Vui long nhap thang =");
	scanf("%d",&month);

	if(day>0 && day<=31){
		if (month>0 && month<=12){

			switch(month){
		int nDay;
		int x;
		case 1:
		nDay = day;
		x = nDay%7;
		switch(x){
			case 1: printf("Hom nay la thu 2");
			break;
			case 2: printf("Hom nay la thu 3");
			break;
			case 3: printf("Hom nay la thu 4");
			break;
			case 4: printf("Hom nay la thu 5");
			break;
			case 5: printf("Hom nay la thu 6");
			break;
			case 6: printf("Hom nay la thu 7");
			break;
			case 7: printf("Hom nay la chu Chu nhat");
			break;
		}
		printf(" Va la ngay thu: %d trong nam",nDay);
		break;

		case 2:
		if(day>28){
			printf("Thang %d chi co 28 ngay",month);
		}else{
		nDay = 31 + day;
		x = nDay%7;
		switch(x){
			case 1: printf("Hom nay la thu 2");
			break;
			case 2: printf("Hom nay la thu 3");
			break;
			case 3: printf("Hom nay la thu 4");
			break;
			case 4: printf("Hom nay la thu 5");
			break;
			case 5: printf("Hom nay la thu 6");
			break;
			case 6: printf("Hom nay la thu 7");
			break;
			case 7: printf("Hom nay la chu Chu nhat");
			break;
		}
		printf(" Va la ngay thu: %d trong nam",nDay);
		}
		break;

		case 3:
		nDay = 31 + 28 + day;
		x = nDay%7;
		switch(x){
			case 1: printf("Hom nay la thu 2");
			break;
			case 2: printf("Hom nay la thu 3");
			break;
			case 3: printf("Hom nay la thu 4");
			break;
			case 4: printf("Hom nay la thu 5");
			break;
			case 5: printf("Hom nay la thu 6");
			break;
			case 6: printf("Hom nay la thu 7");
			break;
			case 7: printf("Hom nay la chu Chu nhat");
			break;
		}
		printf(" Va la ngay thu: %d trong nam",nDay);
		break;

		case 4:
		if(day>30){
			printf("Thang %d chi co 30 ngay",month);
		}else{
		nDay = 31*2 + 28 + day;
		x = nDay%7;
		switch(x){
			case 1: printf("Hom nay la thu 2");
			break;
			case 2: printf("Hom nay la thu 3");
			break;
			case 3: printf("Hom nay la thu 4");
			break;
			case 4: printf("Hom nay la thu 5");
			break;
			case 5: printf("Hom nay la thu 6");
			break;
			case 6: printf("Hom nay la thu 7");
			break;
			case 7: printf("Hom nay la chu Chu nhat");
			break;
		}
		printf(" Va la ngay thu: %d trong nam",nDay);
		}
		break;

		case 5:
		nDay = 31*2 + 30 + 28 + day;
		x = nDay%7;
		switch(x){
			case 1: printf("Hom nay la thu 2");
			break;
			case 2: printf("Hom nay la thu 3");
			break;
			case 3: printf("Hom nay la thu 4");
			break;
			case 4: printf("Hom nay la thu 5");
			break;
			case 5: printf("Hom nay la thu 6");
			break;
			case 6: printf("Hom nay la thu 7");
			break;
			case 7: printf("Hom nay la chu Chu nhat");
			break;
		}
		printf(" Va la ngay thu: %d trong nam",nDay);
		break;

		case 6:
		if(day>30){
			printf("Thang %d chi co 30 ngay",month);
		}else{
		nDay = 31*3 + 30 + 28 + day;
		x = nDay%7;
		switch(x){
			case 1: printf("Hom nay la thu 2");
			break;
			case 2: printf("Hom nay la thu 3");
			break;
			case 3: printf("Hom nay la thu 4");
			break;
			case 4: printf("Hom nay la thu 5");
			break;
			case 5: printf("Hom nay la thu 6");
			break;
			case 6: printf("Hom nay la thu 7");
			break;
			case 7: printf("Hom nay la chu Chu nhat");
			break;
		}
		printf(" Va la ngay thu: %d trong nam",nDay);
		}
		break;

		case 7:
		nDay = 31*2 + 30*2 + 28 + day;
		x = nDay%7;
		switch(x){
			case 1: printf("Hom nay la thu 2");
			break;
			case 2: printf("Hom nay la thu 3");
			break;
			case 3: printf("Hom nay la thu 4");
			break;
			case 4: printf("Hom nay la thu 5");
			break;
			case 5: printf("Hom nay la thu 6");
			break;
			case 6: printf("Hom nay la thu 7");
			break;
			case 7: printf("Hom nay la chu Chu nhat");
			break;
		}
		printf(" Va la ngay thu: %d trong nam",nDay);
		break;

		case 8:
		nDay = 31*3 + 30*2 + 28 + day;
		x = nDay%7;
		switch(x){
			case 1: printf("Hom nay la thu 2");
			break;
			case 2: printf("Hom nay la thu 3");
			break;
			case 3: printf("Hom nay la thu 4");
			break;
			case 4: printf("Hom nay la thu 5");
			break;
			case 5: printf("Hom nay la thu 6");
			break;
			case 6: printf("Hom nay la thu 7");
			break;
			case 7: printf("Hom nay la chu Chu nhat");
			break;
		}
		printf(" Va la ngay thu: %d trong nam",nDay);
		break;

		case 9:
		if(day>30){
			printf("Thang %d chi co 30 ngay",month);
		}else{
		nDay = 31*4 + 30*2 + 28 + day;
		x = nDay%7;
		switch(x){
			case 1: printf("Hom nay la thu 2");
			break;
			case 2: printf("Hom nay la thu 3");
			break;
			case 3: printf("Hom nay la thu 4");
			break;
			case 4: printf("Hom nay la thu 5");
			break;
			case 5: printf("Hom nay la thu 6");
			break;
			case 6: printf("Hom nay la thu 7");
			break;
			case 7: printf("Hom nay la chu Chu nhat");
			break;
		}
		printf(" Va la ngay thu: %d trong nam",nDay);
		}
		break;

		case 10:
		nDay = 31*4 + 30*3 + 28 + day;
		x = nDay%7;
		switch(x){
			case 1: printf("Hom nay la thu 2");
			break;
			case 2: printf("Hom nay la thu 3");
			break;
			case 3: printf("Hom nay la thu 4");
			break;
			case 4: printf("Hom nay la thu 5");
			break;
			case 5: printf("Hom nay la thu 6");
			break;
			case 6: printf("Hom nay la thu 7");
			break;
			case 7: printf("Hom nay la chu Chu nhat");
			break;
		}
		printf(" Va la ngay thu: %d trong nam",nDay);
		break;

		case 11:
		if(day>30){
			printf("Thang %d chi co 30 ngay",month);
		}else{
		nDay = 31*5 + 30*3 + 28 + day;
		x = nDay%7;
		switch(x){
			case 1: printf("Hom nay la thu 2");
			break;
			case 2: printf("Hom nay la thu 3");
			break;
			case 3: printf("Hom nay la thu 4");
			break;
			case 4: printf("Hom nay la thu 5");
			break;
			case 5: printf("Hom nay la thu 6");
			break;
			case 6: printf("Hom nay la thu 7");
			break;
			case 7: printf("Hom nay la chu Chu nhat");
			break;
		}
		printf(" Va la ngay thu: %d trong nam",nDay);
		}
		break;

		case 12:
		nDay = 31*5 + 30*4 + 28 + day;
		x = nDay%7;
		switch(x){
			case 1: printf("Hom nay la thu 2");
			break;
			case 2: printf("Hom nay la thu 3");
			break;
			case 3: printf("Hom nay la thu 4");
			break;
			case 4: printf("Hom nay la thu 5");
			break;
			case 5: printf("Hom nay la thu 6");
			break;
			case 6: printf("Hom nay la thu 7");
			break;
			case 7: printf("Hom nay la chu Chu nhat");
			break;
		}
		printf(" Va la ngay thu: %d trong nam",nDay);
		break;

	}


		}else{
			printf("Gia tri cua thang khong dung");
		}
	}else{
		if(month>0 && month<=12){
		printf("Gia tri cua ngay khong dung");
	}else{
		printf("Gia tri ngay va thang khong dung");
	}
	}

}



	