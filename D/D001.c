#include <stdio.h>

#define max 1000

int append(int vet[],int *len,int x){
    vet[(*len)++]=x;
    return x;
}

int main(){
    int vetor[max];
    int temp,len=0,soma=0,diasAcima=0;
    float media;

    for(int i=1;i<=7;i++){
        printf("Temperatura do dia %d:",i);
        scanf("%d",&temp);
        append(vetor,&len,temp);
        soma+=temp;
    }

    media=(float)soma/7;

    for(int i=0;i<len;i++){
        if(vetor[i]>media){
            diasAcima++;
        }
    }

    printf("%d\n",diasAcima);

    return 0;
}