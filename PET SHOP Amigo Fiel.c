#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char tipo[20];
    char nome[20];
    int idade;
}Animal;

int numAnimais = 0;
Animal animais[10];

void finalizaFuncao();
void cadastroAnimais();
void filtroIdade();

int main() {
    int opcao;
    
    do{
        printf("--- PET SHOP Amigo Fiel ---\n");
        printf("1 - Cadastrar Animais\n");
        printf("2- Filtrar Animais\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
        
        switch(opcao){
            case 1:
                cadastroAnimais();
                break;
                 
            case 2:
                filtroIdade();
                break;
            
            case 0:
                printf("Saindo...");
                break;
            
            default:
                printf("Opção inválida, tente novamente.");
        }
        
    }while (opcao != 0);
    
    return 0;
}

void finalizaFuncao(){
    printf("\nPressione Enter para continuar.\n");
    getchar();
    getchar();
    system("clear");
}

void cadastroAnimais() {
    system("clear");
    printf("--- Novo Cadastro de Animal ---\n");
    printf("Nome do Animal: ");
    scanf("%s", animais[numAnimais].nome);
    printf("Informe que tipo de animal é: ");
    scanf("%s", animais[numAnimais].tipo);
    printf("Informe a idade do animal: ");
    scanf("%d", &animais[numAnimais].idade);
    numAnimais++;
    finalizaFuncao();
}

void filtroIdade() {
    system("clear");
    for (int i = 0; i < numAnimais; i++) {
        if (animais[i].idade == 5) {
            printf("--- Animais com 5 anos de idade ---\n");
            printf("Nome: %s\n", animais[i].nome);
            printf("Tipo do Animal: %s\n", animais[i].tipo);
            printf("Idade: %d\n", animais[i].idade);
        }
}

    finalizaFuncao();
}
