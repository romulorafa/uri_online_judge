#include <stdio.h>

#define TAM 10000

int main(){
    int n;
    int loop[TAM];
    int i, cont;

    scanf("%d", &n);
    while (n != 0){
        cont = 0;
        for (i = 0; i < n; i++){
            scanf("%d", &loop[i]);
        }
        if (n == 2){
            if (loop[0] != loop[1]){
                cont = 2;
            }
        }
        else{
            for (i = 1; i < n-1; i++){
                if (((loop[i]>loop[i-1]) && (loop[i]>loop[i+1])) || ((loop[i]<loop[i-1]) && (loop[i]<loop[i+1]))){
                    cont++;
                }
            }
            if (((loop[n-1]>loop[n-2]) && (loop[n-1]>loop[0])) || ((loop[n-1]<loop[n-2]) && (loop[n-1]<loop[0]))){
                cont++;
            }
            if (((loop[0]>loop[1]) && (loop[0]>loop[n-1])) || ((loop[0]<loop[1]) && (loop[0]<loop[n-1]))){
                cont++;
            }
        }
        printf ("%d\n", cont);
        scanf("%d", &n);
    }
    return 0;
}
