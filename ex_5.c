#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int mat[5][5], x = 12, linhaI, linhaJ, i = 0, j = 0, existe = 0;
    srand(time(NULL));
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++)
            mat[i][j] = rand() % 40;
    }
    
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                if (mat[i][j] == x) {
                    linhaI = i;
                    linhaJ = j;
                    printf("Localização: mat[%d][%d] \n", linhaI, linhaJ);
                    existe = 1;
                    i = 5;
                    j = 5;
                } 
            }
    }
    
    if (existe == 0) 
    printf("Não encontrado \n");
    
  
  for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", mat[i][j]);
            if (j == 4)
            printf("\n");
        }
    }

    return 0;
}
