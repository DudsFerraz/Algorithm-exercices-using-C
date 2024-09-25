#include <stdio.h>
#include <stdlib.h>
#define max 1000

int append(int vet[],int *len,int x){
    vet[(*len)++]=x;
    return x;
}

int *filter(int vet[],int *lenA,int *lenB,int x){
    int *vetorF;

    vetorF=malloc(sizeof(int) * *lenA);

    for(int i=0;i<*lenA;i++){
        if(vet[i]>x){
            vetorF[(*lenB)++]=vet[i];
        }
    }
    return vetorF;
}

int main(){
    int vetorA[max];
    int *vetorB;
    int n,v,x,lenA=0,lenB=0;

    printf("N:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Valor:");
        scanf("%d",&v);
        append(vetorA,&lenA,v);
    }

    printf("X:");
    scanf("%d",&x);

    vetorB=filter(vetorA,&lenA,&lenB,x);

    for(int i=0;i<lenB;i++){
        printf("%d ",vetorB[i]);
    }

    free(vetorB);

    return 0;
}