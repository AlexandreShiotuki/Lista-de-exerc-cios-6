#include <stdio.h>
#define NUM_ALUNOS 100
#define TAM_NOME 50

int main() {
    char nomesAlunos[NUM_ALUNOS][TAM_NOME];
    int matriculasAlunos[NUM_ALUNOS];
    int tiposCursoAlunos[NUM_ALUNOS];   
    int numerosCursoAlunos[NUM_ALUNOS];
    float mediasGeraisAlunos[NUM_ALUNOS];
    int i, cursoFiltro, indiceMelhorAluno = -1, encontrouAlunoTipo1 = 0,encontrouMelhorAluno = 0, melhorMedia = -1.0; 

    if (NUM_ALUNOS <= 0) {
        printf("O número de alunos definido (%d) é inválido para este programa.\n", NUM_ALUNOS);
        return 1; 
    }
    
    printf("Programa de Cadastro de Alunos (Máximo de %d alunos)\n", NUM_ALUNOS);
    printf("-------------------------------------------------------\n");

    printf("\n--- Cadastro de Alunos ---\n");
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);

        printf("Nome: ");
        scanf("%49s", nomesAlunos[i]);

        printf("Número de Matrícula: ");
        scanf("%d", &matriculasAlunos[i]);

        printf("Tipo de Curso (0 ou 1): ");
        scanf("%d", &tiposCursoAlunos[i]);

        while (tiposCursoAlunos[i] != 0 && tiposCursoAlunos[i] != 1) {
            printf("Tipo de curso inválido. Digite 0 ou 1: ");
            scanf("%d", &tiposCursoAlunos[i]);
        }

        printf("Número do Curso: ");
        scanf("%d", &numerosCursoAlunos[i]);

        printf("Média Geral: ");
        scanf("%f", &mediasGeraisAlunos[i]);
    }

    printf("\n\n--- (a) Todas as Informações Armazenadas ---\n");
    if (NUM_ALUNOS == 0) { 
        printf("Nenhum aluno cadastrado.\n");
    } else {
        for (i = 0; i < NUM_ALUNOS; i++) {
            printf("\nAluno %d:\n", i + 1);
            printf("  Nome: %s\n", nomesAlunos[i]);
            printf("  Matrícula: %d\n", matriculasAlunos[i]);
            printf("  Tipo de Curso: %d\n", tiposCursoAlunos[i]);
            printf("  Número do Curso: %d\n", numerosCursoAlunos[i]);
            printf("  Média Geral: %.2f\n", mediasGeraisAlunos[i]);
        }
    }

    printf("\n\n--- (b) Matrículas dos Alunos do Tipo de Curso 1 ---\n");
    for (i = 0; i < NUM_ALUNOS; i++) {
        if (tiposCursoAlunos[i] == 1) {
            printf("Matrícula: %d\n", matriculasAlunos[i]);
            encontrouAlunoTipo1 = 1; 
        }
    }
    if (!encontrouAlunoTipo1 && NUM_ALUNOS > 0) {
        printf("Nenhum aluno encontrado vinculado ao tipo de curso 1.\n");
    } 
    
    printf("\n\n--- (c) Aluno com Melhor Média (Tipo Curso 1 e Curso Específico) ---\n");
    
    if (NUM_ALUNOS > 0) {
        printf("Digite o número do curso para filtrar: ");
        scanf("%d", &cursoFiltro);

        for (i = 0; i < NUM_ALUNOS; i++) {
            if (tiposCursoAlunos[i] == 1 && numerosCursoAlunos[i] == cursoFiltro) {
                if (mediasGeraisAlunos[i] > melhorMedia) {
                    melhorMedia = mediasGeraisAlunos[i];
                    indiceMelhorAluno = i;
                    encontrouMelhorAluno = 1; 
                }
            }
        }

        if (encontrouMelhorAluno) { 
            printf("\nAluno com a melhor média (Tipo Curso 1, Curso %d):\n", cursoFiltro);
            printf("  Nome: %s\n", nomesAlunos[indiceMelhorAluno]);
            printf("  Matrícula: %d\n", matriculasAlunos[indiceMelhorAluno]);
            printf("  Média Geral: %.2f\n", mediasGeraisAlunos[indiceMelhorAluno]);
        } else {
            printf("\nNenhum aluno encontrado com os critérios especificados (Tipo Curso 1 e Curso %d).\n", cursoFiltro);
        }
    } else {
        printf("Nenhum aluno cadastrado para realizar esta busca.\n");
    }

    return 0; 
}
