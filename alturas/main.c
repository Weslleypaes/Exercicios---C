#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{
    int N, i, qtd, mIdade;
    double soma, altMedia, porcentagem;


    printf("Quantas pessoas serao digitadas: ");
    scanf("%d", & N);

    char nomes[N][50];
    int idades[N];
    double alturas[N];

    for(i = 0; i < N; i++){
        printf("Dados da %da pessoa: \n", i + 1);

        printf("Nome: ");
        scanf("%s", & nomes[i]);

        printf("Idade: ");
        scanf("%d", & idades[i]);

        printf("Altura: ");
        scanf("%lf", & alturas[i]);
    }

    for(i = 0; i < N; i++){
        soma = soma + alturas[i];
        qtd = i + 1;
    }

    altMedia = soma / qtd;

    printf("Altura media: %.2lf\n", altMedia);

    mIdade = 0;
    for(i = 0; i < N; i++){
        if(idades[i] < 16){
            mIdade = mIdade + 1;
        }

    }

    porcentagem = (mIdade * 100) / N;

    printf("Pessoas com menos de 16 anos: %.1lf%\n", porcentagem);
    for(i = 0; i < N; i++){
        if(idades[i] < 16){
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}
