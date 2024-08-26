#include <stdio.h>

int main(){
    int n,v,maior,menor,soma=0;

    printf("N:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Valor:");
        scanf("%d",&v);
        soma+=v;
        if(i==0){
            maior=v;
            menor=v;
        }
        else if(v>maior){
            maior=v;
        }
        else if(v<menor){
            menor=v;
        }
    }

        printf("Maior: %d\n",maior);
        printf("Menor: %d\n",menor);
        printf("Soma: %d\n",soma);

    return 0;
}