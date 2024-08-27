#include <stdio.h>
#define max 1000

int append(int vet[],int *len,int x){
    vet[(*len)++]=x;
    return x;
}

void vetorReverse(int vet[],int *len){
    int vetAux[max],index=0;

    for(int i=*len-1;i>=0;i--){
        vetAux[index]=vet[i];
        index++;
    }

    for(int i=0;i<*len;i++){
        vet[i]=vetAux[i];
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

    vetorReverse(vetor,&len);

    for(int i=0;i<len;i++){
        printf("%d ",vetor[i]);
    }

    return 0;
}