#include <stdio.h>
#define max 1000

int append(int vet[],int *len,int x){
    vet[(*len)++]=x;
    return x;
}

void removeByIndex(int vet[],int *len,int index){
    for(int i=index;i<*len-1;i++){
        vet[i]=vet[i+1];
    }
    (*len)--;
}

int main(){
    int vetor[max];
    int n,v,index,len=0;

    printf("N:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Valor:");
        scanf("%d",&v);
        append(vetor,&len,v);
    }

    printf("Indice a ser removido:");
    scanf("%d",&index);

    if(index<0 || index>=len){
        printf("INVALIDO!");
    }else{
        removeByIndex(vetor,&len,index);

        for(int i=0;i<len;i++){
            printf("%d ",vetor[i]);
        }
        printf("\n");
    }

    return 0;
}