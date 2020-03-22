#include <stdio.h>
#include <string.h>

#define MAXTXT 10001
#define OP0 0
#define OP1 1

int main (){

    int num_tst, num_opr;
    char palavra[MAXTXT], aux_palavra[MAXTXT];
    int cod_opr, qtd, tot_vogais, tot_consoantes, troca_vogais, troca_consoantes;
    int consoantes[MAXTXT], vogais[MAXTXT];
    int i, j, indice;

    scanf("%d", &num_tst);
    i= 1;
    while (i <= num_tst){
        scanf("%s", palavra);
        tot_vogais= 0; tot_consoantes= 0;
        j= 0;
        while (j < strlen(palavra)){
            if ((palavra[j] == 'a') || (palavra[j] == 'e') || (palavra[j] == 'i') || (palavra[j] == 'o') || (palavra[j] == 'u')){
                vogais[tot_vogais]= j;
                tot_vogais++;
            }
            else{
                consoantes[tot_consoantes]= j;
                tot_consoantes++;
            }
            j++;
        }
        scanf("%d", &num_opr);
        troca_vogais= 0; troca_consoantes= 0;
        printf("Caso #%d:\n", i);
        while (num_opr){
            scanf("%d", &cod_opr);
            if (cod_opr == OP0){
                scanf("%d", &qtd);
                troca_vogais= troca_vogais + qtd;
            }
            else {
                if (cod_opr == OP1){
                    scanf("%d", &qtd);
                    troca_consoantes= troca_consoantes + qtd;
                }
                else{
                    if (troca_vogais > 0){
                        strcpy(aux_palavra, palavra);
                        for (j= 0; j < tot_vogais; j++){
                            indice= (j + troca_vogais) % (tot_vogais);
                            palavra[vogais[indice]]= aux_palavra[vogais[j]];
                        }
                    }
                    if (troca_consoantes > 0){
                        strcpy(aux_palavra, palavra);
                        for (j= 0; j < tot_consoantes; j++){
                            indice= (j + troca_consoantes) % (tot_consoantes);
                            palavra[consoantes[indice]]= aux_palavra[consoantes[j]];
                        }
                    }
                    printf("%s\n", palavra);
                    troca_vogais= 0; troca_consoantes= 0;
                }
            }
            num_opr--;
        }
        i++;
    }
    return 0;
}
