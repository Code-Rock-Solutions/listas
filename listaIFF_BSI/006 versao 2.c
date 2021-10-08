#include <stdio.h>



int main(){
	int idade, carteira, i;
	int numero , anterior, proximo;
	/*for(i = 0; i <= 100 ; i++){
		printf("%d \n", i);
	}*/

	printf("escreva um numero  \n");
	scanf("%d",&numero);
	anterior = numero - 1;
	proximo = numero + 1;
	printf("O  numero anterior é: %d \n", anterior);
	printf("O proximo numero é: %d \n ", proximo);
	 
	 
	 
	
	
	printf("Me diga um numero: \n ");
	scanf("%d", &numero);

	
	printf("antecessor: %d , sucessor: %d", numero- 1 , numero + 1);
	

		

/*	printf("Escreva a sua idade \n");
	scanf("%d", &idade);

	
	
	
	if(idade >= 18){
		printf("Voce quer tirar a carteira? digite 1 para sim e 2 para nao \n");
		scanf("%d", &carteira);
		idade = idade + 5;
		
		if(cateira == 1 ){
			
		}
	}else{
		printf("Voce nao pode dirigir \n");
		
	}*/
	
	
	

	return 0;	
	
}
