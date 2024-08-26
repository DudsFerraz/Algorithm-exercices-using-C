#include <stdio.h>

int main(){
    int a,b,aux;

    printf("A:");
    scanf("%d",&a);
    printf("B:");
    scanf("%d",&b);
    if(b<a){
        aux=a;
        a=b;
        b=aux;
    }

    printf("%d\n",a);
    printf("%d\n",b);

    return 0;
}