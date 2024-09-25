#include <stdio.h>
#include <math.h>

int main(){
    float A,B,C,delta,x1,x2;

    printf("A:");
    scanf("%f",&A);
    printf("B:");
    scanf("%f",&B);
    printf("C:");
    scanf("%f",&C);

    delta = B*B-4*A*C;

    x1 = (-B + sqrt(delta)) /(2*A);
    x2 = (-B - sqrt(delta)) /(2*A);

    printf("As raizes da equacao sao: %.2f e %.2f",x1,x2);

    return 0;
}