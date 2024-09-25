#include <stdio.h>

int main(){
    float salary,sales,FinalValue;

    printf("Salesman salary:");
    scanf("%f",&salary);
    printf("Sales amount:");
    scanf("%f",&sales);

    FinalValue = salary+sales*0.18;

    printf("The salesman will receive a total of R$%.2f",FinalValue);


    return 0;
}