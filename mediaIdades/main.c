#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int qtd;
    double media, somaIdades, idade;

    printf("Digite as idades: \n");

    qtd = 0;
    somaIdades = 0;
    media = 0;

    while ( idade >= 0 )
    {
        scanf("%lf", & idade);

        if(idade > 0)
        {
            somaIdades = somaIdades + idade;
            qtd = qtd + 1;
        }
    }

    if(qtd == 0)
    {
        printf("IMPOSSIVEL CALCULAR!");
    }
    else
    {
        media = somaIdades / qtd;
        printf("MEDIA = %.2lf", media );
    }

    return 0;
}
