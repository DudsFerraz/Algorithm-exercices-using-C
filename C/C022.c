#include <stdio.h>

int main(){
    int x1,x2,v1,v2,flag;

    printf("X1:");
    scanf("%d",&x1);
    printf("V1:");
    scanf("%d",&v1);
    printf("X2:");
    scanf("%d",&x2);
    printf("V2:");
    scanf("%d",&v2);

    for(int i=0;i<100;i++){
        x1=x1+v1;
        x2=x2+v2;
        if(x1==x2){
            flag=1;
            break;
        }
    }

    if(flag==1){
        printf("SIM\n");
    }else{
        printf("NAO\n");
    }


    return 0;
}