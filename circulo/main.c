#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

    double area, pi, raio;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", & raio);

    pi = 3.14159;

    area = pi * pow(raio, 2);

    printf("AREA = %.3lf", area);

    return 0;
}
