#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printMatrix(int **matriz,int lines,int columns){
    for(int i=0;i<lines;i++){
        for(int j=0;j<columns;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// void createMatrix(int ***matriz,int lines,int columns){
//     //printf("dentro1->%p\n", *matriz);
//     *matriz = malloc(sizeof(int*)*lines);
//     for(int i=0;i<columns;i++){
//         (*matriz)[i] = (int*) malloc(sizeof(int)*columns);
//     }
//     //printMatrix(*matriz,lines,columns);
//     //printf("dentro2->%p\n", *matriz);
// }

int **createMatrix(int lines,int columns){
    int **newMatrix = malloc(sizeof(int*)*lines);
    for(int i=0;i<lines;i++){
        newMatrix[i] = malloc(sizeof(int)*columns);
    }
    return newMatrix;
}

void freeMatrix(int **matriz,int lines){
    for(int i=0;i<lines;i++){
        free(matriz[i]);
    }
}

void readMatrix(int **matriz,int lines,int columns){
    printf("Values:");
    for(int i=0;i<lines;i++){
        for(int j=0;j<columns;j++){
            scanf("%d",&matriz[i][j]);
        }
    }
}

int main(){
    int **matriz, n, m;

    printf("N:");
    scanf("%d",&n);
    printf("M:");
    scanf("%d",&m);

    //printf("fora1->%p\n", matriz);
    matriz = createMatrix(n,m);
    //printf("fora2->%p\n", matriz);

    readMatrix(matriz,n,m);
    printMatrix(matriz,n,m);

    freeMatrix(matriz,n);

    return 0;
}