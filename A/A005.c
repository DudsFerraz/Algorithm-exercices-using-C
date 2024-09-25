#include <stdio.h>

int main(){
    int A,B;

    printf("A:");
    scanf("%d",&A);
    printf("B:");
    scanf("%d",&B);

    printf("%.2f\n",(float)A/B);
    printf("%d\n",A/B);
    printf("%d\n",A%B);

    return 0;
}