#include <stdio.h>

int main(){
    float E,B,N,V,total,A;

    printf("Eleitores:");
    scanf("%f",&E);
    printf("Votos em branco:");
    scanf("%f",&B);
    printf("Votos nulos:",&N);
    scanf("%f",&N);
    printf("Votos validos:");
    scanf("%f",&V);

    total = N+B+V;

    B = B/E*100;
    N = N/E*100;
    V = V/E*100;
    A = (E-total)/E*100;

    //como printar "%"?
    printf("Nulos: %.2f %\n",B);
    printf("Brancos: %.2f %\n",N);
    printf("Validos: %.2f %\n",V);
    printf("Ausentes: %.2f %\n",A);

    return 0;
}
