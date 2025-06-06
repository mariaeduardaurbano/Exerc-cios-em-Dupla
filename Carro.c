// Crie um sistema para registrar até 5 carros para revisão.
//Use struct com marca, ano e quilometragem.
//Liste os carros com mais de 100.000 km rodados.
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char marca[30];
    int ano;
    float Km;
} Carro;

Carro carro[5];

int numCarro = 0;
void cadastrarCarro();
void listarCarro();
void finaliza();

int main(){
    int opcao;
    do{
        printf("O que deseja\n1-Cadastrar Carro\n2-Listar Carros\n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                cadastrarCarro();
                break;
            case 2:
                listarCarro();
                break;
            default:
                printf("Erro!Tente Novamente.\n");
                finaliza();
                break;
        }
    }while(opcao != 0);
    return 0;
}
void finaliza(){
    printf("Pressione ENTER para continuar...\n");
    getchar();
    getchar();
    system("clear");
}
void cadastrarCarro(){
    //Use struct com marca, ano e quilometragem.
    printf("Cadastro de Carros\n");
    printf("Insira o marca do carro:\n");
    scanf(" %[^\n]", carro[numCarro].marca);
    printf("Insira o ano do carro:\n");
    scanf("%d", &carro[numCarro].ano);
    printf("Insira a quilometragem do carro:\n");
    scanf("%f", &carro[numCarro].Km);
    numCarro++;
    finaliza();
}
void listarCarro(){
    //Liste os carros com mais de 100.000 km rodados.
    system("clear");
    printf("Lista de Carros com menos de 100.000 km's\n");
    for(int i = 0; i < numCarro; i++){
        if(carro[i].Km < 100000){
            printf("Carro %d\n", i+1);
            printf("Marca: %s\nAno: %d\nQuilometragem %.3f\n", carro[i].marca, carro[i].ano, carro[i].Km);
        }
    }
}