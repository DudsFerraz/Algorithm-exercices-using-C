#include <stdio.h>

int main(){
    int age;

    printf("Age:");
    scanf("%d",&age);

    if(16<=age && age<=17){
        printf("Optional Voter");
    }
    else if(17<age && age<=69){
        printf("Mandatory Voter");
    }
    else{
        printf("Dismissed");
    }

    return 0;
}