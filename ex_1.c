#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 4

int main() {
	int mat[n][n], contar = 0;
	srand(time(NULL));
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
		mat[i][j] = rand() % 16;
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
		if (mat[i][j] > 10)
		contar += 1;
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
		printf("%d  ", mat[i][j]);	
		if (j == 3)
			printf("\n");
		}
	}
	printf("Valores maiores que 10: %d", contar);
	return 0;
}
