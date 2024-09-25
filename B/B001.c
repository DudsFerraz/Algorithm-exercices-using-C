#include <stdio.h>

int main(){
    int A,B;

    printf("A:");
    scanf("%d",&A);
    printf("B:");
    scanf("%d",&B);

    if(A>B){
        printf("%d e maior que %d",A,B);
    }
    else if(A<B){
        printf("%d e maior que %d",B,A);
    }
    else{
        printf("%d e %d sao iguais",A,B);
    }

    return 0;
}