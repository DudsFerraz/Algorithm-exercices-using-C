#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getString(char *string){
    fgets(string,32,stdin);
    string[strlen(string)-1]='\0';
}

int dataPorExtenso(char *dataOriginal, char *dataPorExtenso){
    char dia[3], mes[3], ano[5];
    int i=0, j;

    j=0;
    while(dataOriginal[i]!='/'){
        dia[j++]=dataOriginal[i++];
    }
    j=0;
    i++;
    while(dataOriginal[i]!='/'){
        mes[j++]=dataOriginal[i++];
    }
    j=0;
    i++;
    while(dataOriginal[i]!='\0'){
        ano[j++]=dataOriginal[i++];
    }


    int diaInt = atoi(dia), mesInt= atoi(mes);
    if(diaInt<1 || diaInt>31 || mesInt<1 || mesInt>12){
        return -1;
    }
    if(mesInt==2){
        if(diaInt>29){
            return -1;
        }
    }
    if(mesInt == 4 || mesInt == 6 || mesInt == 9 || mesInt == 11){
        if(diaInt>30){
            return -1;
        }
    }
    if(mesInt==2){
        if(diaInt>29){
            return -1;
        }
    }
    if(mesInt == 4 || mesInt == 6 || mesInt == 9 || mesInt == 11){
        if(diaInt>30){
            return -1;
        }
    }

    char *meses[] = {"Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
    char mesExtenso[9];

    strcpy(mesExtenso,meses[mesInt-1]);

    i=0;
    j=0;
    while(dia[j]!='\0'){
        dataPorExtenso[i++]=dia[j++];
    }
    j=0;
    dataPorExtenso[i++]=' '; dataPorExtenso[i++]='d'; dataPorExtenso[i++]='e'; dataPorExtenso[i++]=' ';
    while(mesExtenso[j]!='\0'){
        dataPorExtenso[i++]=mesExtenso[j++];
    }
    j=0;
    dataPorExtenso[i++]=' '; dataPorExtenso[i++]='d'; dataPorExtenso[i++]='e'; dataPorExtenso[i++]=' ';
    while(ano[j]!='\0'){
        dataPorExtenso[i++]=ano[j++];
    }

    return 1;
}

int main(){
    char dataOriginal[32], dataExtenso[32];

    printf("Data:");
    getString(dataOriginal);

    int flag = dataPorExtenso(dataOriginal,dataExtenso);

    if(flag!=-1){
        printf("%s\n",dataExtenso);
    }else{
        printf("Data invalida!\n");
    }

}