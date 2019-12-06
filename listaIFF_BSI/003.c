#include <stdio.h>

int main(){
    int comprimento, largura, altura;
    printf("diga o comprimento: \n");
    scanf("%d", &comprimento);
    printf("diga o largura: \n");
    scanf("%d", &largura);
    printf("diga a altura: \n");
    scanf("%d", &altura);
    printf(" o volume é:  %d", comprimento*largura*altura);
    return 0;
}