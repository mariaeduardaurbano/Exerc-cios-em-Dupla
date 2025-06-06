// Implemente uma struct chamada Produto com nome, código e preço. 
//Crie um array com 5 produtos.
//Exiba os produtos com preço superior a R$ 10.00 utilizando for e if.
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[30];
    int codigo;
    float preco;
} Produto;

int main(){
    Produto produto[5];
    for(int i = 0; i < 5; i++){
        printf("Insira o nome do Produto:\n");
        scanf(" %[^\n]", produto[i].nome);
        printf("Insira o código do Produto:\n");
        scanf("%d", &produto[i].codigo);
        printf("Insira o preço:\n");
        scanf("%f", &produto[i].preco);
        system("clear");
    }
    printf("Produtos acimas de de R$10,00:\n");
    for(int i = 0; i < 5; i++){
        if(produto[i].preco > 10){
            printf("Produto %d\nNome %s\nCódigo %d\nPreço R$%.2f\n\n\n", i+1, produto[i].nome, produto[i].codigo, produto[i].preco);
        }
    }
    return 0;
}