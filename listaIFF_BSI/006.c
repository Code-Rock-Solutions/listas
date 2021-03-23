#include <stdio.h>

int main(){
	int numero;
	
	printf("Me diga um numero: \n ");
	scanf("%d", &numero);

	
	printf("antecessor: %d , sucessor: %d", numero- 1 , numero + 1);
	return 0;
}
