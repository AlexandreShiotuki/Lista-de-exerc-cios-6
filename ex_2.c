// Online C compiler to run C program online
#include <stdio.h>
#define n 5
int main() {
    int mat[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
            mat[i][j] = 0;
            } else {
            mat[i][j] = 1;
            } 
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
        printf("%d ", mat[i][j]);
            if (j == 4) {
            printf("\n");
            }
        }
    }
    
    return 0;
}
