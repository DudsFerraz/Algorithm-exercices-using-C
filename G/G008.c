#include <stdio.h>
#include <string.h>

void getString(char *string){
    fgets(string,32,stdin);
    string[strlen(string)-1]='\0';
}

int countConsonants(char *string){
    int counter=0;
    for(int i=0;string[i]!='\0';i++){
        if(string[i]!='a' && string[i]!='e' && string[i]!='i' && string[i]!='o' && string[i]!='u' && string[i]!=' '){
            counter++;
        }
    }
    return counter;
}

int main(){
    char str[32];

    printf("String:");
    getString(str);

    printf("%d",countConsonants(str));

    return 0;
}