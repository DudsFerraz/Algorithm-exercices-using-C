#include <stdio.h>
#define max 1000

int append(int vet[],int *len,int x){
    vet[(*len)++]=x;
    return x;
}

void reverse(int vet[],int len){
    int aux;

    for(int i=0;i<len/2;i++){
        aux=vet[i];
        vet[i]=vet[len-(i+1)];
        vet[len-(i+1)]=aux;
    }
}

int main(){
    int vetor[max];
    int n,v,len;

    printf("N:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Valor:");
        scanf("%d",&v);
        append(vetor,&len,v);
    }

    reverse(vetor,len);

    for(int i=0;i<len;i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");

    return 0;
}