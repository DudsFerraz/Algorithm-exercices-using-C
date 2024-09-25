#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,delta,x1,x2,soma;

    printf("A:");
    scanf("%f",&a);
    printf("B:");
    scanf("%f",&b);
    printf("C:");
    scanf("%f",&c);

    delta=b*b-4*a*c;

    if(delta<0){
        printf("Nao existem raizes reais");
    }
    else{
        if(delta==0){
            x1=-b/(2*a);
            x2=0;
        }
        else{
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
        }
        
        printf("%.2f",x1+x2);
    }

    return 0;
}