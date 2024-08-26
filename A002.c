#include <stdio.h>

int main(){
    int A,B,soma,dif,mult;

    printf("A:");
    scanf("%d",&A);
    printf("B:");
    scanf("%d",&B);

    soma=A+B;
    dif=A-B;
    mult=A*B;

    printf("%d\n",soma);
    printf("%d\n",dif);
    printf("%d\n",mult);

    return 0;
}