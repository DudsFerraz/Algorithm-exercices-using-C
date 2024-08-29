#include <stdio.h>
#include <string.h>
#define max 1000

int main(){
    char str[max];
    char x;
    int counter=0;

    printf("String:");
    fgets(str,max,stdin);
    str[strlen(str)-1]='\0';

    printf("X:");
    scanf("%c",&x);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]==x){
            counter++;
        }
    }

    printf("%d",counter);

    return 0;
}