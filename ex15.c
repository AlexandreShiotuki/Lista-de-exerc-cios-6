#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int B[100][200], soma = 0;
    srand(time(NULL));
    
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 200; j++)
            B[i][j] = rand() % 20;
    }
    
    for (int i = 39; i < 40; i++) {
        for (int j = 0; j < 100; j++)
            soma += B[j][i];
    }
    
    for (int i = 29; i < 30; i++) {
        for (int j = 0; j < 200; j++)
            soma += B[i][j];
    }
    
    printf("%d ", soma);
    
    return 0;
}
