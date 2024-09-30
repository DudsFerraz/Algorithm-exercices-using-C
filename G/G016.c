#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float x;
    float y;
}ponto;

ponto *createPonto(){
    ponto *newPonto = malloc(sizeof(ponto));

    printf("X:");
    scanf("%f",&newPonto->x);
    printf("Y:");
    scanf("%f",&newPonto->y);

    return newPonto;
}

float areaRetangulo(ponto *ponto1,ponto *ponto2){
    float b,h;

    b = ponto1->x-ponto2->x;
    if(b<0){
        b=b*-1;
    }

    h = ponto1->y-ponto2->y;
    if(h<0){
        h=h*-1;
    }

    return b*h;
}

int main(){
    ponto *ponto1,*ponto2;
    float area;

    printf("Ponto 1:\n");
    ponto1 = createPonto();
    printf("Ponto 1:\n");
    ponto2 = createPonto();

    area = areaRetangulo(ponto1,ponto2);
    printf("%.4f\n",area);

    return 0;
}