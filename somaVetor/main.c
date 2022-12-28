#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, qtd;
    double soma, media;

    printf("Quantos numeros você vai digitar: ");
    scanf("%d", & n);

    double vet[n];

    soma  = 0;
    qtd = 0;
    media = 0;

    for(i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%lf", & vet[i]);

        soma = soma + vet[i];
        qtd = qtd + 1;
    }

    printf("VALORES = ");

    for(i = 0; i < n; i++){
        printf("%.1lf  ", vet[i]);
    }

    media = soma / qtd;

    printf("\nSOMA = %.2lf\n", soma);
    printf("MEDIA = %.2lf", media);
    return 0;
}
