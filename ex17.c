// Ex 17
#include <stdio.h>
#include <stdlib.h>

int main() {
    typedef struct {
        char nome[30];
        int numeroMatricula;
        int tipoDeCurso;
        int numeroDoCurso;
        float media;
    } alunos;
    
    alunos als[3];
    
    for (int i = 0; i < 3; i++) {
        printf("\nDigite o nome, número da matrícula, tipo de curso, número do curso e a média do aluno %d:\n", 1 + i);
        scanf("%s %d %d %d %f", als[i].nome, &als[i].numeroMatricula, &als[i].tipoDeCurso, &als[i].numeroDoCurso, &als[i].media);
    }
    
    for (int i = 0; i < 3; i++) {
        printf("\nNome: %s \nNúmero da matrícula: %d \nTipo de curso: %d \nNúmero do curso: %d \nMédia: %.2f \n\n", als[i].nome, als[i].numeroMatricula, als[i].tipoDeCurso, als[i].numeroDoCurso, als[i].media);
    }

    return 0;
}
