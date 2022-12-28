#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n1, n2, n3;

    printf("Insira o primeiro numero: ");
    scanf("%d", & n1);

    printf("Insira o segundo numero: ");
    scanf("%d", & n2);

    printf("Insira o terceiro numero: ");
    scanf("%d", & n3);

    if(n1 < n2 && n1 < n3)
    {
        printf("MENOR = %d", n1);
    }
    else if (n2 < n1 & n2 < n3)
    {
        printf("MENOR = %d", n2);
    }
    else if (n3 < n1 && n3 < n2)
    {
        printf("MENOR = %d", n3);
    }
    else
    {
        printf("MENOR = %d", n1 );
    }

    return 0;
}
