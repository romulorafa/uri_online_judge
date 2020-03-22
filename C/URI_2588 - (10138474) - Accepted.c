#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1001
#define TAM 26

int main(){
    char entrada[MAX];
    int alfabeto[TAM];

    while (scanf("%s", &entrada) != EOF){
        memset(alfabeto, 0, sizeof(alfabeto));
        if (strlen(entrada) <= 1){
            printf("0\n");
        }
        else{
            int i= 0; int impar= 0;
            while (i < strlen(entrada)){
                int j = entrada[i] - 97;
                alfabeto[j]++; i++;
            }
            i= 0;
            while (i < TAM){
                if (alfabeto[i] % 2 == 1){
                    impar++;
                }
                i++;
            }
            if (impar <= 1){
                printf("%d\n", 0);
            }
            else {
                printf("%d\n", (impar - 1));
            }
        }
    }
    return 0;
}