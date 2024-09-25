#include <stdio.h>

int main(){
    int A,B,a,b,mdc,flag=0,aux,resto;

    printf("A:");
    scanf("%d",&A);
    printf("B:");
    scanf("%d",&B);
    if(A>=B){
        a=A;
        b=B;
    }
    else{
        a=B;
        b=A;
    }

    while(flag==0){
        if(a==0){
            mdc=b;
            flag=1;
        }
        else if(b==0){
            mdc=a;
            flag=1;
        }
        else{
            resto=a%b;
            a=b;
            b=resto;
        }
    }

    printf("O MDC de %d e %d e: %d",A,B,mdc);

    return 0;
}