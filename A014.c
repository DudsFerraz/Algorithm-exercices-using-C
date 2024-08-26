#include <stdio.h>

int main(){
    int n,n2=0,digit;

    printf("N:");
    scanf("%d",&n);

    while(n>0){
        digit=n%10;
        n=n/10;
        if(n2==0){
            n2=digit;
        }
        else{
            n2=n2*10+digit;
        }
    }
    printf("%d\n",n2);

    return 0;
}