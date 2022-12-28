#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M, i, j, somaElemento;

    printf("Qual a quantidade de linhas da matriz: ");
    scanf("%d", & N);

    printf("Qual a quantidade de colunas da matriz: ");
    scanf("%d", & M);

    int sum[N][M];
    int somaLinhas[N];

    somaElemento = 0;
    for(i = 0; i < N; i++){
        printf("Digite os elementos da %da. linha: \n", i + 1);

        for(j = 0; j < M; j++){
            scanf("%d\n", & sum[i][j]);
        }
    }

    for( i = 0; i < N; i++){
        somaLinhas[i] = 0;
        for(j = 0; j < M; j++){
            somaLinhas[i] = somaLinhas[i] + sum[i][j];
        }
    }

    printf("VETOR GERADO: \n");

    for(i = 0; i < N; i++){
        printf("%.1d\n" , somaLinhas[i]);
    }


    return 0;
}
