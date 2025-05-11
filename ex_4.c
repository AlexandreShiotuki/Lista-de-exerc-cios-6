#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int mat[4][4], maior = 0, maiorI = 0, maiorJ = 0;
    
    srand(time(NULL));
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            mat[i][j] = rand() % 30;
            if (mat[i][j] > maior) {
                maior = mat[i][j];
                maiorI = i;
                maiorJ = j;
            }
            
        }
    }
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", mat[i][j]);
            if (j == 3)
            printf("\n");
        }
    }
    
    printf("Posição do maior valor é: mat[%d][%d]", maiorI, maiorJ);

    return 0;
}
