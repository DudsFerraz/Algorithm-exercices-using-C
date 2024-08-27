#include <stdio.h>
#define max 1000

append(int vet[],int *len,int x){
    vet[(*len)++]=x;
    return x;
}

int main(){
    int vetor[max];
    int n,v,len=0,i,j,soma=0,aux;

    printf("N:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Valor:");
        scanf("%d",&v);
        append(vetor,&len,v);
    }

    printf("I:");
    scanf("%d",&i);
    printf("J:");
    scanf("%d",&j);

    if(j<i){
        aux=i;
        i=j;
        j=aux;
    }

    if(i>=0 && i<len && j>=0 && j<len){
        for(i;i<=j;i++){
            soma+=vetor[i];
        }
        printf("%d\n",soma);
    }else{
        printf("INVALIDO!");
    }


    return 0;
}