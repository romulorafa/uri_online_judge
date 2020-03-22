#include <stdio.h>

#define tam 2000
#define visitou 1

int intersecoes, ruas;
int vertices[tam];
int adj[tam][tam];

void dfs (int i){
    int j;

    if (vertices[i] == 1){
        return;
    }
    else{
        vertices[i] = visitou;
        for (j = 0; j < intersecoes; j++){
            if ((vertices[j] == 0) && (adj[i][j] == 1)){
            dfs(j);
            }
        }
    }
}

int main (){
    int origem, destino, p;
    int saida, i, j;

    scanf ("%d", &intersecoes);
    scanf ("%d", &ruas);
    saida = 0;

    while ((intersecoes != 0) && (ruas != 0)){
        for (i = 0; i < intersecoes; i++){
            vertices[i] = 0;
            for (j = 0; j < intersecoes; j++){
                adj[i][j] = 0;
            }
        }

        for (i = 0; i < ruas; i++){
            scanf ("%d", &origem);
            scanf ("%d", &destino);
            scanf ("%d", &p);
            adj[origem-1][destino-1] = 1;
            if (p == 2){
                adj[destino-1][origem-1] = 1;
            }
        }

        dfs(0);
        saida = 1;

        for (i = 0; i < intersecoes; i++){
            if (vertices[i] == 0){
                saida = 0;
            }
        }

        if (saida == 1){
            for (i = 0; i < intersecoes; i++){
                vertices[i] = 0;
                for (j = i+1; j < intersecoes; j++){
                    if ((adj[i][j] == 0) && (adj[j][i] == 1)){
                        adj[i][j] = 1; adj[j][i] = 0;
                    }
                    else{
                        if ((adj[i][j] == 1) && (adj[j][i] == 0)){
                            adj[i][j] = 0; adj[j][i] = 1;
                        }
                    }
                }
            }
        }

        dfs(0);

        for (i = 0; i < intersecoes; i++){
            if (vertices[i] == 0){
                saida = 0;
            }
        }

        printf("%d\n", saida);
        scanf ("%d %d", &intersecoes, &ruas);
        saida = 0;
    }
    return 0;
}
