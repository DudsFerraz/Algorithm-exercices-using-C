#include <stdio.h>

int main(){
    int a,b,c,aux;

    printf("A:");
    scanf("%d",&a);
    printf("B:");
    scanf("%d",&b);
    if(b<a){
        aux=a;
        a=b;
        b=aux;
    }
    printf("C:");
    scanf("%d",&c);
    if(c<a){
        aux=c;
        c=b;
        b=a;
        a=aux;
    }
    else if(c<b){
        aux=b;
        b=c;
        c=aux;
    }

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);

    return 0;
}