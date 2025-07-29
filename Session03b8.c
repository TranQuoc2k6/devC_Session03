#include<stdio.h>
int main() {
	int hangNghin, hangTram, hangChuc, hangDonVi;
	
	printf("Moi ban nhap chu so hang Nghin(0-9): ");
	scanf("%d", &hangNghin);
	
	printf("Moi ban nhap chu so hang Tram(0-9): ");
	scanf("%d", &hangTram);
	
	printf("Moi ban nhap chu so hang Chuc(0-9): ");
	scanf("%d", &hangChuc);
	
	printf("Moi ban nhap chu so hang don vi(0-9): ");
	scanf("%d,", &hangDonVi);
	
	printf("Nghich dao so da nhap la: %d%d%d%d\n", hangDonVi, hangChuc, hangTram, hangNghin);
	return 0;
}
