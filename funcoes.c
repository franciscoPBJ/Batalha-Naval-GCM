#include "funcoes.h"

void preencherTabuleiro(char *tabuleiro) {
	int i,j;
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			tabuleiro[i*TAM+j] = '0';
		}
	}
}




