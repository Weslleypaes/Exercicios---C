#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    double preco, dinheiroRec, troco;
    int qtd;

    printf("Qual o valor do produto ? ");
    scanf("%lf", & preco);

    printf("Quantidade comprada: ");
    scanf("%d", & qtd);

    printf("Dinheiro recebido: ");
    scanf("%lf", & dinheiroRec);

    troco = dinheiroRec - (preco * qtd);

    printf("TROCO = %.2lf", troco);

    return 0;
}
