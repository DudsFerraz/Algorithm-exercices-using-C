#include <stdio.h>
#define max 1000

//tem algum jeito melhor de fazer isso?
void removeEnter(char str[]){
    for(int i=0;i<max;i++){
        if(str[i]=='\n'){
            str[i]='\0';
        }
    }
}

// void removeEnter(char str[]){
//     int indice;
//     for(int i=0;i!='0';i++){
//         if(str[i]=='\n'){
//             indice=i;
//         }
//     }
//     str[indice]='\0';
// }

int main(){
    char str[100];

    printf("String:");
    fgets(str,100,stdin);
    removeEnter(str);

    for(int i=0;str[i]!='\0';i++){
        printf("%c ",str[i]);
    }
    printf("\n");

}