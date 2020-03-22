/*  AEDS 3
    RÔMULO RAFAEL DA SILVA  */

#include <stdio.h>
#include <string.h>

#define MAX50 51

int main(){
    int i, j, k;
    char v_frase[MAX50];        // VETOR QUE RECEBE A FRASE DE ENTRADA DO PROGRAMA
    int tamanho;                // ARMAZENA O TAMANHO DA STRING
    char aux;                   // CHAR AUXILIAR PARA ORDENAÇÃO
    int troca;                  // INTEIRO FLAG PARA ORDENAÇÃO DO VETOR DE CHAR

    while (gets(v_frase)!= NULL){
        tamanho= strlen(v_frase);
        if (tamanho < 1){
            printf("\n");
        }
        else{
            for(i= 0; i < tamanho-1; i++){
                troca= 0;
                k= i;
                aux= v_frase[i];
                for(j= i+1; j < tamanho; j++){
                    if(v_frase[j] < aux){
                        k= j;  aux= v_frase[j];
                        troca = 1;
                    }
                }
                if(troca){
                    v_frase[k]= v_frase[i];
                    v_frase[i]= aux;
                }
            }// AO FINAL DO LOOP, O VATOR DE CHAR ESTARA ORDENADO
        }
        i=0;
        while (i< tamanho){ // LOOP PARA IMPRIMIR AS FAIXAS DE LETRAS
            if (v_frase[i] == ' '){ // DESCONSIDERA AS POSIÇÕES DA STRING QUE ESTÃO VAZIAS
                i++;
            }
            else{
                j= i+1;
                while ((v_frase[j] - v_frase[j-1] <= 1 ) && (j < tamanho)){ // VERIFICA SE AS POSIÇÕES DAS STRINGS SÃO LETRAS SEQUENCIAIS
                    j++;                                                    // FAZENDO OPERAÇÃO DE SUBSTRAÇÃO CONSIDERANDO A IDEIA DA TABELA ASCII
                }
                if (j < tamanho){   // O CONTADOR ESTA EM POSIÇÃO INTERMEDIARIAS DA STRING
                    printf ("%c:%c, ", v_frase[i], v_frase[j-1]);
                    i= j;
                }
                else{   // O CONTADOR CHEGOU ULTRAPASSOU A ULTIMA POSICAO VALIDA DA STRING, INDICANDO O FIM DA MESMA.
                    printf ("%c:%c\n", v_frase[i], v_frase[j-1]);
                    i= j;
                }
            }
        }
    }
    return 0;
}
