#include <stdio.h>
#include <stdlib.h>

int append(int *vet,int *len,int value){
    vet[(*len)++]=value;
    return value;
}

void readArray(int *vet,int *len,int size){
    int value;
    printf("Valores:");
    for(int i=0;i<size;i++){
        scanf("%d",&value);
        append(vet,len,value);
    }
}

void showArray(int *vet,int len){
    for(int i=0;i<len;i++){
        printf("%d ",vet[i]);
    }
    printf("\n");
}

void interleaveArrays(int vetA[],int lenVetA,int vetB[],int lenVetB,int vetC[],int *lenVetC){
    int size = lenVetA+lenVetB, indexA=0, indexB=0, flag=1, i=1;

    if(lenVetB>lenVetA){
        flag=0;
    }

    while(*lenVetC<size){
        if(i%2==flag){
            if(indexA<lenVetA){
                append(vetC,lenVetC,vetA[indexA]);
                indexA++;
            }
        }else{
            if(indexB<lenVetB){
                append(vetC,lenVetC,vetB[indexB]);
                indexB++;
            }
        }
        i++;
    }
    printf("\n");
}

int main(){
    int *vetA=malloc(sizeof(int)*50), lenVetA=0;
    int *vetB=malloc(sizeof(int)*50), lenVetB=0;
    int *vetC=malloc(sizeof(int)*100), lenVetC=0;
    int n,m;

    printf("Tamanho N do primeiro vetor:");
    scanf("%d",&n);
    readArray(vetA,&lenVetA,n);
    printf("Tamnho M do segundo vetor:");
    scanf("%d",&m);
    readArray(vetB,&lenVetB,m);

    showArray(vetA,lenVetA);
    showArray(vetB,lenVetB);

    interleaveArrays(vetA,lenVetA,vetB,lenVetB,vetC,&lenVetC);

    showArray(vetC,lenVetC);

    return 0;
}