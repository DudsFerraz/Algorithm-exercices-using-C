#include <stdio.h>
#include <limits.h>
#define max 1000

int append(int vet[],int *len,int x){
    vet[(*len)++]=x;
    return x;
}

int main(){
    int vetor[max];
    int len=0,n,v,maior=INT_MIN,maiorIndice;

    printf("N:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Valor:");
        scanf("%d",&v);
        append(vetor,&len,v);
    }

    for(int i=0;i<len;i++){
        if(vetor[i]>maior){
            maior=vetor[i];
            maiorIndice=i;
        }
    }

    printf("%d\n",maior);
    printf("%d\n",maiorIndice);

    return 0;
}