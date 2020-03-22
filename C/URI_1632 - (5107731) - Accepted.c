#include <stdio.h>
#include <string.h>

int main() {
    int testes, i, j, cont, tam;
    char senha[16];

    scanf ("%d", &testes);
    if (testes > 0){
        i=1;
        while (i <= testes){
            scanf ("%s\n", senha);
            tam= strlen(senha);
            j=0; cont=1;
            while (j < tam) {
                if (senha[j]== 'A' || senha[j]== 'a' || senha[j]== 'E' || senha[j]== 'e'){
                	cont= cont*3;    
                }
                else {
                	if (senha[j]== 'I' || senha[j]== 'i' || senha[j]== 'O' || senha[j]== 'o' || senha[j]== 'S' || senha[j]== 's'){
                		cont= cont*3;
                	}
                	else {
                		cont= cont*2;
                	}
                }
            	j++;
            }
            printf("%d\n", cont);
            i++;
        }
    }
    return 0;
}
