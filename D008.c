#include <stdio.h>
#define max 1000

int append(int vet[],int *len,int x){
    vet[(*len)++]=x;
    return x;
}

//ter uma varivael pra cada len criou uma confusao principalente na hora de fazer a funcao
//melhor assim ou não?
//nesse caso um len pra controlar todos os vetores funcionaria, mas e em outros?
void somaVetor(int vet1[],int vet2[],int vet3[],int *len,int *len3){
    for(int i=0;i<*len;i++){
        vet3[i]=vet1[i]+vet2[i];
        (*len3)++;
    }
}

int main(){
    int vetorA[max],vetorB[max],vetorC[max];
    int n,v,len1=0,len2=0,len3=0;

    printf("N:");
    scanf("%d",&n);

    printf("Valores para o primeiro vetor:\n");
    for(int i=0;i<n;i++){
        printf("Valor:");
        scanf("%d",&v);
        append(vetorA,&len1,v);
    }

    printf("Valores para o segundo vetor:\n");
    for(int i=0;i<n;i++){
        printf("Valor:");
        scanf("%d",&v);
        append(vetorB,&len2,v);
    }

    somaVetor(vetorA,vetorB,vetorC,&len1,&len3);
    for(int i=0;i<len3;i++){
        printf("%d ",vetorC[i]);
    }

    return 0;
}