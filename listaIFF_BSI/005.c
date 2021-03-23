#include <stdio.h>

int main(){
	int espaco_inicial, velocidade, tempo;
	
	printf("Me diga o espaco inicial: \n ");
	scanf("%d", &espaco_inicial);
	printf("Me diga a velocidade: \n ");
	scanf("%d", &velocidade);
	
	printf("Me diga o Tempo: \n ");
	scanf("%d", &tempo);
	

	
	printf("o espaço percorrido: %d", espaco_inicial + (velocidade * tempo));
	return 0;
}
