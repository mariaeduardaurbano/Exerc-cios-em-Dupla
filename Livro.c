// Crie um sistema de cadastro de 8 livros com nome e ano de publicação usando struct.
// Exiba os livros publicados antes do ano 2000.
// Utilize for e if.
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[30];
    int ano;
} Livro;

int main(){
    Livro livro[8];
    for(int i = 0; i < 8; i++){
        printf("Insira o nome do Livro:\n");
        scanf(" %[^\n]", livro[i].nome);
        printf("Insira o ano de publicação:\n");
        scanf("%d", &livro[i].ano);
        system("clear");
    }
    printf("Livros publicados antes dos anos 2000:\n");
    for(int i = 0; i < 8; i++){
        if(livro[i].ano < 2000){
            printf("Livro %d\nNome %s\nAno %d\n\n", i+1, livro[i].nome, livro[i].ano);
        }
    }
    return 0;
}