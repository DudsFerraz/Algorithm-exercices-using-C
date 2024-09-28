#include <stdio.h>

int append(int *vet,int *len,int value){
    vet[(*len)++]=value;
    return value;
}

void printBinary(int *vet,int len){
        for(int i=len-1;i>=0;i--){
        printf("%d",vet[i]);
    }
    printf("\n\n");
}

void binaryConverter(int value, int *vet,int *len){
    int quociente, resto;
    do{
        quociente = value/2;
        resto = value%2;
        value = quociente;
        append(vet,len,resto);
    }while(quociente!=0);
}

int main(){
    int n, binarioVet[32], lenBinario=0;

    printf("N:");
    scanf("%d",&n);

    binaryConverter(n,binarioVet,&lenBinario);
    printBinary(binarioVet,lenBinario);

    return 0;
}