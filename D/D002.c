#include <stdio.h>

#define max 1000

int append(int vet[],int *len,int x){
    vet[(*len)++]=x;
    return x;
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

    for(int i=0;i<len;i++){
        printf("%d ",vetor[i]);
    }

}