#include <stdio.h>
#include <string.h>

#define tam_instancia 8
#define tam_sequencia 300001
#define indice 0


int main (){
    char instancia[tam_instancia];
    char sequencia [tam_sequencia];
    char *substring;
    int i, existe;

    i= 0;
    scanf("%s", instancia);
    i++;
    while (strlen(instancia) > 0 && strlen(instancia) < tam_instancia){
        if (strlen(instancia) == 1 && instancia[indice] == '0'){
            return 0;
        }
        else{
            scanf("%s", sequencia);
            substring= strstr(sequencia,instancia);
            if (substring == NULL){
                existe= 0;
            }
            else{
                existe= 1;
            }
            if (i == 1){
                printf("Instancia %d\n", i);
            }
            else{
                printf("\nInstancia %d\n", i);
            }
            if (existe == 1){
                printf("verdadeira\n");
            }
            else{
                printf("falsa\n");
            }
            scanf("%s", instancia);
            i++;
        }
    }
}