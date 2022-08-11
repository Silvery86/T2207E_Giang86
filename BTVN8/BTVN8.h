#include <stdio.h>

// tinh tong cac chu so

int tinhTongCacChuSo(int n){
	int sum=0;
	for(int i ;n>0;n/=10){
		i = n%10;
		sum += i;
	}
	return sum;
}


bool ktTamGiac(int a, int b, int c){
		return a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a;
}
// Tinh chu vi tam giac

int tinhChuViTamGiac(int a, int b, int c){
			int P;
		P = a + b + c;
	return P;
}

// Tim uoc chung lon nhat

int timUocChungLN(int a, int b){
	for(int i=a;i>0;i--){
		if(a%i == 0 && b%i == 0){
			return i;
		}
	}
	return false;
}

// Tim boi chung nho nhat

int timBoiChungNN(int a, int b){
	for(int i=a;i>=a;i++){
		if(i%a==0 && i%b==0){
			return i;
		}
	}
	return false;
}