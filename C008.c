#include <stdio.h>

int main(){
    int n,res=1;

    printf("N:");
    scanf("%d",&n);

    for(int i=2;i<=n;i++){
        res=res*i;
    }

    printf("%d\n",res);

    return 0;
}