#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor = 0, conta= 0, desconto, sub = 0;
    int opcao, quantComida = 0, quantBebida = 0, quantSobremessa = 0, quant, opcao1;
    do{
    printf("Menu Principal\nO que deseja:\n1-Prato Principal\n2-Bebida\n3-Sobremessa\n0-Sair\n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
        system("clear");
        printf("Opções:\n1-Arroz com Fritas  R$ 20,00\n2-Frango a parmegiana  R$22,00\n3-Peixe Grelhado  R$24,00\n0-Voltar\n");
        scanf("%d", &opcao1);
        if(opcao1 == 0){
            break;
        }
        else if(opcao1 > 3 || opcao1 < 0){
            printf("Opcao Invalida! Tente Novamente.");
        } 
        else{
            printf("Digite a quantidade desejada:\n");
            scanf("%d", &quant);
            switch(opcao1){
                case 1:
                valor = quant * 20;
                break;
                
                case 2:
                valor = quant * 22;
                break;
                
                case 3:
                valor = quant * 24;
                break;
                
                quantComida += quant;
            }
            sub += valor;
        }
        break;
        
        case 2:
        system("clear");
        printf("Opções:\n1-Refrigerante Cola  R$ 9,00\n2-Suco de Laranja  R$6,00\n3-Cerveja 250ml  R$4,00\n0-Voltar\n");
        scanf("%d", &opcao1);
        if(opcao1 == 0){
            break;
        }
        else if(opcao1 > 3 || opcao1 < 0){
            printf("Opcao Invalida! Tente Novamente.");
        } 
        else{
            printf("Digite a quantidade desejada:\n");
            scanf("%d", &quant);
            switch(opcao1){
                case 1:
                valor = quant * 9;
                break;
                
                case 2:
                valor = quant * 6;
                break;
                
                case 3:
                valor = quant * 4;
                break;
                
                quantBebida += quant;
            }
            sub += valor;
        }
        break;
        
        case 3:
        system("clear");
        printf("Opções:\n1-Pudim  R$ 9,00\n2-Fatia de Bolo  R$6,00\n3-Fatia de Torta  R$7,00\n0-Voltar\n");
        scanf("%d", &opcao1);
        if(opcao1 == 0){
            break;
        }
        else if(opcao1 > 3 || opcao1 < 0){
            printf("Opcao Invalida! Tente Novamente.");
        } 
        else{
            printf("Digite a quantidade desejada:\n");
            scanf("%d", &quant);
            switch(opcao1){
                case 1:
                valor = quant * 9;
                break;
                
                case 2:
                valor = quant * 6;
                break;
                
                case 3:
                valor = quant * 7;
                break;
                
                quantSobremessa += quant;
            }
            sub += valor;
        }
        break;
        
        case 0:
        printf("Saindo...\n");
        break;
        
        default:
        printf("Opcao Invalida! Tente Novamente");
        break;
    }
    }while(opcao != 0);
    
    if(quantComida >= 3){
        if(quantBebida > 0 && quantSobremessa > 0){
            conta = sub * 0.85;
        } else{
            conta = sub * 0.9;
        }
    }
    else{
        conta = sub;
    }
    printf("Valor final:  R$%.2f",conta );
    return 0;
}