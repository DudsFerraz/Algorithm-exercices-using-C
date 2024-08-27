#include <stdio.h>
#include <limits.h>
#define max 1000

int append(int vet[],int *len,int x){
    vet[(*len)++]=x;
    return x;
}

int countX(int vet[],int *len,int x){
    int counter=0;
    for(int i=0;i<*len;i++){
        if(vet[i]==x){
            counter++;
        }
    }
    return counter;
}

int main(){
    int vetor[max];
    int n,x,v,len=0;

    printf("N:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Valor:");
        scanf("%d",&v);
        append(vetor,&len,v);
    }

    printf("X:");
    scanf("%d",&x);

    printf("%d\n",countX(vetor,&len,x));

    return 0;
}