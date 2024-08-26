#include <stdio.h>

int multiplica(int x,int y){
    int res=x;
    for(int i=1;i<y;i++){
        res+=x;
    }
    return res;
}

int main(){
    int a,b,res=0,at;

    printf("A:");
    scanf("%d",&a);
    printf("B:");
    scanf("%d",&b);

    for(int i=1;i<b;i++){
        if(res==0){
            res=a;
        }
        res=multiplica(res,a);
    }

    printf("%d",res);
    return 0;
}