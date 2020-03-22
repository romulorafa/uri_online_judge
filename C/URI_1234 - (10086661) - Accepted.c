#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

#define MAX 51

int main (){
    char entrada[MAX];


    while (fgets(entrada, MAX, stdin) != NULL){
        int tamanho= strlen(entrada) - 1;
        int troca= 0; int i= 0;
        for ( ; i < tamanho; i++){
            if (entrada[i] != ' '){
                if (troca == 0){
                    entrada[i]= toupper(entrada[i]);
                    troca= 1;
                }
                else if (troca != 0){
                    entrada[i]= tolower(entrada[i]);
                    troca= 0;
                }
            }
            printf("%c", entrada[i]);
        }
        printf("\n");
    };
    return 0;
}
