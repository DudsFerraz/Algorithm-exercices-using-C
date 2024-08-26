#include <stdio.h>

#define max 1000

int append(int vet[],int *len,int elem){
    vet[(*len)++]=elem;
    return elem;
}

int ordem(int vet[],int len){
    int flagC=0,flagD=0,flagN=0;
    for(int i=0;i<len-1;i++){
        if(vet[i]<=vet[i+1] && flagD==0 && flagN==0){
            flagC=1;
        }else if(vet[i]>vet[i+1] && flagC==1){
            flagN=1;
            flagC=0;
            flagD=0;
        }else if(flagN==0 && flagC==0){
            flagD=1;
            flagC=0;
            flagN=0;
        }
    }
    if(flagC==1){
        return 1;
    }else if(flagD==1){
        return -1;
    }
    return 0;
}

int main(){
    int vetor[max];
    int n,v,ant,len=0;

    printf("N:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("Valor %d:",i);
        scanf("%d",&v);
        append(vetor,&len,v);
    }

    printf("%d\n",ordem(vetor,len));

    return 0;
}