#include <stdio.h>


int main(){
    int fahrenheit = 0, kelvin = 0, celsius = 0;
    printf("Exercicio para transformar celsius em fahrenheit e em kelvin \n");
    printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX \n");
    printf("Diga o valor em Celsius: ");
    scanf("%d", &celsius);
    fahrenheit = (9 * celsius + 160)/5;
    kelvin = celsius + 273;
    printf("Com o valor celsisu: %d \n o valor em fahrenheit: %d e o valor em Kelvin é %d \n", celsius,fahrenheit,kelvin);
    printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX \n");
    return 0;
}