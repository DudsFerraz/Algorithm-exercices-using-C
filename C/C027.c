#include <stdio.h>

int main(){
    int n,soma=0;

    printf("N:");
    scanf("%d",&n);

    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            soma+=i;
        }
    }

    if(soma==n){
        printf("S");
    }else{
        printf("N");
    }

    return 0;
}