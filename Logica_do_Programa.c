#include <stdio.h>
#include <stdlib.h>
#include "Camada_de_dados.h"

int movimentos_possiveis(ESTADO *e, COORDENADA c){
    int x1 = obter_ultima_jogada(e).linha;
    int y1 = obter_ultima_jogada(e).coluna;
    int x2 = c.linha;
    int y2 = c.coluna;
    if(abs(x1-x2)<=1 && abs(y1-y2)<=1) return 1;
    else return 0;
}

int jogar(ESTADO *estado, COORDENADA c) {
    printf("jogar %d %d\n", c.linha, c.coluna);
    if(movimentos_possiveis(estado,c)){
	    estado->tab[ultima_jogada.linha][ultima_jogada.coluna] = PRETA;
	    estado->tab[c.linha][c.coluna] = BRANCA;
	    estado->ultima_jogada.linha = c.linha;
	    estado->ultima_jogada.coluna = c.coluna;
	    estado->jogador_atual = obter_jogador_atual(estado);
	    estado->jogadas[estado -> obter_numero_de_jogadas (estado)] = c;
        return 1;
        }
    else return 0;
}
