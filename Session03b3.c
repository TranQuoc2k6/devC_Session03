#include<stdio.h>
int main(){
	int r;
	float chuVi;
	float dienTich;
	printf("Moi ban nhap vao ban kinh hinh tron: ");
	scanf("%d",&r);
	chuVi = 2 * 3.14 * (float)r;
	printf("Chu vi hinh tron la: %.2f\n", chuVi);
	dienTich = 3.14 * (float)r * (float)r;
	printf("Dien tich hinh tron la: %.2f", dienTich);
	return 0;
}
