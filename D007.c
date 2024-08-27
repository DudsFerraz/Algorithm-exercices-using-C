#include <stdio.h>
#define max 1000

int append(int vet[],int *len,int x){
    vet[(*len)++]=x;
    return x;
}

void adjacentes(int vet[],int *len){
    int aux;
    for(int i=0;i<*len-1;i=i+2){
        aux=vet[i];
        vet[i]=vet[i+1];
        vet[i+1]=aux;
    }
}

int main(){
    int vetor[max];
    int n,v,len=0;

    printf("N:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Valor:");
        scanf("%d",&v);
        append(vetor,&len,v);
    }

    adjacentes(vetor,&len);

    for(int i=0;i<len;i++){
        printf("%d ",vetor[i]);
    }

    return 0;
}