#include <stdio.h>

int main(){
    int x,a;
    float v1,v2,vFinal;

    printf("x:");
    scanf("%d",&x);
    printf("v1:");
    scanf("%f",&v1);
    printf("v2:");
    scanf("%f",&v2);
    printf("A:");
    scanf("%d",&a);

    if(a<=x){
        vFinal=v1*a;
    }
    else{
        vFinal=v2*a;
    }

    printf("O viagem saira por R$%.2f.",vFinal);

    return 0;
}