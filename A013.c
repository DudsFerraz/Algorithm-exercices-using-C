#include <stdio.h>

int main(){
    int s,s2,dias,horas,minutos;

    printf("Segundos:");
    scanf("%d",&s);
    s2=s;

    dias = s2/86400;
    s2 = s2%86400;
    horas = s2/3600;
    s2 = s2%3600;
    minutos = s2/60;
    s2 = s2%60;

    printf("%d segundos representam %d dias, %d horas, %d minutos e %d segundos",s,dias,horas,minutos,s2);

    return 0;
}