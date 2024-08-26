#include <stdio.h>

int main(){
    int n,soma=0,digito;

    printf("N:");
    scanf("%d",&n);

    while(n>0){
        digito=n%10;
        soma+=digito;
        n=n/10;
    }

    printf("%d",soma);

    return 0;
}