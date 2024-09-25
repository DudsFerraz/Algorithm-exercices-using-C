#include <stdio.h>

int main(){
    int L,V,diferenca;
    float M,A,valorFinal;

    printf("Limite de velocidade:");
    scanf("%d",&L);
    printf("Valor base da multa:");
    scanf("%f",&M);
    printf("Valor acrescentado por Km:");
    scanf("%f",&A);
    printf("Velocidade captada pelo radar:");
    scanf("%d",&V);

    diferenca = V-L;

    if(diferenca>0){
        valorFinal=M+diferenca*A;
        printf("O motorista deve pagar uma multa de R$%.2f.",valorFinal);
    }
    else{
        printf("O motorista nao sera multado");
    }

    return 0;
}