#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int cartela[5][5], existe[100] = {0};
    srand(time(NULL));

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int num = 0;
            do {
                num = rand() % 100;          
            } while (existe[num]);

            existe[num] = 1;
            cartela[i][j] = num;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
           printf("%5d ", cartela[i][j]);
        }
        printf("\n");
    }

    return 0;
}
