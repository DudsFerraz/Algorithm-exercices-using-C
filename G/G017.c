#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[32], registro[16], ingresso[16], curso[32], sexo;
}aluno;

void bufferCleaner(){
    char c;
    while((c=getchar())!='\n'){
    }
}

void getString(char *string, char *label, int size){
    printf("%s",label);
    fgets(string,size,stdin);
    string[strlen(string)-1]='\0';
}

int createStudent(aluno **escola,int *lenEscola,char *nome,char sexo,char *registro,char *ingresso,char *curso){
    aluno *newAluno = malloc(sizeof(aluno));

    strcpy(newAluno->nome,nome);
    newAluno->sexo = sexo;
    strcpy(newAluno->registro,registro);
    strcpy(newAluno->ingresso,ingresso);
    strcpy(newAluno->curso,curso);

    escola[(*lenEscola)++]=newAluno;
    return 1;
}

void printEscola(aluno **escola,int lenEscola){
    printf("\n\n----------TODOS OS ALUNOS----------\n\n");
    char sexo[12];
    for(int i=0;i<lenEscola;i++){
        printf("Nome: %s\n",escola[i]->nome);
        if(escola[i]->sexo=='f' || escola[i]->sexo=='F'){
            strcpy(sexo,"Feminino");
        }else{
            strcpy(sexo,"Masculino");
        }
        printf("Sexo: %s\n",sexo);
        printf("Registro academico: %s\n",escola[i]->registro);
        printf("Data de ingresso: %s\n",escola[i]->ingresso);
        printf("Nome do curso: %s\n",escola[i]->curso);
        printf("--------------------\n");
    }
}

void freeEscola(aluno **escola,int lenEscola){
    for(int i=0;i<lenEscola;i++){
        free(escola[i]);
    }
    free(escola);
}

int main(){
    aluno **escola = malloc(sizeof(aluno*)*30);
    int lenEscola=0;
    char nome[32];

    getString(nome,"Nome:",32);
    while(strcmp(nome,"FIM")!=0){
        char registro[16], ingresso[16], curso[32], sexo;

        printf("Sexo:");
        scanf("%c",&sexo);
        bufferCleaner();
        getString(registro,"Registro academico:",16);
        getString(ingresso,"Data de ingresso:",16);
        getString(curso,"Nome do curso:",32);

        if(createStudent(escola,&lenEscola,nome,sexo,registro,ingresso,curso)==1){
            printf("Aluno matriculado com sucesso!\n\n");
        }else{
            printf("Erro!\n\n");
        }
        getString(nome,"Nome:",32);
    }

    printEscola(escola,lenEscola);

    freeEscola(escola,lenEscola);

    return 0;
}