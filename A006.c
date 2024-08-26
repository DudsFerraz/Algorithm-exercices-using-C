#include <stdio.h>

int main(){
    float compra,desc,valorF;

    printf("Valor da compra:");
    scanf("%f",&compra);
    printf("Porcentagem do desconto:");
    scanf("%f",&desc);

    valorF = compra*(1-desc/100);

    printf("Valor da compra com desconto: %.2f",valorF);

    return 0;
}