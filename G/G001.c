#include <stdio.h>
#define max 1000

int append(int vet[],int *len,int x){
    vet[(*len)++]=x;
    return x;
}

int appendMiddle(int vet[],int *len,int index,int x){
    if(index<*len-1){
        for(int i=*len;i>=index;i--){
            vet[i]=vet[i-1];
        }
        (*len)++;
        vet[index]=x;
        return x;
    }else{
        vet[(*len)++]=x;
        return x;
    }
}

int main(){
    int vetor[max];
    int n,v,index,elem,len=0;

    printf("N:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Valor:");
        scanf("%d",&v);
        append(vetor,&len,v);
    }

    printf("Index:");
    scanf("%d",&index);
    printf("Elemento:");
    scanf("%d",&elem);

    if(index<0){
        printf("INVALIDO!");
    }else{
        appendMiddle(vetor,&len,index,elem);

        for(int i=0;i<len;i++){
            printf("%d ",vetor[i]);
        }
    }

    return 0;
}