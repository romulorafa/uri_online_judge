#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int n, l, c;
    int caracteres, linhas, paginas, i;
    char palavra[71];

    scanf ("%d %d %d", &n, &l, &c);
    while (!feof(stdin)){
        caracteres= linhas= paginas= 0;
        for (i=0; i < n; i++){
            scanf ("%s", &palavra);
            caracteres= caracteres + strlen(palavra);

            if (caracteres == c){ // verifica se o tamanho da palavra eh igual ao max de caracteres por linha
                linhas++; caracteres= 0; // linha preenchida, zera caracteres
            }
            else if (caracteres > c){ // verifica se o tamanho da palavra eh maior que o max de char por linha
                linhas++; caracteres= strlen(palavra) + 1; //linha preenchida, caracteres da palavra + 1 char (espaço)
            }
            else if (i < n-1){
                caracteres++;
                if (caracteres == c){ // verifica se o tamanho da palavra eh igual ao max de caracteres por linha
                    linhas++; caracteres= 0; // linha preenchida, zera caracteres
                }
            }
            if (linhas == l){ // verifica se atingiu o limite max de linhas por pagina
                paginas++; linhas= 0; // incrementa pag, zera qtd de linhas
            }
        }
        if (caracteres > 0 || linhas > 0){
            paginas++;
        }
        printf("%d\n", paginas);
        scanf ("%d %d %d", &n, &l, &c);
    }
    return 0;
}
