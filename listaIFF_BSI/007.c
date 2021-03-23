#include <stdio.h>

int main(){
	int qCamisas, qCalcas, qMeias;
	
	printf("Me quantas camisas foram lavadas: \n ");
	scanf("%d", &qCamisas);
	
	printf("Me quantas calcas foram lavadas: \n ");
	scanf("%d", &qCalcas);
	
	printf("Me quantas meias foram lavadas: \n ");
	scanf("%d", &qMeias);
	
	printf("preco total: %d", (qCamisas * 5) + (qCalcas * 10) + (qMeias * 2));
	return 0;
}
