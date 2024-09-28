#include <stdio.h>

void getString(char *string){
    fgets(string,32,stdin);
    int index=0;
    while(string[index]!='\0'){
        index++;
    }
    string[index-1]='\0';
}

int stringLength(char *string){
    int length=0;
    while(string[length]!='\0'){
        length++;
    }
    return length;
}

int main(){
    char string[32];

    printf("String:");
    getString(string);

    printf("%d",stringLength(string));

    return 0;
}