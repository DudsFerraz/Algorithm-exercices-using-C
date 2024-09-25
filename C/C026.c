#include <stdio.h>

int main(){
    int n,flag=0;

    printf("N:");
    scanf("%d",&n);

    //não tenho conhecimento matematico o suficiente pra definir uma boa parada.
    //parando o for no n, muitas vezes ele vai executar mais do que precisava.
    for(int i=1;i<n;i++){
        if(i*(i+1)*(i+2)==n){
            flag=1;
            break;
        }
    }

    if(flag==0){
        printf("N\n");
    }else{
        printf("S\n");
    }


    return 0;
}