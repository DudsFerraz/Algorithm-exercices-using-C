#include <stdio.h>

int main(){
    int a,b,soma=0;

    printf("A:");
    scanf("%d",&a);
    printf("B:");
    scanf("%d",&b);

    for(int i=a;i<=b;i++){
        soma+= i;
    }

    printf("%d",soma);

    return 0;
}