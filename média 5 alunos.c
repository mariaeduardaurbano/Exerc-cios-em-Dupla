#include <stdio.h>
#include <stdlib.h>

int main() {
    float notas[5][4];
    float media;

    printf("---- LÍNGUA VIVA - Escola de Idiomas ---- \n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("Nota da prova %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("--- Resultados Finais ---\n");
    for (int i = 0; i < 5; i++) {
        media = 0;
        for (int j = 0; j < 4; j++) {
            media += notas[i][j];
        }
        
        media /= 4;
        
        printf("A média do aluno %d é: %.2f ", i + 1, media);
        if (media >= 6) {
            printf("Aprovado! =)\n");
        } else {
            printf("Reprovado!=(\n");
        }
    }

    return 0;
}