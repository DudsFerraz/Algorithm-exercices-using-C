#include <stdio.h>
#include <math.h>

int decimalConverter(int value){
    int decimal=0, counter=0, digit;
    while(value>0){
        digit=value%10;
        if(digit!=0){
            decimal+= pow(2,counter);
        }
        counter++;
        value = value/10;
    }
    return decimal;
}

int main(){
    int n;

    printf("N:");
    scanf("%d",&n);

    printf("%d",decimalConverter(n));

    return 0;
}