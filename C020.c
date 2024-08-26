#include <stdio.h>

int main(){
    int idade=0,counter=0,soma=0,idosos=0,maior=0;
    float media,idososP;

    while(idade>=0){
        printf("Idade:");
        scanf("%d",&idade);
        if(idade>=0){
            soma+=idade;
            counter++;
            if(idade>18){
                maior++;
                if(idade>75){
                    idosos++;
                }
            }
        }
    }

    media=soma/counter;
    idososP=((float)idosos/counter)*100;

    printf("Media das idades: %.2f\n",media);
    printf("Maiores de idade: %d\n",maior);
    printf("Porcentagem de idosos: %.2f\n",idososP);

    return 0;
}