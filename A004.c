#include <stdio.h>

int main(){
    char nome[32];
    float n1,n2,media;

    printf("Nome do aluno(a):");
    scanf("%s",nome);
    printf("Nota 1:");
    scanf("%f",&n1);
    printf("Nota 2:");
    scanf("%f",&n2);

    media = (n1+n2)/2;

    printf("%s obteve %.2f de media",nome,media);

    return 0;
}