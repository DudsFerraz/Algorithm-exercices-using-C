#include <stdio.h>

int main(){
    float W,H,C,M,area,cost=0;
    int cans=0;

    printf("Wall width:");
    scanf("%f",&W);
    printf("Wall height:");
    scanf("%f",&H);
    printf("Price of the ink can:");
    scanf("%f",&C);
    printf("ink can performance:");
    scanf("%f",&M);

    area = W*H;

    for(int i=1;i<=area;i+=M){
        cans++;
        cost+=C;
    }

    printf("%d ink cans will be needed\n",cans);
    printf("%.2f will be the final cost\n",cost);

    return 0;
}