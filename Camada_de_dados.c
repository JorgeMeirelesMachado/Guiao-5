#include <stdio.h>
#include <stdlib.h>

ESTADO *inicializar_estado() {
    ESTADO *p = (ESTADO *) malloc(sizeof(ESTADO));
    int x,y;
    for (y=0; y<8; y++) {
        for (x=0; x<8; x++) {
            if (x==4 && y==3) p -> tab[x][y] = BRANCA;
            else p -> tab[x][y] = VAZIO;
        }
    }
    p -> ultima_jogada.linha = 4;
    p -> ultima_jogada.coluna = 3;
    p -> num_jogadas = 0;
    p -> jogador_atual = 1;
    return p;
}

int obter_jogador_atual(ESTADO *estado) {
    return estado->jogador_atual;
}

int obter_numero_de_jogadas(ESTADO *estado) {
return estado -> num_jogadas;
}

CASA obter_estado_casa(ESTADO *e, COORDENADA c){
return e -> tab[c.coluna][c.linha];
}

/**

CASA obter_casa(ESTADO *e,int x,int y){
return e->tab[x][y];
}

COORDENADA obter_ultima_jogada(ESTADO *e){
return e->ultima_jogada;
}

*/
