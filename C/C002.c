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
        for(x;x<=y;x++){
            printf("%d\n",x);
        }
    }


    return 0;
}