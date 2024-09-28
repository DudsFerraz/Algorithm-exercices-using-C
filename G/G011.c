#include <stdio.h>
#include <stdlib.h>

int append(int *vet,int *len,int value){
    vet[(*len)++]=value;
    return value;
}

void readArray(int *vet,int *len,int size){
    int value;
    printf("Values:");
    for(int i=0;i<size;i++){
        scanf("%d",&value);
        append(vet,len,value);
    }
}

void printArray(int *vet,int len){
    for(int i=0;i<len;i++){
        printf("%d ",vet[i]);
    }
    printf("\n\n");
}

void sortArrays(int *vetA,int lenVetA,int *vetB,int lenVetB,int *vetC,int *lenVetC){
    int indexA=0, indexB=0, size=lenVetA+lenVetB, flagA=0, flagB=0;
                
    while(*lenVetC<size){
        if((vetA[indexA]<=vetB[indexB] || flagB==1) && flagA==0){
            append(vetC,lenVetC,vetA[indexA]);
            indexA++;
            if(indexA==lenVetA){
                flagA=1;
            }
        }else if((vetB[indexB]<vetA[indexA] || flagA==1) && flagB==0){
            append(vetC,lenVetC,vetB[indexB]);
            indexB++;
            if(indexB==lenVetB){
                flagB=1;
            }
        }
    }
}

int main(){
    int *vetA = malloc(sizeof(int)*100), lenVetA=0;
    int *vetB = malloc(sizeof(int)*100), lenVetB=0;
    int *vetC = malloc(sizeof(int)*200), lenVetC=0;
    int n,m;

    printf("N:");
    scanf("%d",&n);
    readArray(vetA,&lenVetA,n);

    printf("M:");
    scanf("%d",&m);
    readArray(vetB,&lenVetB,m);

    printArray(vetA,lenVetA);
    printArray(vetB,lenVetB);

    sortArrays(vetA,lenVetA,vetB,lenVetB,vetC,&lenVetC);
    printArray(vetC,lenVetC);

    free(vetA);
    free(vetB);
    free(vetC);

    return 0;
}