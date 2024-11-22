#include<stdio.h>
int main(){
	float celsius;
	printf("moi ban nhap vao nhiet do theo do Celsius la: ");
	scanf("%f", &celsius);
	float fahrenheit = (celsius*9/5)+32;
	printf("nhiet do fahrenheit la: %.2f", fahrenheit);
	return 0;
}
