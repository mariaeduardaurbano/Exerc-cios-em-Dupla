#include <stdio.h>

int main() {
    float valor[10];
    int maior = 0, menor = 0;

    printf("----- Loja TechBarato -----\n");
    printf("Informe os preços de 10 produtos:\n");

    for (int i = 0; i < 10; i++) {
        printf("Produto %d: ",i + 1);
        scanf("%f", &valor[i]);
    }

    for (int i = 1; i < 10; i++) {
        if (valor[i] > maior) {
            maior = valor[i];
        }
        if (valor[i] < menor) {
            menor = valor[i];
        }
    }
    printf("Valor mais caro: %d\n", maior);
    printf("Valor mais barato: %d\n", menor);

    return 0;
}