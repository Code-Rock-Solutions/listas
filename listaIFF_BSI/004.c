#include <stdio.h>

int main(){
    int a,b,c;
    a = 5;
    b = 7;
    printf(" antes de alterar , a = %d e b = %d \n", a, b);
    c = b;
    b = a;
    a = c;
    printf(" depois de alterar , a = %d e b = %d \n", a, b);
}