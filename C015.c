#include <stdio.h>

int main(){
    int n, flag=1;

    printf("N:");
    scanf("%d",&n);

    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
        }
    }

    printf("%d",flag);

    return 0;
}