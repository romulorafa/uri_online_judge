#include <stdio.h>

#define pesoA 2
#define pesoB 3
#define pesoC 5

int main(){

    double a, b, c, media;

    scanf("%lf %lf %lf", &a, &b, &c);
    media = ((a * pesoA) + (b * pesoB) +(c * pesoC)) / (pesoA + pesoB + pesoC);
    printf("MEDIA = %.1f\n", media);

    return 0;
}