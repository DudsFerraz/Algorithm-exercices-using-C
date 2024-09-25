#include <stdio.h>

int main(){
    int v=1,somap=0,somai=0,soma=0;

    while(v!=0){
        printf("V:");
        scanf("%d",&v);
        soma+=v;
        if(v%2==0){
            somap+=v;
        }
        else{
            somai+=v;
        }
    }
        printf("Soma dos valores pares: %d\n",somap);
        printf("Soma dos valores impares: %d\n",somai);
        printf("Soma de todos os valores: %d\n",soma);
    return 0;
}