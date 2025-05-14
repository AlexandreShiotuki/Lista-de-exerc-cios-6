#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int A[4][4], B[4][4], sum = 0;
    srand(time(NULL));
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            A[i][j] = rand() % 100;
            B[i][j] = rand() % 100;        
            sum += (A[i][j] + B[i][j]);
        }
    }
    
    printf("Matriz A: \n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d, ", A[i][j]);
        }
        printf("\n");
    }
    
    printf("Matriz B: \n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d, ", B[i][j]);
        }
        printf("\n");
    }
    
    printf("Somando: ");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("(%d + %d)", A[i][j], B[i][j]);
            if (!(i == 3 && j == 3)) printf(" + ");
    }
}  
    printf("\nSoma: %d", sum);
    return 0;
}
