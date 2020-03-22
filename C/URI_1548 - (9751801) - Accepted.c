#include <stdio.h>

int main (){
    int n, m;
    int fila[1000], filaordenada[1000];
    int cont;
    int i, j, k, aux;

    scanf("%d", &n);
    for (k=0; k < n; k++){ // executa a qtd de casos de testes
        scanf("%d", &m);
        j=0;
        while (j < m){ // carregar os vetores com as notas
            scanf("%d", &fila[j]);
            filaordenada[j]= fila[j];
            j++;
        }
        for (i=0; i < m-1; i++){    // ordenar o vetor filarordenada descrecente de nota
            for (j=i+1; j < m; j++){
                if (filaordenada[i] < filaordenada[j]){
                    aux= filaordenada[i];
                    filaordenada[i]= filaordenada[j];
                    filaordenada[j]= aux;
                }
            }
        }
        cont= 0;
        for (i=0; i < m; i++){ //verifica fila inicial com fila ordenada por nota
            if (fila[i] == filaordenada[i]){
                cont++;
            }
        }
        printf("%d\n", cont); //imprime quantos não mudaram de lugar
    }
    return 0;
}