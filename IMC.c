#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[30];
    int idade;
    int IMC;
}Aluno;

int numAlunos = 0;
Aluno alunos[10];

void cadastroAluno();
void finalizaFuncao();
void calculoImc();

int main() {
    int opcao;
    
    do{
        printf("--- Academia Corpo em Movimento ---\n");
        printf("1 - Fazer Cadastro do Aluno\n");
        printf("2 - Calcular IMC do aluno\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
        
        switch(opcao){
            case 1:
                 cadastroAluno();
                 break;
                 
            case 2:
                calculoImc();
                break;
            
            case 0:
                printf("Saindo...");
                break;
            
            default:
                printf("Opção inválida, tente novamente.");
        }
        
    } while (opcao != 0);
}


void finalizaFuncao(){
    printf("\nPressione Enter para continuar.\n");
    getchar();
    getchar();
    system("clear");
}

void cadastroAluno(){
    system("clear");
    printf("--- Novo cadastro de Aluno ---\n");
    printf("Nome do Aluno: ");
    scanf(" %[^\n]", alunos[numAlunos].nome);
    printf("Idade: ");
    scanf("%d", &alunos[numAlunos].idade);
    printf("IMC: ");
    scanf("%d", &alunos[numAlunos].IMC);
    numAlunos++;
    finalizaFuncao();
}

void calculoImc(){
    int IMC;
    system("clear");
    printf("--- Calculo de IMC ---\n");
    printf("Informe o IMC do Aluno: ");
    scanf("%d", &IMC);
    if(IMC > 30){
        printf("O aluno está obeso.");
    }
    if(IMC > 25 &&  IMC < 30){
        printf("O aluno esta sobrepreso.");
    }
    else{
        printf("O aluno esta saúdavel.");
    }
    finalizaFuncao();
}