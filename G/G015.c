#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float x;
    float y;
}ponto;

ponto *createPonto(float x,float y){
    ponto *newPonto = malloc(sizeof(ponto));
    newPonto->x = x;
    newPonto->y = y;
    return newPonto;
}

float distanciaEuclidiana(ponto *ponto1,ponto *ponto2){
    float d, x, y;

    x = (ponto1->x-ponto2->x)*(ponto1->x-ponto2->x);
    y = (ponto1->y-ponto2->y)*(ponto1->y-ponto2->y);
    d = sqrt(x+y);
    return d;
}

int main(){
    ponto *ponto1, *ponto2;
    float x,y, d;

    createPonto(x,y);

    printf("Ponto 1:\n");
    printf("X:");
    scanf("%f",&x);
    printf("Y:");
    scanf("%f",&y);
    ponto1 = createPonto(x,y);

    printf("Ponto 2:\n");
    printf("X:");
    scanf("%f",&x);
    printf("Y:");
    scanf("%f",&y);
    ponto2 = createPonto(x,y);

    d = distanciaEuclidiana(ponto1,ponto2);

    printf("%.4f",d);

    free(ponto1);
    free(ponto2);
}