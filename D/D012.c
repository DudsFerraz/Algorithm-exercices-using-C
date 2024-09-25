#include <stdio.h>
#include <limits.h>
#define max 1000

int append(int vet[],int *len,int x){
    vet[(*len)++]=x;
}

int main(){
    int vetor[max];
    int n,v,aux,indiceMenor,indiceMaior,len=0,menor=INT_MAX,maior=INT_MIN;

    printf("N:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Valor:");
        scanf("%d",&v);
        append(vetor,&len,v);
    }

    for(int i=0;i<len;i++){
        if(vetor[i]<menor){
            menor=vetor[i];
            indiceMenor=i;
        }else if(vetor[i]>maior){
            maior=vetor[i];
            indiceMaior=i;
        }
    }

    aux=vetor[0];
    vetor[0]=menor;
    vetor[indiceMenor]=aux;

    aux=vetor[len-1];
    vetor[len-1]=maior;
    vetor[indiceMaior]=aux;

    for(int i=0;i<len;i++){
        printf("%d ",vetor[i]);
    }

    return 0;
}
