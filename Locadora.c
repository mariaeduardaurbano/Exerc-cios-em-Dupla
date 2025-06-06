// Implemente um sistema com do-while que pergunte quantos filmes o cliente deseja alugar.
// O sistema só permite entre 1 e 5 filmes.
// Se for um número fora dessa faixa, repita a pergunta.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int quant;
    do{
        system("clear");
        printf("Insira quantos filmes deseja alugar(1-5):\n");
        scanf("%d", &quant);
    }while(quant < 1 || quant > 5);
    printf("Parabens! Você conseguiu alugar seus filmes");
    return 0;
}