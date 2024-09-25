#include <stdio.h>

int main(){
    int n,v,maior,flag=0;

    printf("N:");
    scanf("%d",&n);


    for(int i=0;i<n;i++){
        printf("Valor:");
        scanf("%d",&v);
        //Esse if sendo checado no loop não é custoso?
        //não seria melhor usar o min int la em cima?
        if(i==0){
            maior=v;
        }
        else if(v>=maior){
            maior=v;
        }
    }

    printf("Maior valor digitado: %d",maior);

    
    return 0;
}