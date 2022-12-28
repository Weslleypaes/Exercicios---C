#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x, y;

    printf("Digite dois numeros: \n");
    scanf("%d", & x);
    scanf("%d", & y);

    if(x > y)
    {
        printf("DECRESCENTE!\n");
    }
    else if (y > x)
    {
        printf("CRESCENTE!\n");
    }

    while( x != y)
    {
        printf("Digite outros dois numeros: \n");
        scanf("%d", & x);
        scanf("%d", & y);

        if(x > y)
        {
            printf("DECRESCENTE!\n");
        }
        else if (y > x)
        {
            printf("CRESCENTE!\n");
        }

    }


    return 0;
}
