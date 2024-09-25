#include <stdio.h>
#include <string.h>
#define max 1000


int main(){
    char strA[max],strB[max];
    int flag=1;

    printf("String A:");
    fgets(strA,max,stdin);
    strA[strlen(strA)-1]='\0';

    printf("String B:");
    fgets(strB,max,stdin);
    strB[strlen(strB)-1]='\0';


    //nao to confiante nessa logica, provavelmente existe um jeito melhor de fazer
    if(strlen(strA)==strlen(strB)){
        for(int i=0;i<strlen(strA)-1;i++){
            if(!(strchr(strB,strA[i]))){
                flag=0;
                break;
            }
        }
    }else{
        flag=0;
    }

    printf("%d\n",flag);


    return 0;
}