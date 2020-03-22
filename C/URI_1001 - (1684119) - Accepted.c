#include <stdio.h>

int soma (int A, int B){
    int X;
    X = A+B;
    return (X);
}

int main() {
    int A, B;
    int X;
    scanf ("%d %d", &A, &B);
    X= soma (A, B);
    printf ("X = %d\n", X);
    return 0;
}