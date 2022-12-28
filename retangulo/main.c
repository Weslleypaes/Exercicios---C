#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double base, altura, perimetro, area, calcDiagonal, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", & base);

    printf("Altura do retangulo: ");
    scanf("%lf", & altura);

    area = base * altura;

    printf("AREA = %.4lf\n", area);

    perimetro = (2 * base) + (2 * altura);

    printf("PERIMETRO = %.4lf\n", perimetro);

    diagonal = sqrt((altura * altura) + (base * base));

    printf("DIAGONAL = %.4lf\n", diagonal);

    return 0;
}
