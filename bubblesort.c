#include <stdio.h>
#include <stdlib.h>

operacaoj(int i, int j ,int *vet, int n){
	int aux;
	if(j < n){
		if(vet[i] > vet[j]){
			aux= vet[i];
			vet[i]   = vet[j];
			vet[j] = aux;
		}
		j++;
		operacaoj(i,j, vet, n);
	}
} 

operacaoi(int i, int *vet, int n){
	if(i < n){
		operacaoj(i, i+1, vet, n);
		i++;
		operacaoi(i, vet, n);
	}
}
void bubbleSort(int *vet, int n){
	operacaoi(0, vet, n);
	
}

int main(){
	int n = 8;
    int vet[8] = {10,7,6,55,9,3,5,2};
    
    /*int n = 4 ;
    int vet[4] = {6,9,3,5};*/
    bubbleSort(vet, n);
    
    printf ("formatado \n");
  	 int i ; 
  	 for(i = 0 ; i< n ; i++){
  	 	printf("%d - ", vet[i]);
	   }
   	return 0;
}
