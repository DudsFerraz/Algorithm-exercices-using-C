#include <stdio.h>

int main(){
    int ano;

    printf("Ano:");
    scanf("%d",&ano);

    if(ano>0){
        if(ano%400==0 || ano%4==0 && ano%100!=0){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    else{
        printf("-1");
    }

    return 0;
}