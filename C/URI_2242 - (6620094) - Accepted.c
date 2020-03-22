#include <stdio.h>
#include <string.h>

int main (){

    char risada[51], aux[51];
    int i, j;
    int resposta;

    j= 0; resposta= 0;
    scanf("%s", risada);
    while (!feof(stdin)){
        for (i= 0; i < strlen(risada); i++){
            if ((risada[i] == 'a') || (risada[i] == 'e') || (risada[i] == 'i') || (risada[i] == 'o') || (risada[i] == 'u')){
                aux[j]= risada[i];
                j++;
            }
        }
        i= 0; j= j-1;
        while (i <= j){
            if (aux[i] == aux[j]){
                resposta= 1;
                i++; j--;
            }
            else{
                resposta= 0;
                break;
            }
        }
        j= 0;
        if (resposta == 1){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
        scanf("%s", risada);
        resposta= 0;
    }
    return 0;
}
