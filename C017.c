#include <stdio.h>

int main(){
    int n,soma=0,fat;

    printf("N:");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        fat=1;
        for(int j=1;j<=i;j++){
            fat=fat*j;
        }
        soma+=fat;
    }
    printf("%d",soma);
    return 0;

}