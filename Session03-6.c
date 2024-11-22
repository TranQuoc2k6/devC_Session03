#include<stdio.h>
int main(){
	float doDaiDay, chieucao, dienTichTamGiac;
	printf("do dai day cua tam giac la:");
	scanf("%f", &doDaiDay);
	printf("chieu cao tam giac la:");
	scanf("%f", &chieucao);
	dienTichTamGiac = 0.5*(doDaiDay*chieucao);
	printf("dien tich tam giac la: %.2f", dienTichTamGiac); 
	return 0; 
	 
} 
