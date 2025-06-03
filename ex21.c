// Ex 21
#include <stdio.h>
#define LINHAS 6
#define COLUNAS 3

int main() {
    float matriz[LINHAS][COLUNAS] = {
        {7.5, 8.5, 7.8},
        {8.4, 9.2, 6.8},
        {9.1, 10.0, 9.5},
        {4.0, 5.2, 4.6},
        {5.7, 3.4, 4.3},
        {4.3, 6.0, 5.8} 
    };
    float media = 0, mediaGeral = 0;
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            media += matriz[i][j];
            mediaGeral += matriz[i][j];
        }
        printf("Nota do aluno %d: %.2f\n", i + 1, media / COLUNAS);
        media = 0;
    }
    
    printf("\nMédia geral da turma: %.2f", mediaGeral / (LINHAS * COLUNAS));
    
    return 0;
}
