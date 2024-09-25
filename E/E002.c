#include <stdio.h>
#define max 1000


int main(){
    char str[max];
    int len;

    printf("String:");
    scanf("%s",str);

    for(int i=0;i<max;i++){
        if(str[i]=='\0'){
            len=i;
            break;
        }
    }

    for(int i=len-1;i>=0;i--){
        printf("%c ",str[i]);
    }
    printf("\n");


    return;
}