#include <stdio.h>


int main(){
    int idade,counter=1,altura=0,maior=-1;

    printf("Idade:");
    scanf("%d",&idade);

    for(int i=1;i<5;i++){
        printf("Altura da vela %d:",i);
        scanf("%d",&altura);
        if(altura>maior){
            maior=altura;
            counter=1;
        }else if(altura==maior){
            counter++;
        }
    }

    printf("%d",counter);

    return 0;
}