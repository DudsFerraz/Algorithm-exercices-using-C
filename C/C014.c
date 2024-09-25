#include <stdio.h>

int main(){
    float n,c;
    int choc,m,emb,troca;

    printf("Dinheiro:");
    scanf("%f",&n);
    printf("Preco do chocolate:");
    scanf("%f",&c);
    printf("Promocao:");
    scanf("%d",&m);

    choc=(int)n/c;
    emb=choc;

    while(emb>=m){
        emb-=m;
        choc+=1;
        emb+=1;
    }

    printf("%d",choc);

    return 0;
}