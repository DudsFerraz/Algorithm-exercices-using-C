#include <stdio.h>

int main(){
    int n,n2,digit,nReverse=0;

    printf("N:");
    scanf("%d",&n);

    n2=n;
    while(n2>0){
        digit=n2%10;
        if(nReverse==0){
            nReverse=digit;
        }else{
            nReverse=nReverse*10+digit;
        }
        n2=n2/10;
    }

    if(nReverse==n){
        printf("S");
    }else{
        printf("N");
    }


    return 0;
}