#include <stdio.h>

int main(){
    int a,b,res;

    printf("A:");
    scanf("%d",&a);
    printf("B:");
    scanf("%d",&b);

    res=a;
    for(int i=1;i<b;i++){
        res+=a;
    }

    printf("%d\n",res);

    return 0;
}