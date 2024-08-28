#include <stdio.h>
#define max 1000

int append(int vet[],int *len,int x){
    vet[(*len)++]=x;
    return x;
}

int main(){
    int vetorPar[max],vetorImpar[max];
    int n,v,lenPar=0,lenImpar=0;

    printf("N:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Valor:");
        scanf("%d",&v);
        if(v%2==0){
            append(vetorPar,&lenPar,v);
        }else{
            append(vetorImpar,&lenImpar,v);
        }
    }

    for(int i=0;i<lenPar;i++){
        printf("%d ",vetorPar[i]);
    }
    printf("\n");
    for(int i=0;i<lenImpar;i++){
    printf("%d ",vetorImpar[i]);
    }
    printf("\n");

    return 0;
}