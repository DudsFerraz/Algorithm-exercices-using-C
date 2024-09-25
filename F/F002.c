#include <stdio.h>
#include <stdlib.h>

int append(int vet[],int *len,int value){
    vet[(*len)++]=value;
    return value;
}

int **createMatrix(int lines,int columns){
    int **newMatrix = malloc(sizeof(int*)*lines);
    for(int i=0;i<lines;i++){
        newMatrix[i] = malloc(sizeof(int)*columns);
    }
    return newMatrix;
}

void readMatrix(int **matriz,int lines,int columns){
    printf("Values:");
    for(int i=0;i<lines;i++){
        for(int j=0;j<columns;j++){
            scanf("%d",&matriz[i][j]);
        }
    }
}

void sumLines(int **matriz,int *vetSumLines,int *lenVetSumLines,int lines,int columns){
    int sum=0;
    for(int i=0;i<lines;i++){
        for(int j=0;j<columns;j++){
            sum+=matriz[i][j];
        }
        append(vetSumLines,lenVetSumLines,sum);
        sum=0;
    }
}

void printMatrix(int **matriz,int lines,int columns){
    for(int i=0;i<lines;i++){
        for(int j=0;j<columns;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printSumLines(int *vet,int lenVet){
    for(int i=0;i<lenVet;i++){
        printf("%d\n",vet[i]);
    }
    printf("\n");
}

void freeMatrix(int **matriz,int lines){
    for(int i=0;i<lines;i++){
        free(matriz[i]);
    }
}

int main(){
    int **matriz;
    int n,m;

    printf("N:");
    scanf("%d",&n);
    printf("M:");
    scanf("%d",&m);

    matriz = createMatrix(n,m);
    readMatrix(matriz,n,m);

    printMatrix(matriz,n,m);

    int vetSumLines[n], lenVetSumLines=0;
    sumLines(matriz,vetSumLines,&lenVetSumLines,n,m);
    printSumLines(vetSumLines,lenVetSumLines);

    freeMatrix(matriz,n); 
    free(matriz);
    
    return 0;
}