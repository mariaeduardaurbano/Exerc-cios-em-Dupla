// Implemente um sistema com for para registrar as notas de atendimento de 7 clientes (de 0 a 10).
// Ao final, calcule a média das notas. 
// Use if para exibir se a média foi boa (>=8), razoável (>=5) ou ruim.
#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota[7], media = 0.0, soma = 0.0;
    for(int i = 0; i < 7; i++){
        system("clear");
        do{
        printf("Caro Cliente, por favor dê uma nota ao nosso estabelecimento(0-10)\n");
        scanf("%f", &nota[i]);
        soma += nota[i];
        } while(nota[i] < 0 || nota[i] > 10);
        
    }
    media = soma / 7;
    printf("A média de notas é: %.2f", media);
    if (media >= 8) {
        printf("Avaliação: Boa\n");
    } else if (media >= 5) {
        printf("Avaliação: Razoável\n");
    } else {
        printf("Avaliação: Ruim\n");
    }
    return 0;
}
