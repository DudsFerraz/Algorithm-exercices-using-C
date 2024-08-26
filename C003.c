#include <stdio.h>

int main(){
    int x,y;

    printf("X:");
    scanf("%d",&x);
    printf("Y:");
    scanf("%d",&y);

    if(x>y){
        printf("Invalido");
    }
    else{
        for(int i=x;i<=y;i++){
            printf("%d\n",i);
        }
        for(int i=y;i>=x;i--){
            printf("%d\n",i);
        }
    }


    return 0;
}