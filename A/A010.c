#include <stdio.h>

int main(){
    float F,C;

    printf("Temperatura em Celsius:");
    scanf("%f",&C);
    
    F = C*1.8+32;

    printf("%.2f em Celsius e igual a %.2f em Farenheit",C,F);

    return 0;
}