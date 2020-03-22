#include <stdio.h>
#include <string.h>

#define tam 5

int main(){
    char numero[tam];
    int n, m;
    int i, j, k;
    int repete, cont;

    scanf("%d", &n);
    while (!feof(stdin)){
        scanf("%d", &m);
        cont= 0;
        for (i=n; i <= m; i++){
            repete= 0;
            sprintf(numero, "%d", i);
            for (j=0; j < (strlen(numero)-1); j++){
                for (k=j+1; k < (strlen(numero)); k++){
                    if (numero[j] == numero[k]){
                        repete= 1;
                        break;
                        }
                    }
                }
                if (repete == 0){
                    cont++;
                }
            }
        printf("%d\n", cont);
        cont= 0;
        scanf("%d", &n);
    }
    return 0;
}