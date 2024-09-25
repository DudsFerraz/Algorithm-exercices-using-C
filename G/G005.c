#include <stdio.h>
#include <stdlib.h>

int **createMatrix(int lines,int columns){
    int **newMatrix = malloc(sizeof(int*)*lines);
    for(int i=0;i<lines;i++){
        newMatrix[i] = malloc(sizeof(int)*columns);
    }
    return newMatrix;
}

int **createTransposeMatrix(int **matriz,int originalLines,int originalColumns){
    int lines=originalColumns, columns=originalLines;
    int **newMatrix = malloc(sizeof(int*)*lines);
    for(int i=0;i<lines;i++){
        newMatrix[i] = malloc(sizeof(int)*columns);
    }

    for(int i=0;i<lines;i++){
        for(int j=0;j<columns;j++){
            newMatrix[i][j]=matriz[j][i];
        }
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

void printMatrix(int **matriz,int lines,int columns){
    for(int i=0;i<lines;i++){
        for(int j=0;j<columns;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void freeMatrix(int **matriz,int lines){
    for(int i=0;i<lines;i++){
        free(matriz[i]);
    }
}

int main(){
    int **matriz, **matrizTransposta;
    int n,m;
    
    printf("Número N de linhas:");
    scanf("%d",&n);
    printf("Número M de colunas:");
    scanf("%d",&m);

    matriz = createMatrix(n,m);
    readMatrix(matriz,n,m);

    matrizTransposta = createTransposeMatrix(matriz,n,m);

    printMatrix(matriz,n,m);
    printMatrix(matrizTransposta,m,n);

    freeMatrix(matriz,n);
    freeMatrix(matrizTransposta,m);
    free(matriz);
    free(matrizTransposta);

    return 0;
}