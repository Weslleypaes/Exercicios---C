#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, qtd;

    printf("Qual a ordem da matriz: ");
    scanf("%d", & n);

    int mat[n][n];
    double diagP[n];

    qtd = 0;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", & mat[n][n]);



            if (mat[n][n] < 0){
                qtd = qtd + 1;
            }
        }
    }

        printf("QUANTIDADE NEGATIVOS: %d", qtd);

    return 0;
}
