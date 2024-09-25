#include <stdio.h>

int main(){
    float n,h=1,v;

    printf("N:");
    scanf("%f",&n);

    for(int i=2;i<=n;i++){
        h += (float)1/i;
        v= (float)1/i;
    }

    printf("%.4f",h);

    return 0;
}