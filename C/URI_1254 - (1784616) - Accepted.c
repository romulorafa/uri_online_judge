/*  AEDS3
    ROMULO RAFAEL DA SILVA  */

#include <stdio.h>
#include <string.h>

#define MAX4 5
#define MAX10 11
#define MAX50 51

int main(){
    char palavra[MAX10];
    char valor[MAX4];
    char frase_input[MAX50];
    int i, j, k, l, existe_tag, achou;

    while ((gets(palavra)!= NULL) && (gets(valor)!= NULL) && (gets(frase_input)!= NULL)){
        char frase_output[MAX50];
        i= 0; j= 0;
        k= 0; existe_tag= 0; achou= 0;
        for ( ; i< strlen(frase_input); i++){
            if (frase_input[i]== '<'){  // VERIFICA EXISTE UMA TAG SENDO ABERTA
                existe_tag= 1;
            }
            else if (frase_input[i]== '>'){ // CASO CONTRARIO, VERIFICA SE EXISSTE UMA TAG SENDO FECHADA
                    existe_tag= 0;
            }
            if ((toupper(palavra[j]) == toupper(frase_input[i])) && (existe_tag == 1)){
                j++; achou++;
                if (achou == strlen(palavra)){    // VERIFICA SE ACHOU A STRING DENTRO DA TAG CONSIDERANDO O TAMANHO DA PALAVRA
                    l= 0;
                    for ( ; l< strlen(valor); l++){ // SUBSTITUI A STRING DA TAG PELA STRING VALOR
                        frase_output[k]= valor[l];
                        k++;
                    }
                    j= 0; achou= 0;
                }
            }
            else{   //  SE AS CONDICOES DO IF NAO SAO ATENDIDAS, ENTAO SIMPLESMENTE COPIA O CHAR DA STRING DE ENTRADA PARA A STRING DE SAIDA
                j= 0;
                while (achou> 0){
                    frase_output[k]= frase_input[i-achou];
                    achou--; k++;
                }
                frase_output[k]= frase_input[i];
                k++;
            }
        }
        frase_output[k]= '\0';
        printf("%s\n", frase_output);
    }
    return 0;
}