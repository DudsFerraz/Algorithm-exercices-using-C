#include <stdio.h>

int main(){
    int n,flag,soma=0;

    printf("N:");
    scanf("%d",&n);

    for(int i=2;i<=n;i++){
        flag=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            soma+=i;
        }
    }

    printf("%d",soma);

    return 0;
}