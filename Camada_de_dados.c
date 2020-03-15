#include <stdio.h>
#include <stdlib.h>

ESTADO *inicializar_estado() {
    ESTADO *e= (ESTADO *) malloc(sizeof(ESTADO));
    int x,y;
    for (y=0; y<8; y++) {
        for (x=0; x<8; x++) {
            if (x==4 && y==3) p -> tab[x][y] = BRANCA;
            else p -> tab[x][y] = VAZIO;
        }
    }
    e -> ultima_jogada.linha = 4;
    e -> ultima_jogada.coluna = 3;
    e -> num_jogadas = 0;
    e -> jogador_atual = 1;
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
