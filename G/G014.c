#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char dia[3], mes[3], ano[5], mesExtenso[10];
    int intDia, intMes;
    char dataNumeral[32], dataExtenso[32];
}data;

void bufferCleaner(){
    char c;
    while((c=getchar()!='\n')){
    }
}

void getString(char *string,char *label,int size){
    printf("%s",label);
    fgets(string,size,stdin);
    string[strlen(string)-1]='\0';
}

int checaData(data *newData){
    if(newData->intDia<1 || newData->intDia>31 || newData->intMes<1 || newData->intMes>12){
        return -1;
    }
    if(newData->intMes==2){
        if(newData->intDia>29){
            return -1;
        }
    }
    if(newData->intMes == 4 || newData->intMes == 6 || newData->intMes == 9 || newData->intMes == 11){
        if(newData->intDia>30){
            return -1;
        }
    }
    if(newData->intMes==2){
        if(newData->intDia>29){
            return -1;
        }
    }
    if(newData->intMes == 4 || newData->intMes == 6 || newData->intMes == 9 || newData->intMes == 11){
        if(newData->intDia>30){
            return -1;
        }
    }
    return 1;
}

int escreveData(data *newData){
    int i=0, j=0;
    while(newData->dia[j]!='\0'){
        newData->dataExtenso[i++]=newData->dia[j++];
    }
    j=0;
    newData->dataExtenso[i++]=' '; newData->dataExtenso[i++]='d'; newData->dataExtenso[i++]='e'; newData->dataExtenso[i++]=' ';
    while(newData->mesExtenso[j]!='\0'){
        newData->dataExtenso[i++]=newData->mesExtenso[j++];
    }
    j=0;
    newData->dataExtenso[i++]=' '; newData->dataExtenso[i++]='d'; newData->dataExtenso[i++]='e'; newData->dataExtenso[i++]=' ';
    while(newData->ano[j]!='\0'){
        newData->dataExtenso[i++]=newData->ano[j++];
    }
    newData->dataExtenso[i]='\0';

    return 1;
}

int createData(data **vetDatas,int *lenVetDatas,char *dataNumeral){
    data *newData = malloc(sizeof(data));

    int i=0, j=0;
    while(dataNumeral[i]!='/'){
        newData->dia[j++]=dataNumeral[i++];
    }
    newData->dia[j]='\0';
    j=0;
    i++;
    while(dataNumeral[i]!='/'){
        newData->mes[j++]=dataNumeral[i++];
    }
    newData->mes[j]='\0';
    j=0;
    i++;
    while(dataNumeral[i]!='\0'){
        newData->ano[j++]=dataNumeral[i++];
    }
    newData->ano[j]='\0';

    strcpy(newData->dataNumeral,dataNumeral);
    newData->intDia=atoi(newData->dia);
    newData->intMes=atoi(newData->mes);
    char *meses[] = {"Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
    strcpy(newData->mesExtenso,meses[newData->intMes-1]);

    int flag = checaData(newData);
    if(flag==1){
        escreveData(newData);
    }else{
        strcpy(newData->dataExtenso,"Data invalida!");
    }

    vetDatas[(*lenVetDatas)++]=newData;

    return 1;
}

void printVetDatasPorExtenso(data **vetDatas,int lenVetDatas){
    printf("\n\n----------TODAS AS DATAS----------\n\n");
    for(int i=0;i<lenVetDatas;i++){
        printf("%s\n",vetDatas[i]->dataExtenso);
    }
    printf("---------------------------------------\n\n");
}

void freeVetDatas(data **vetDatas,int lenVetDatas){
    for(int i=0;i<lenVetDatas;i++){
        free(vetDatas[i]);
    }
    free(vetDatas);
}

int main(){
    data **vetDatas = malloc(sizeof(data*)*50);
    int n, lenVetDatas=0;

    printf("N:");
    scanf("%d",&n); 
    bufferCleaner();

    for(int i=0;i<n;i++){
        char dataNumeral[32];
        getString(dataNumeral,"Data:",32);
        createData(vetDatas,&lenVetDatas,dataNumeral);
    }

    printVetDatasPorExtenso(vetDatas,lenVetDatas);

    freeVetDatas(vetDatas,lenVetDatas);

    return 0;
}