#include <stdio.h>
#define max 1000

int append(int vet[],int *len,int x){
    vet[(*len)++]=x;
    return x;
}

int find_index(int vet[],int *n,int x){
    for(int i=0;i<*n;i++){
        if(vet[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    int vetor[max];
    int v,n,len=0,x;

    printf("N:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Valor:");
        scanf("%d",&v);
        append(vetor,&len,v);
    }

    printf("X:");
    scanf("%d",&x);

    printf("%d",find_index(vetor,&len,x));

    return 0;
}