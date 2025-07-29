#include<stdio.h>
int main(){
	float toan,van,anh,tong,diemTB;
	printf("Moi ban nhap vao diem toan: ");
	scanf("%f",&toan);
	printf("Moi ban nhap vao diem van: ");
	scanf("%f",&van);
	printf("Moi ban nhap vao diem anh: ");
	scanf("%f",&anh);
	tong = toan + van + anh;
	printf("Tong diem 3 mon la: %.2f\n", tong);
	diemTB = tong / 3;
	printf("Diem trung binh 3 mon la: %.2f",diemTB);
	return 0;
}

