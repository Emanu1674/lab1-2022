#include "tela.h"
//#include "tela.c"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Função que desenha a interface
void UI(int pl1, int pl2, int jog){
    char pla1[10];
    char pla2[10];
    sprintf(pla1, "%d", pl1);
    sprintf(pla2, "%d", pl2);
    tela_texto_dir(270, 15, 20, branco, "Jogador 1:");
    tela_texto_dir(390, 15, 20, branco, pla1);
    tela_texto_dir(270, 50, 20, branco, "Jogador 2:");
    tela_texto_dir(390, 50, 20, branco, pla2);
    tela_texto_dir(15, 469, 18, branco, "Aperte Backspace para fechar o jogo");

    if (jog == 1){
        tela_texto_dir(15, 15, 20, branco, "É a vez do jogador 1");
    } else {
        tela_texto_dir(15, 15, 20, branco, "É a vez do jogador 2");
    }
    return;
}
//Função que escolhe aleatóriamente entre 1 e 2
int aleat(void) {
  return (rand() % 2)? 1: 2;
}
//Função de tela de boas vindas
void welcome(void){
    int C = 1;
    while (true){
        tela_circulo(tela_rato_x(), tela_rato_y(), 5, 2, azul, branco);
        tela_retangulo(30, 30, 470, 470, 5, C, transparente);
        tela_texto(250, 100, 70, branco, "BEM VINDO!");
        tela_texto(250, 160, 20, branco, "Ao Jogo da Velha");
        tela_texto(250, 260, 18, tela_cria_cor(.4, 1, .42), "Pressione qualquer tecla para iniciar...");
        tela_atualiza();
        if (tela_tecla() != '\0'){
            break;
        }
        if (C > 9){
            C = 1;
        }
        C++;
    }
}
//Função que desenha o Tabuleiro
void tabuleiro(void){
    tela_linha(210, 140, 210, 360, 6, branco);
    tela_linha(290, 140, 290, 360, 6, branco);
    tela_linha(140, 210, 360, 210, 6, branco);
    tela_linha(140, 290, 360, 290, 6, branco);
}
//Função que escolhe qual jogador começa cada partida
int selectjoga(int *prim, int jog){
    if(*prim == 0){
        *prim = 1;
        return aleat();
    } else if (jog == 1){
        return 2;
    } else {
        return 1;
    }
}

//Função para verificar jogadas
int detect(){

}

int main(){
    srand(time(0));
    tela_inicio(500, 500, "Jogo da Velha");

    //Boas vindas
    welcome();

    //Variáveis que guardam condições de jogo
    int pl1 = 0;
    int pl2 = 0;
    int primeira_partida = 0;
    char tecla = '\0';

    //goto
    inicio: ;
    int jogador = selectjoga(&primeira_partida, jogador);

    //inicia o jogo
    while (true){
        //Desenha o tabuleiro
        tabuleiro();

        //Desenha elementos da interface
        UI(pl1, pl2, jogador);

        //Desenha o cursor do mouse
        tela_circulo(tela_rato_x(), tela_rato_y(), 5, 2, azul, branco);
        tela_atualiza();

        tecla = tela_tecla();
        if (tecla == '\b'){
            break;
        }
        if (tecla == 'r'){
            goto inicio;
        }
    }
    return 0;
}
