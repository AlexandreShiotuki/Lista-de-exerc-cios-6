// Ex 19
#include <stdio.h>

int main() {
    float mat[3][6] = {
    {1.23, 4.56, 7.89, 0.12, 3.45, 6.78},
    {9.01, 2.34, 5.67, 8.90, 1.11, 4.44},
    {7.77, 8.88, 9.99, 6.66, 5.55, 0.00}
  };
    float soma, media;

    printf("\n\n\n------------ Exercício A ------------\n\n\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++)
            printf("%.2f ", mat[i][j]);
        printf("\n");    
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            soma += mat[i][j];
            j += 1;
        }
    }
    printf("\nSoma: %.2f", soma);
    soma = 0;

    printf("\n\n\n------------ Exercício B ------------\n\n\n");
    
    for (int i = 0; i < 3; i++) {
        for (int j = 1; j < 4; j++) {
            media += mat[i][j];
            j += 1;
            soma++;
        }
    }
    media = media / soma;
    printf("Média aritmética: %.5f", media);

    //            ------------ Exercício C ------------
    
    for (int i = 0; i < 3; i++) {
        soma = 0;
        for (int j = 0; j < 2; j++) {
            soma += mat[i][j];
        }
        mat[i][5] = soma;
    }
    
    printf("\n\n\n------------ Exercício D ------------\n\n\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++)
            printf("%.2f ", mat[i][j]);
        printf("\n");    
    }
    
    return 0;
}
