#include <stdio.h>
#include <math.h>

int main(){
    float A,B,H;

    printf("Cateto A:");
    scanf("%f",&A);
    printf("Cateto B:");
    scanf("%f",&B);

    H = sqrt(A*A+B*B);

    printf("Valor da hipotenusa: %.2f",H);

    return 0;
}