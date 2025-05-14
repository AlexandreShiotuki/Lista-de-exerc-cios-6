// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Eu poderia criar as respostas e o gabarito de forma aleatória, mas desse jeito as notas sempre
    // seriam baixas, por conta de que as letras aleatórias deveriam ser as mesmas que o gabarito, 7 vezes
    // então pedi pro chatGPT me dar um array pronto de letras aleatórias pra eu não ter que escrever 70 letras uma por uma
    char respostas[6][10] = {
    {'b','c','a','d','e','b','a','e','c','d'},
    {'b','c','a','d','e','b','d','e','e','d'},
    {'c','b','d','a','e','c','a','d','b','e'},
    {'d','a','c','e','b','d','e','a','c','b'},
    {'b','e','b','d','e','b','a','e','c','d'},
    {'b','a','a','d','c','b','a','e','c','d'}
};
    char gabarito[10] = {'b','c','a','d','e','b','a','e','c','d'};
    int matricula[6] = {0,1,2,3,4,5};
    int aprovados[6];
    float aux = 0;
    
    for (int i = 0; i < 6; i++) {
        printf("\nMatrícula: %d, respostas: \n", matricula[i]);
        for (int j = 0; j < 10; j++) {
            printf("%c ", respostas[i][j]);
            if (respostas[i][j] == gabarito[j])
            aux += 1;
        }
        printf("\nNota final: %.2f \n\n", aux);
        if (aux >= 7)
        aprovados[i] = 1;
        
        aux = 0;
    }
    
    for (int i = 0; i < 6; i++) {
        if (aprovados[i] == 1)
        aux += 1;
    }
    
    printf("\nPercentual aprovado: %.2f%", (aux * 100) / 6);
    return 0;
}
