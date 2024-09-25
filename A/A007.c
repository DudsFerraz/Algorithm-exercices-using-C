#include <stdio.h>

int main(){
    float massa,altura,IMC;

    printf("Peso em Kg:");
    scanf("%f",&massa);
    printf("Altura em metros:");
    scanf("%f",&altura);

    IMC = massa/(altura*altura);

    printf("O IMC deste individuo e de: %.2f",IMC);

    return 0;
}