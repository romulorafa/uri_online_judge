#include <stdio.h>

#define TAM_MAX 50000
int main(){

    int num_genes, num_inversoes;
    int gene_i, gene_j;
    int num_consultas, gene_consulta;
    int genoma[TAM_MAX];
    int i, j, k, gene_aux, cont;

    cont= 0;
    scanf("%d", &num_genes);
    while (num_genes > 0){
        cont++;
        j= 0;
        for (i= 1; i <= num_genes; i++){
            genoma[j]= i;
            j++;
        }

        scanf("%d", &num_inversoes);
        k= 0;
        while (k < num_inversoes){
            scanf("%d %d", &gene_i, &gene_j);
            for (i= gene_i - 1, j= gene_j - 1; i <= j; i++, j--){
                gene_aux= genoma[i];
                genoma[i]= genoma[j];
                genoma[j]= gene_aux;
            }
            k++;
        }
        printf("Genome %d\n", cont);
        scanf ("%d", &num_consultas);
        k= 0;
        while (k < num_consultas){
            scanf("%d", &gene_consulta);
            for (i= 0; i < num_genes; i++){
                if (genoma[i] == gene_consulta){
                    printf("%d\n", i+1);
                    break;
                }
            }
            k++;
        }
        scanf("%d", &num_genes);
    }
    return 0;
}
