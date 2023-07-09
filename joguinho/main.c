#include <stdio.h>
#include <stdlib.h>
#include <time.h> //	Apenas para usar com semente para números aleatórios
#include "Funcoes.h"
#include "CoresAnsi.h"

int calculaNumeroAleatorio(void);

//	Joguinho de adivinhar número

int palpite, acerto = 0;
const int NUM_MAX = 20; //	Limite máximo em que o computador pode gerar um numero aleatório

int main(void){

	boasVindas();
	instrucoes();
	acerto = calculaNumeroAleatorio();
	
	while(palpite != acerto){
		pedePalpite();
		scanf("%d", &palpite);
		printf(NC_RESET "\nSeu palpite foi:" NC_VERMELHO " %d\n" NC_RESET, palpite);

		if(palpite > NUM_MAX){	//	Verifica se o jogador insere um valor MAIOR que o permitido
			printf(NC_VERMELHO "Opa, parece que você digitou um número maior que o limite permitido.\n");
			printf("Por favor, tente novamente\n" NC_RESET);
		}else if(palpite <= 0){	//	Verifica se o jogador insere um valor MENOR que o permitido
			printf(NC_VERMELHO "Opa, parece que você digitou um número igual ou menor que 0.\n");
			printf("Por favor, tente novamente\n" NC_RESET);
		}else if(palpite == acerto){
			mostraRostinhoFeliz();
			printf(NC_AMARELO "\n\nVOCÊ ACERTOU!, PARABÉNS. " NC_RESET);
			printf(NC_AMARELO "O NÚMERO ERA " NC_ROXO "'%d'\n" NC_RESET, acerto);
			break;
		}else if(palpite > acerto){
			printf("Ops, você errou, mas vou te dar uma dica: Você deu um número" NC_VERMELHO " ALTO\n");
		}else if(palpite < acerto){
			printf("Ops, você errou, mas vou te dar uma dica: Você deu um número" NC_VERMELHO "BAIXO\n");
		}
	}

	return 0;
}

//	Funcao que gera o tal do numero aleatorio
int calculaNumeroAleatorio(void){
	srand(time(NULL));
	int numeroSecreto = rand() % NUM_MAX + 1;
	return numeroSecreto;
}