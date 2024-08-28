#include <stdio.h>
#include <stdlib.h>
#define max 1000

int append(int vet[],int *len,int x){
    vet[(*len)++]=x;
    return x;
}

int *intercala(int vetA[],int vetB[],int *len,int *lenC){
    int *vetC;

    //vetC=malloc(sizeof(int) * max);
    vetC=malloc(sizeof(int) * *len*2);
    for(int i=0;i<*len;i++){
        vetC[(*lenC)++]=vetA[i];
        vetC[(*lenC)++]=vetB[i];
    }
    return vetC;
}

int main(){
    int vetorA[max],vetorB[max];
    int *vetorC;
    int n,v,lenA=0,lenB=0,lenC=0;

    printf("N:");
    scanf("%d",&n);

    printf("Valores para o primeiro vetor:\n");
    for(int i=0;i<n;i++){
        printf("Valor:");
        scanf("%d",&v);
        append(vetorA,&lenA,v);
    }

    printf("Valores para o segundo vetor:\n");
    for(int i=0;i<n;i++){
        printf("Valor:");
        scanf("%d",&v);
        append(vetorB,&lenB,v);
    }

    vetorC=intercala(vetorA,vetorB,&lenA,&lenC);

    for(int i=0;i<lenC;i++){
        printf("%d ",vetorC[i]);
    }
    printf("\n");

    free(vetorC);

    return 0;
}
