/*  UFMG - AEDS 3
    RÔMULO RAFAEL DA SILVA  */

#include <stdio.h>
#include <string.h>

#define MAX 51

int main (){

    int i, j, k; // CONTADORES PARA CAMINHAR PELAS POSICOES DAS STRINGS
    char str1[MAX]; // ARMAZENA 1a STRING
    char str2[MAX]; // ARMAZENA 2a STRING
    char aux_str[MAX]; // STRING AUXILIAR
    int cont, aux_cont, maior_substr; // VARIAVEIS AUXILIARES PARA ENCONTRAR A MAIOR SUBSTRING
    int num1, num2; //  VARIAVEIS PARA ARMANEZAR A QUANTIDADE DE CARACTERES TOTAIS DA STRING

    num1= 0;
    num2= 0;
    cont= 0;
    aux_cont= 0;

    while ((gets(str1)!= NULL) && (gets(str2)!= NULL)){
        // CONDICIONAL PARA TROCAR AS STRINGS DE MANEIRA QUE STR1 SEJA SEMPRE MAIOR QUE STR2
        if (strlen(str2) > strlen(str1)){
            strcpy (aux_str, str2);
            strcpy (str2, str1);
            strcpy (str1, aux_str);
        }
        // FUNCAO PARA ATRIBUIR A QUANTIDADE DE CHAR DE CADA STRING
        num1= strlen(str1);
        num2= strlen(str2);
        // VERIFICANDO A MAIOR SUBSTRING ENTRE AS DUAS STRINGS
        for (i=0; i< num1; i++){
            k= i;
            cont= 0;
                for (j=0; j< num2; j++){
                    if (str1[k] == str2[j]){
                        cont++;
                        k++;
                        if (cont > aux_cont){
                            aux_cont= cont;
                        }
                    }
	                // ARMAZENANDO O MAIOR TAMANHO DA SUBSTRING ATE ENTAO ENCONTRADA
                    else {
		                cont= 0;
		                k= i;
	                }
               }

        }
        // IMPRIMINDO O TAMANHO DA MAIOR SUBSTRING ENCONTRADA
        printf ("%d\n", aux_cont);
        aux_cont= 0;
    }
    return 0;
}