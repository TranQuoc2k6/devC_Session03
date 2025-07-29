#include<stdio.h>
int main() {
	int hangNghin, hangTram, hangChuc, hangDonVi, tong;
	
	printf("Moi ban nhap chu so hang Nghin(0-9): ");
	scanf("%d", &hangNghin);
	
	printf("Moi ban nhap chu so hang Tram(0-9): ");
	scanf("%d", &hangTram);
	
	printf("Moi ban nhap chu so hang Chuc(0-9): ");
	scanf("%d", &hangChuc);
	
	printf("Moi ban nhap chu so hang don vi(0-9): ");
	scanf("%d,", &hangDonVi);
	
	printf("So da nhap la: %d%d%d%d\n", hangNghin, hangTram, hangChuc, hangDonVi);
	
	tong = hangNghin + hangTram + hangChuc + hangDonVi;
	printf("Tong cac chu so co trong so da nhap la: %d", tong);
	return 0;
}
