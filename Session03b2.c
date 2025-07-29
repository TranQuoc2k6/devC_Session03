#include<stdio.h>
int main(){
	int celsius;
	int fahrenheit;
	printf("Moi ban nhap nhiet do theo Celsius: ");
	scanf("%d",&celsius);
	fahrenheit = celsius * 9 / 5 + 32;
	printf("Ket qua chuyen doi sang Fahrenheit: %d",fahrenheit);
	return 0;
}
