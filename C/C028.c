#include <stdio.h>
#include <limits.h>

int main(){
    int n,v,counter=0,ant=INT_MIN,max=0;

    printf("N:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Valor:");
        scanf("%d",&v);
        if(v>=ant){
            counter++;
        }else{
            counter=1;
        }
        if(counter>max){
            max=counter;
        }
        ant=v;
    }

    printf("%d",max);

    return 0;
}