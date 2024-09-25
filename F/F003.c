#include <stdio.h>
#include <stdlib.h>

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

void freeMatrix(int **matriz,int lines){
    for(int i=0;i<lines;i++){
        free(matriz[i]);
    }
}

int sumColumn(int **matriz,int column,int lines){
    int sum=0;
    for(int i=0;i<lines;i++){
        sum+= matriz[i][column];
    }
    return sum;
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

int main(){
    int n,m;
    int **matriz;

    printf("N:");
    scanf("%d",&n);
    printf("M:");
    scanf("%d",&m);

    matriz = createMatrix(n,m);
    readMatrix(matriz,n,m);

    printMatrix(matriz,n,m);

    for(int i=0;i<m;i++){
        int sum = sumColumn(matriz,i,n);
        printf("%d\n",sum);
    }

    freeMatrix(matriz,n);
    free(matriz);
}