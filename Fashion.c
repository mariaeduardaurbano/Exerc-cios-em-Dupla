// Implemente um sistema que, com base em um código digitado pelo usuário (1 - camisa, 2 - calça, 3 - casaco),
// exiba a mensagem com o nome da peça e o preço fixo.
// Use switch-case.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao;
    do{
    printf("O que deseja:\n1 - camisa\n2 - calça\n3 - casaco\n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
        printf("Camisa -> Preço Fixo: R$20,00\n");
        break;
        case 2:
        printf("Calça -> Preço Fixo: R$20,00\n");
        break;
        case 3:
        printf("Casaco -> Preço Fixo: R$20,00\n");
        break;
        default:
        printf("Erro! Tente Novamente\nPressione ENTER para continuar...");
        getchar();
        getchar();
        system("clear");
        break;
    }
    }while(opcao > 3 || opcao < 1);
    return 0;
}