// Crie um sistema com struct para armazenar os dados de 10 produtos (nome, quantidade e preço).
// Use uma função void para calcular o valor total em estoque de todos os produtos juntos.
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[30];
    int quant;
    float preco;
} Produto;

Produto produto[10];
int numProduto = 0;

void cadastrarProduto();
void totalEstoque();
void finaliza();

int main()
{
    int opcao;
    do{
    printf("O que deseja:\n1-Cadastrar produto\n2-Ver o total de produtos em estoque\n0-Sair\n");
    scanf("%d", &opcao);
    if(opcao == 0){
        printf("Saindo...\n");
        return 1;
    }
    if(opcao == 1){
        cadastrarProduto();
    }
    if(opcao == 2){
        totalEstoque();
    }
    else{
        printf("Opcao Invalida!\n");
    }
    }while(opcao != 0);
    return 0;
}
void cadastrarProduto(){
    system("clear");
    printf("Cadastrar Produto\n\n");
    printf("Insira o nome do produto:\n");
    scanf(" %[^\n]", produto[numProduto].nome);
    printf("Insira a quantidade:\n");
    scanf("%d", &produto[numProduto].quant);
    printf("Insira o preço:\n");
    scanf("%f", &produto[numProduto].preco);
    numProduto++;
    finaliza();
}
void totalEstoque(){
    system("clear");
    printf("Estoque de produtos\n\n");
    for(int i = 0; i < numProduto;i++){
        printf("Produto %d\n", i+1);
        printf("Nome: %s\n", produto[i].nome);
        printf("Quantidade: %d\n", produto[i].quant);
        printf("Preço: %.2f\n", produto[i].preco);
    }
    finaliza();
}
void finaliza(){
    printf("Pressione ENTER para continuar...\n");
    getchar();
    getchar();
    system("clear");
}