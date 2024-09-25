#include <stdio.h>
#define max 1000

int append(int vet[],int *len,int x){
    vet[(*len)++]=x;
    return x;
}

void RemoveFromVector(int vet[],int *len,int x){
    for(int i=0;i<*len-1;i++){
        if(vet[i]==x){
            for(int j=i;j<*len-1;j++){
                vet[j]=vet[j+1];
            }
            (*len)--;
            i--;
        }
    }
}

int main(){
    int vetor[max];
    int n,v,x,len=0;

    printf("N:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Valor:");
        scanf("%d",&v);
        append(vetor,&len,v);
    }

    printf("Valor a ser removido:");
    scanf("%d",&x);

    RemoveFromVector(vetor,&len,x);

    for(int i=0;i<len;i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");


    return 0;
}