#include <stdio.h>

int main(){
    int n,ant=1,atual=1,prox;

    printf("N:");
    scanf("%d",&n);

    printf("%d ",ant);
    printf("%d ",atual);
    for(int i=2;i<n;i++){
        prox=ant+atual;
        printf("%d ",prox);
        ant=atual;
        atual=prox;
    }
}