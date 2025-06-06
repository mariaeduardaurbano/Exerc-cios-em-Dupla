// Implemente um sistema que calcula a taxa de ocupação de 10 quartos.
// Para cada quarto, o sistema deve perguntar se está ocupado (1) ou não (0).
// Utilize for e mostre ao final a porcentagem de ocupação.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int quartos[10], status;
    float ocupados = 0;
    for(int i = 0; i < 10; i++){
        printf("O quarto %d esta ocupado?(0-Não e 1-Sim):\n",i+1);
        scanf("%d", &status);
        if(status == 1){
            ocupados++;
        }
    }
    float porcentagem = (ocupados / 10) * 100;
    printf("Taxa de ocupação: %.2f%%",porcentagem);
    return 0;
}