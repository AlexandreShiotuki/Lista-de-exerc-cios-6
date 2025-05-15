#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int linhasA = 0, colunasA = 0, linhasB = 0, colunasB = 0, aux = 0, i = 0, j = 0, k = 0;
    srand(time(NULL));
    
    printf("Defina a quantidade de linhas da matriz A:\n");
    scanf("%d", &linhasA);
    printf("\nDefina a quantidade de colunas da matriz A:\n");
    scanf("%d", &colunasA);
    int A[linhasA][colunasA];
    
    printf("\nDefina a quantidade de linhas da matriz B:\n");
    scanf("%d", &linhasB);
    printf("\nDefina a quantidade de colunas da matriz B:\n");
    scanf("%d", &colunasB);
    int B[linhasB][colunasB];
    
    printf("\n");
    
    // Preenche a matriz A e B
    for (i = 0; i < linhasA; i++) {
        for (j = 0; j < colunasA; j++)
            A[i][j] = rand() % 6 + 1;
    }
    
    for (i = 0; i < linhasB; i++) {
        for (j = 0; j < colunasB; j++)
            B[i][j] = rand() % 4 + 1;
    }
    
    // Mostrar a matriz A
    printf("Matriz A: \n");
    for (i = 0; i < linhasA; i++) {
        for (j = 0; j < colunasA; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
    
    // Mostrar a matriz B
    printf("Matriz B: \n");
    for (i = 0; i < linhasB; i++) {
        for (j = 0; j < colunasB; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }
    
    // A[m][n] x B[n][p] = C[m][p]
    int R[linhasA][colunasB];
    
    // Verifica se a multiplicação é possível
    if (colunasA == linhasB) {
        for (i = 0; i < linhasA; i++) {
            for (j = 0; j < colunasB; j++) {
                R[i][j] = 0;
                for (k = 0; k < colunasA; k++) {
                    R[i][j] += A[i][k] * B[k][j];
        }
    }
}

    } else {
        printf("Não é possível realizar a multiplicação, o número de colunas\nda matriz A é diferente do número de linhas da matriz B");
    }
    
    printf("\n");
    
    printf("Matriz AxB (R): \n");
    for (i = 0; i < linhasA; i++) {
            for (j = 0; j < colunasB; j++) {
                printf("%d ", R[i][j]);
            }
            printf("\n");
    }
    return 0;
}
