#include <stdio.h>

int main(){
	int i , idade, sexo, mulher = 0, idadehomem = 0, totalidade=0;
	float mediaidade = 0, mediaidadehomens =0;
	int totalpessoas = 3;
	
	for( i = 0 ; i<totalpessoas; i++){
		printf("Sua idade? \n");
		scanf("%i", &idade);
		printf("qual o seu sexo? digite 0 para homen e 1 para mulher \n");
		scanf("%i", &sexo);
		
		if(sexo){
			mulher +=1;
		}else{
			idadehomem += idade;
		}
		totalidade += idade;
	}
	mediaidade = (float) totalidade/totalpessoas;
	mediaidadehomens = (float )(idadehomem/(totalpessoas - mulher));
	printf("total de mulheres %i \n", mulher);
	printf("media de idade %.2f \n", mediaidade );
	printf("media da idade dos homens: %.2f " , mediaidadehomens);
	return 0;
}
