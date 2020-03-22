#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int t, n, c, m;
    int num_andar, i, result, qtd, maior;
    int andares[50001];

    scanf ("%d", &t);
    while (t > 0){
        scanf("%d%d%d", &n, &c, &m);
        memset(andares, 0, 4*(n+1));
        while (m > 0){
            scanf("%d", &num_andar);
            andares[num_andar]++;
            m--;
        }
        i = n;
        result = 0;
        while (i > 0){
            while ((i > 0) && (andares[i] == 0)){
                i--;
            }
            qtd = 0;
            maior = i;
            while ((i > 0) && (qtd < c)){
                qtd = qtd + andares[i];
                if (c < qtd){
                    andares[i] = qtd - c;
                }
                else{
                    i--;
                }
            }
            result = result + (2 * maior);
        }
        printf("%d\n", result);
        t--;
    }
    return 0;
}
