#include <stdio.h>

int main(){
    float a,b,c;

    printf("Lado A:");
    scanf("%f",&a);
    printf("Lado B:");
    scanf("%f",&b);
    printf("Lado C:");
    scanf("%f",&c);

    if(a>b+c || b>a+c || c>a+b){
        printf("Invalido!");
    }
    else if(a==b && a==c){
        printf("Equilatero");
    }
    else if(a==b && a!=c || a==c && a!= b || b==c && b!=a){
        printf("Isoceles");
    }
    else{
        printf("Escaleno");
    }


    return 0;
}