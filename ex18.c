// Ex 18
#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main() {
    typedef struct {
        char nome[30];
        char telefone[18];
        int idade;
    } cliente;
    
    cliente cli[TAM];
    
    for (int i = 0; i < TAM; i++) {
        printf("\nDigite o nome, o telefone e a idade do cliente %d\n", i + 1);
        scanf("%29s %17s %d", &cli[i].nome, &cli[i].telefone, &cli[i].idade);
    };
    
    for (int i = 0; i < TAM; i++) {
        printf("Nome: %s\tTelefone: %s\tIdade: %d\n", cli[i].nome, cli[i].telefone, cli[i].idade);    
    }

    return 0;
}
