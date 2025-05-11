#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a[4][4], b[4][4], c[4][4];
    
    srand(time(NULL));
    
    // Preenche as matrizes a e b
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            a[i][j] = rand() % 101;
            b[i][j] = rand() % 101;
        }
    }
    
    // Imprime a matriz a
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    //Imprime a matriz b
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%3d", b[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    //Preenche a matriz c
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] > b[i][j])
            c[i][j] = a[i][j];
            else 
            c[i][j] = b[i][j];
        }
    }
    
    printf("\n");
    
    //Imprime a matriz c
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%3d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
