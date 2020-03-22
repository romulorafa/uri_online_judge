#include <stdio.h>
#include <string.h>

#define ALFABETO 26
#define MAX_STRING 51

int main(int argc, char const *argv[])
{
    char vString[MAX_STRING]; int i;
    while (gets(vString)!= NULL){
        if (vString == '\0'){
            printf("\n");
        }
        if (strlen(vString) == 1){
            printf("%c:%c\n", vString[0], vString[0]);
        }
        else{
            char vAlfabeto[ALFABETO] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};
            for (i = 0; i < strlen(vString); i++){
                int letra = vString[i] - 97;
                if (vAlfabeto[letra] == 0){
                    vAlfabeto[letra]++;
                }
            }
            i = 0; int virgula = 0; int novaLinha = 0;
            while (i < ALFABETO){
                char letraInicial, letraFinal;
                if (vAlfabeto[i] == 1){
                    letraInicial = i + 97;
                    letraFinal = i + 97;
                    int j = i+1;
                    while ((vAlfabeto[j] == 1) && (j < ALFABETO)){
                        letraFinal = j + 97;
                        j++;
                    }
                    i = j+1;
                    if (virgula == 0){
                        printf("%c:%c", letraInicial, letraFinal);
                        if (i < ALFABETO){
                            virgula = 1;
                        }
                        else{
                            virgula = 0;
                        }
                    }
                    else{
                        printf(", ");
                        printf("%c:%c", letraInicial, letraFinal);
                        if (i < ALFABETO){
                            virgula = 1;
                        }
                        else{
                            virgula = 0;
                        }
                    }
                }
                else{
                    i++;
                }                
            }
            printf("\n");
        }
    }
    return 0;
}
