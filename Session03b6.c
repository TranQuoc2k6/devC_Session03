#include<stdio.h>
int main(){
	int a,h;
	float dienTich;
	printf("Moi ban nhap canh cua tam giac: ");
	scanf("%d", &a);
	printf("Moi ban nhap chieu cao cua tam giac: ");
	scanf("%d", &h);
	dienTich = (float)1/2 * (float)a * (float)h;
	printf("Dien tich cua tam giac la: %.2f",dienTich);
	return 0;
}
