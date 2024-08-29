#include <stdio.h>
#include <string.h>
#define max 1000

int main(){
    char str[max];
    int indexAlt,flag=1;

    printf("String:");
    fgets(str,max,stdin);
    str[strlen(str)-1]='\0';

    indexAlt=strlen(str)-1;
    for(int i=0;i<=strlen(str)/2;i++){
        if(str[i]==' '){
            i++;
        }
        if(str[indexAlt]==' '){
            indexAlt--;
        }
        if(str[i]!=str[indexAlt]){
            flag=0;
            break;
        }
        indexAlt--;
    }

    printf("%d\n",flag);

    return 0;
}