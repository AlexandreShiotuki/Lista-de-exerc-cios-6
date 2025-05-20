#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int mat[2][3];
    int transposta[3][2];
    srand(time(NULL));
    
    // Preenche a matriz 2 x 3
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            mat[i][j] = rand() % 30;
    }
    
    // Imprime a matriz transposta
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", mat[i][j]);
        printf("\n");    
    }
    
    // Transfora a matriz A na transposta
    // K percorre as colunas da matriz A enquanto preenche as linhas (coluna 0)
    // da transposta. Quando termina, j++ e agora vamos pra segunda coluna da
    // transposta, ao mesmo tempo que vamos para a próx linha da matriz A
    
    for (int j = 0; j < 2; j++) {
        for (int k = 0; k < 3; k++)
            transposta[k][j] = mat[j][k];
        printf("\n");
    }
           
    // Imprime a matriz transposta       
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++)
            printf("%d ", transposta[i][j]);
        printf("\n");    
    }
    
    return 0;
}
