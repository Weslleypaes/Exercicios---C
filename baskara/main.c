#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    double a, b, c, x1, x2, delt;

    printf("Coeficiente A: ");
    scanf("%lf", & a);

    printf("Coeficiente B: ");
    scanf("%lf", & b);

    printf("Coeficiente C: ");
    scanf("%lf", & c);

    delt = 0;

    delt = pow(b , 2) - 4 * a * c;

    if( delt < 0){
        printf("A equação não possui raízes reais!");
    } else {
        x1 = (-b + sqrt(delt))/ (2*a);
        x2 = (-b - sqrt(delt))/ (2*a);

        printf("X1 = %.4lf\n", x1);
        printf("X1 = %.4lf", x2);
    }

    return 0;
}
