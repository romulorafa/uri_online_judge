#include <stdio.h>

#define peso1 3.5
#define peso2 7.5

int main()
{

    double a, b, media;

    scanf("%lf %lf", &a, &b);
    media = ((a * peso1) + (b * peso2))/(peso1 + peso2);
    printf("MEDIA = %.5f\n", media);

    return 0;
}