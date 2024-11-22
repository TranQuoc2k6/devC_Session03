#include<stdio.h>
int main(){
	float vanScore, toanScore, anhScore, sum, ave;
	printf("moi ban nhap diem mon toan: ");
	scanf("%f", &toanScore);
	printf("moi ban nhap diem mon van: ");
	scanf("%f", &vanScore);
	printf("moi ban nhap diem mon anh: ");
	scanf("%f", &anhScore);
	sum = vanScore+toanScore+anhScore;
	ave = sum/3;
	printf("tong diem 3 mon la: %.2f\n", sum);
	printf("trung binh 3 mon la: %.2f\n", ave);
	return 0;	 
}
