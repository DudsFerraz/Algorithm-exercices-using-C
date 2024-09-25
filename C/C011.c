#include <stdio.h>

int main(){
    int x,v,vezes=0;

    printf("X:");
    scanf("%d",&x);

    do
    {
        printf("V:");
        scanf("%d",&v);

        if(v==x){
            vezes+=1;
        }
    } while (v>=0);

    printf("o numero %d foi digitado %d vezes",x,vezes);

    return 0;
}