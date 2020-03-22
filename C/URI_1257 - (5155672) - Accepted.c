#include <stdio.h>
#include <string.h>

#define letras 51
#define tam 4
#define min 1
#define max 100

int main (){
    int qtd_testes, qtd_linhas;
    char sequencia[letras];
    int soma; //calc_hash[tam];
    int i, j, k;

    i= 0; soma= 0;
    scanf("%d", &qtd_testes);
    while (i < qtd_testes){
        j= 0;
        scanf("%d", &qtd_linhas);
        while (j < qtd_linhas){
            scanf("%s", sequencia);
            for (k= 0; k < strlen(sequencia); k++){
                soma= soma + (sequencia[k] - 65) + j + k;
            }
            j++;
        }
        printf("%d\n", soma);
        i++;
        soma= 0;
    }
    return 0;
}