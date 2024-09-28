#include <stdio.h>
#include <stdio.h>
#include <string.h>

void getString(char *string){
    fgets(string,32,stdin);
    string[strlen(string)-1]='\0';
}

void escreveFitaComplementar(char *fitaOriginal,char *fitaComplementar){
    for(int i=0;fitaOriginal[i]!='\0';i++){
        if(fitaOriginal[i]=='A'||fitaOriginal[i]=='T'){
            if(fitaOriginal[i]=='A'){
                fitaComplementar[i]='T';
            }else{
                fitaComplementar[i]='A';
            }
        }else if(fitaOriginal[i]=='C'){
            fitaComplementar[i]='G';
        }else{
            fitaComplementar[i]='C';
        }
    }
}

int main(){
    char DNAoriginal[32], DNAcomplementar[32];

    printf("DNA:");
    getString(DNAoriginal);

    escreveFitaComplementar(DNAoriginal,DNAcomplementar);

    printf("%s\n",DNAoriginal);
    printf("%s\n",DNAcomplementar);

}