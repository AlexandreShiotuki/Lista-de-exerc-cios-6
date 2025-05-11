#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 7

int main() {
    int mat[n][n];
    
    srand(time(NULL));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = rand() % 20 + 1;
            
            if (i < j) 
            mat[i][j] = 0;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%7d", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
