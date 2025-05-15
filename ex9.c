#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char respostas[5][10];
    char gabarito[10];
    srand(time(NULL));
    
    for (int i = 0; i < 10; i++)
        gabarito[i] = 'a' + (rand() % 4);
        
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++)
            respostas[i][j] = 'a' + rand() % 4;
    }   
    
    int resultado[5], aux = 0;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            if (respostas[i][j] == gabarito[j])
            aux += 1;
        }
        resultado[i] = aux;
        aux = 0;
    }
    
    printf("\nRespostas: \n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++)
            printf("%c, ", respostas[i][j]);
            
        printf("\n");    
    }
    
    printf("\nGabarito: ");
    for (int i = 0; i < 10; i++) {
        printf("%c, ", gabarito[i]);  
    }
    
    printf("\n");  
    
    for (int i = 0; i < 5; i++)
        printf("%d \n", resultado[i]);

    return 0;
}
