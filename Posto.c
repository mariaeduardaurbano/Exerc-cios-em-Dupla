#include <stdio.h>

int main() {
	int opcao;
	float quant = 0, valor = 0, preco = 0;
		printf("--- Posto de Gasolina FUELMAX ---\n");
		printf("1 - Gasolina   R$ 6,00\n");
		printf("2 - Etanol   R$ 4,00\n");
		printf("3 - Diesel   R$ 3,50\n");
		printf("0 - Sair\n");
		scanf("%d", &opcao);
		if (opcao == 0) {
			printf("Saindo...");
			return 1;
		}
		else {
		    printf("Quantos litros deseja:\n");
		    scanf("%f", &quant);
			switch(opcao) {
			case 1:
			preco = 6;
			break;
			case 2:
			preco = 4;
			break;
			case 3:
			preco = 3.5;
			break;
			}
		}
		valor = preco * quant;
		printf("Total a ser pago :  R$%.2f", valor);
		return 0;
}
