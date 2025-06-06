#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int ID;
    char nome[30];
    int pontos;
    int ingressos;
} Cliente;

int numClientes = 3;
Cliente clientes [10];

void cadastrarCliente();
void buscarCliente();
void finalizaFuncao();

int main (){
    
    int opcao;
    
    do{
        printf("---- CINE PONTO ----\n");
        printf("1 - Cadastrar Clientes\n");
        printf("2 - Quantidade de pontos por cliente\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
        
        switch(opcao){
            case 1:
                cadastrarCliente();
                break;
            
            case 2:
                buscarCliente();
                break;
            
            case 0:
                printf("Saindo...");
                break;
            
            default:
                printf("Opção inválida =( tente novamente!\n");
        }
        
    }while (opcao != 0);
}

void finalizaFuncao(){
    printf("\nPressione Enter para continuar.\n");
    getchar();
    getchar();
    system("clear");
}

void cadastrarCliente(){
    system("clear");
    printf("--- Novo Cadastro de Cliente ---\n");
    printf("ID do cliente: ");
    scanf("%d", &clientes[numClientes].ID);
    printf("Nome do cliente:");
    scanf(" %[^\n]", clientes[numClientes].nome);
    printf("Quantidade de ingressos: ");
    scanf("%d", &clientes[numClientes].ingressos);
    clientes[numClientes].pontos = clientes[numClientes].ingressos *10;
    numClientes++;
    finalizaFuncao();
}

void buscarCliente(){
    system("clear");
    int id, pontos;
    printf("--- BUSCAR CLIENTE ---\n");
    printf("Informe o ID do Cliente: ");
    scanf("%d", &id);
    for (int i = 0; i < numClientes; i++) {
        if (clientes[i].ID == id){
        printf("Id do cliente: %d\n", clientes[i].ID);
        printf("Nome do Cliente: %s\n", clientes[i].nome);
        printf("Quantidade de ingressos:%d\n", clientes[i].ingressos);
        printf("\n--- QUANTIDADE DE PONTOS ---\n");
        pontos = clientes[i].pontos;
        printf("O cliente %d possui %d pontos.\n", id, pontos);
        printf("--------------------\n");
        } 
    } 
    
    finalizaFuncao();
}
