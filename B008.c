#include <stdio.h>

int compara(int n1,int n2){
    if(n1>n2){
        return n1;
    }
    else{
        return n2;
    }
}

int main(){
    int a,b,c,maior;

    printf("A:");
    scanf("%d",&a);
    maior=a;
    printf("B:");
    scanf("%d",&b);
    maior=compara(b,maior);
    printf("C:");
    scanf("%d",&c);
    maior=compara(c,maior);

    printf("%d\n",maior);

    return 0;
}