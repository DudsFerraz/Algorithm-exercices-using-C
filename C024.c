#include <stdio.h>
#include <limits.h>

int main(){
    int n,v,maior=INT_MIN,maior2=INT_MIN;

    printf("N:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("Valor %d:",i);
        scanf("%d",&v);
        if(v>maior){
            maior2=maior;
            maior=v;
        }else if(v>maior2){
            maior2=v;
        }
    }

    printf("%d\n",maior);
    printf("%d\n",maior2);

    return 0;
}