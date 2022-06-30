#include "tela.h"
#include "tela.c"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

//Função para desenhar os círculos
void circulo(int n){
    switch(n){
        case 1:
            tela_circulo(172, 172, 24, 6, transparente, branco);
            tela_circulo(172, 172, 18, 6, transparente, preto);
            break;
        case 2:
            tela_circulo(250, 172, 24, 6, transparente, branco);
            tela_circulo(250, 172, 18, 6, transparente, preto);
            break;
        case 3:
            tela_circulo(328, 172, 24, 6, transparente, branco);
            tela_circulo(328, 172, 18, 6, transparente, preto);
            break;
        case 4:
            tela_circulo(172, 250, 24, 6, transparente, branco);
            tela_circulo(172, 250, 18, 6, transparente, preto);
            break;
        case 5:
            tela_circulo(250, 250, 24, 6, transparente, branco);
            tela_circulo(250, 250, 18, 6, transparente, preto);
            break;
        case 6:
            tela_circulo(328, 250, 24, 6, transparente, branco);
            tela_circulo(328, 250, 18, 6, transparente, preto);
            break;
        case 7:
            tela_circulo(172, 328, 24, 6, transparente, branco);
            tela_circulo(172, 328, 18, 6, transparente, preto);
            break;
        case 8:
            tela_circulo(250, 328, 24, 6, transparente, branco);
            tela_circulo(250, 328, 18, 6, transparente, preto);
            break;
        case 9:
            tela_circulo(328, 328, 24, 6, transparente, branco);
            tela_circulo(328, 328, 18, 6, transparente, preto);
            break;
        default:
            break;
    }
    return;
}
void circuloV(int *O[n]){
    for(i=0 ; i<=n ; i++){
        switch(*O[i]){
            case 1:
                tela_circulo(172, 172, 24, 6, transparente, branco);
                tela_circulo(172, 172, 18, 6, transparente, preto);
                break;
            case 2:
                tela_circulo(250, 172, 24, 6, transparente, branco);
                tela_circulo(250, 172, 18, 6, transparente, preto);
                break;
            case 3:
                tela_circulo(328, 172, 24, 6, transparente, branco);
                tela_circulo(328, 172, 18, 6, transparente, preto);
                break;
            case 4:
                tela_circulo(172, 250, 24, 6, transparente, branco);
                tela_circulo(172, 250, 18, 6, transparente, preto);
                break;
            case 5:
                tela_circulo(250, 250, 24, 6, transparente, branco);
                tela_circulo(250, 250, 18, 6, transparente, preto);
                break;
            case 6:
                tela_circulo(328, 250, 24, 6, transparente, branco);
                tela_circulo(328, 250, 18, 6, transparente, preto);
                break;
            case 7:
                tela_circulo(172, 328, 24, 6, transparente, branco);
                tela_circulo(172, 328, 18, 6, transparente, preto);
                break;
            case 8:
                tela_circulo(250, 328, 24, 6, transparente, branco);
                tela_circulo(250, 328, 18, 6, transparente, preto);
                break;
            case 9:
                tela_circulo(328, 328, 24, 6, transparente, branco);
                tela_circulo(328, 328, 18, 6, transparente, preto);
                break;
            default:
                break;
        }
    }
    return;
}

//Função para desenhar as cruzes
void cruz(int n){
    switch(n){
        case 1:
            tela_texto(172, 177, 70, branco, "X");
            break;
        case 2:
            tela_texto(250, 177, 70, branco, "X");
            break;
        case 3:
            tela_texto(328, 177, 70, branco, "X");
            break;
        case 4:
            tela_texto(172, 255, 70, branco, "X");
            break;
        case 5:
            tela_texto(250, 255, 70, branco, "X");
            break;
        case 6:
            tela_texto(328, 255, 70, branco, "X");
            break;
        case 7:
            tela_texto(172, 333, 70, branco, "X");
            break;
        case 8:
            tela_texto(250, 333, 70, branco, "X");
            break;
        case 9:
            tela_texto(328, 333, 70, branco, "X");
            break;
        default:
            break;
    }
    return;
}
void cruzV(int *X[n]){
    for(i=0 ; i<=n ; i++){
        switch(*O[i]){
            case 1:
                tela_texto(172, 177, 70, branco, "X");
                break;
            case 2:
                tela_texto(250, 177, 70, branco, "X");
                break;
            case 3:
                tela_texto(328, 177, 70, branco, "X");
                break;
            case 4:
                tela_texto(172, 255, 70, branco, "X");
                break;
            case 5:
                tela_texto(250, 255, 70, branco, "X");
                break;
            case 6:
                tela_texto(328, 255, 70, branco, "X");
                break;
            case 7:
                tela_texto(172, 333, 70, branco, "X");
                break;
            case 8:
                tela_texto(250, 333, 70, branco, "X");
                break;
            case 9:
                tela_texto(328, 333, 70, branco, "X");
                break;
            default:
                break;
        }
    }
    return;
}

//Função que desenha o Tabuleiro
void tabuleiro(void){
    tela_linha(210, 140, 210, 360, 6, branco);
    tela_linha(290, 140, 290, 360, 6, branco);
    tela_linha(140, 210, 360, 210, 6, branco);
    tela_linha(140, 290, 360, 290, 6, branco);
}

//Função que ajuda a calcular o resultado
int resultado(int P1, int P2, int P3){
    if ((P1 != 0) && (P2 != 0) && (P3 != 0)){
        return true;
    }
    return false;
}

//Função que declara vitória
int vitoria(int jogador, int *placar, int *vit, int *fim){
    if (*vit == 0){
        *placar += 1;
        *vit = 1;
        *fim = 1;
    }
    if (jogador == 1){
        tela_texto(250, 100, 50, vermelho, "Jogador 1 Venceu!");
    } else if (jogador == 2){
    tela_texto(250, 100, 50, vermelho, "Jogador 2 Venceu!");
    }
    return 0;
}

//Função que desenha a interface
void UI(int *pl1, int *pl1){
    char pla1[10];
    char pla2[10];
    sprintf(pla1, "%d", pl1);
    sprintf(pla2, "%d", pl2);
    tela_texto_dir(270, 15, 20, branco, "Jogador 1:");
    tela_texto_dir(390, 15, 20, branco, pla1);
    tela_texto_dir(270, 50, 20, branco, "Jogador 2:");
    tela_texto_dir(390, 50, 20, branco, pla2);
    return;
}

//Função que escolhe aleatóriamente entre 1 e 2
int aleat(void) {
  return (rand() % 2)? 1: 2;
}

int main(){
    srand(time(0));
    tela_inicio(500, 500, "Jogo da Velha");
    //Boas vindas
    welcome();

    //Variáveis que guardam condições de jogo
    int pl1 = 0;
    int pl2 = 0;
    char tecla = '\0';

    inicio: ;
    //Goto
    int vit = 0;
    int fim = 0;
    int jogador = aleat();
    int jogada = 0;

    /*Variáveis que representam cada coordenada do tabuleiro para cada jogador (jogador_coordX_coordY)
    int XA1 = 0, OA1 = 0;
    int XB1 = 0, OB1 = 0;
    int XC1 = 0, OC1 = 0;
    int XA2 = 0, OA2 = 0;
    int XB2 = 0, OB2 = 0;
    int XC2 = 0, OC2 = 0;
    int XA3 = 0, OA3 = 0;
    int XB3 = 0, OB3 = 0;
    int XC3 = 0, OC3 = 0;
    */

    int X[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int O[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    //inicia o jogo
    while (true){

        //Desenha o tabuleiro
        tabuleiro();

        //Desenha elementos da interface
        UI(&pl1, &pl2);


        if (jogador == 1){
            tela_texto_dir(15, 15, 20, branco, "É a vez do jogador 1");
            } else {
            tela_texto_dir(15, 15, 20, branco, "É a vez do jogador 2");
        }
        tela_texto_dir(15, 469, 18, branco, "Aperte Backspace para fechar o jogo");

        if (jogada == 9 && vit == 0){
            tela_texto(250, 100, 50, vermelho, "Empate!");
        }

        //cascata de Ifs pra detectar cliques nos lugares certos e desenhar no tabuleiro nos lugares certos
        //If que detecta clique do mouse
        if (tela_rato_clicado() == true){

            //If mouse posição A1
            if (tela_rato_x() > 140 && tela_rato_x() < 201){
                if (tela_rato_y() > 140 && tela_rato_y() < 201){
                    if (XA1 == 0 && OA1 == 0 && fim == 0) {
                        if (jogador == 1){
                            XA1 = 1;
                            jogador = 2;
                            jogada++;
                        } else if (jogador == 2){
                            OA1 = 1;
                            jogador = 1;
                            jogada++;
                        }
                    }
                }
            }
            //If mouse posição B1
            if (tela_rato_x() > 219 && tela_rato_x() < 280){
                if (tela_rato_y() > 140 && tela_rato_y() < 201){
                    if (XB1 == 0 && OB1 == 0 && fim == 0){
                        if (jogador == 1){
                            XB1 = 2;
                            jogador = 2;
                            jogada++;
                        } else if (jogador == 2){
                            OB1 = 2;
                            jogador = 1;
                            jogada++;
                        }
                    }
                }
            }
            //If mouse posição C1
            if (tela_rato_x() > 297 && tela_rato_x() < 360){
                if (tela_rato_y() > 140 && tela_rato_y() < 201){
                    if (XC1 == 0 && OC1 == 0 && fim == 0){
                        if (jogador == 1){
                            XC1 = 3;
                            jogador = 2;
                            jogada++;
                        } else if (jogador == 2){
                            OC1 = 3;
                            jogador = 1;
                            jogada++;
                        }
                    }
                }
            }
            //If mouse posição A2
            if (tela_rato_x() > 140 && tela_rato_x() < 201){
                if (tela_rato_y() > 219 && tela_rato_y() < 280){
                    if (XA2 == 0 && OA2 == 0 && fim == 0){
                        if (jogador == 1){
                            XA2 = 4;
                            jogador = 2;
                            jogada++;
                        } else if (jogador == 2){
                            OA2 = 4;
                            jogador = 1;
                            jogada++;
                        }
                    }
                }
            }
            //If mouse posição B2
            if (tela_rato_x() > 219 && tela_rato_x() < 280){
                if (tela_rato_y() > 219 && tela_rato_y() < 280){
                    if (XB2 == 0 && OB2 == 0 && fim == 0){
                        if (jogador == 1){
                            XB2 = 5;
                            jogador = 2;
                            jogada++;
                        } else if (jogador == 2){
                            OB2 = 5;
                            jogador = 1;
                            jogada++;
                        }
                    }
                }
            }
            //If mouse posição C2
            if (tela_rato_x() > 297 && tela_rato_x() < 360){
                if (tela_rato_y() > 219 && tela_rato_y() < 280){
                    if (XC2 == 0 && OC2 == 0 && fim == 0){
                        if (jogador == 1){
                            XC2 = 6;
                            jogador = 2;
                            jogada++;
                        } else if (jogador == 2){
                            OC2 = 6;
                            jogador = 1;
                            jogada++;
                        }
                    }
                }
            }
            //If mouse posição A3
            if (tela_rato_x() > 140 && tela_rato_x() < 201){
                if (tela_rato_y() > 297 && tela_rato_y() < 360){
                    if (XA3 == 0 && OA3 == 0 && fim == 0 ){
                        if (jogador == 1){
                            XA3 = 7;
                            jogador = 2;
                            jogada++;
                        } else if (jogador == 2){
                            OA3 = 7;
                            jogador = 1;
                            jogada++;
                        }
                    }
                }
            }
            //If mouse posição B3
            if (tela_rato_x() > 219 && tela_rato_x() < 280){
                if (tela_rato_y() > 297 && tela_rato_y() < 360){
                    if (XB3 == 0 && OB3 == 0 && fim == 0 ){
                        if (jogador == 1){
                            XB3 = 8;
                            jogador = 2;
                            jogada++;
                        } else if (jogador == 2){
                            OB3 = 8;
                            jogador = 1;
                            jogada++;
                        }
                    }
                }
            }
            //If mouse posição C3
            if (tela_rato_x() > 297 && tela_rato_x() < 360){
                if (tela_rato_y() > 297 && tela_rato_y() < 360){
                    if (XC3 == 0 && OC3 == 0 && fim == 0 ){
                        if (jogador == 1){
                            XC3 = 9;
                            jogador = 2;
                            jogada++;
                        } else if (jogador == 2){
                            OC3 = 9;
                            jogador = 1;
                            jogada++;
                        }
                    }
                }
            }
        }

        /*Desenha os círculos e cruzes pra cada uma das posições conforme os valores nas variáveis de coordenada
        circulo(OA1);
        circulo(OB1);
        circulo(OC1);
        circulo(OA2);
        circulo(OB2);
        circulo(OC2);
        circulo(OA3);
        circulo(OB3);
        circulo(OC3);

        cruz(XA1);
        cruz(XB1);
        cruz(XC1);
        cruz(XA2);
        cruz(XB2);
        cruz(XC2);
        cruz(XA3);
        cruz(XB3);
        cruz(XC3);
        */
        circuloV(&X[10]);
        cruzV   (&O[10]);
        /*Calcula vitória Cruz
        if (resultado(XA1, XA2, XA3) == true){vitoria(1, &pl1, &vit, &fim);}
        if (resultado(XB1, XB2, XB3) == true){vitoria(1, &pl1, &vit, &fim);}
        if (resultado(XC1, XC2, XC3) == true){vitoria(1, &pl1, &vit, &fim);}
        if (resultado(XA1, XB1, XC1) == true){vitoria(1, &pl1, &vit, &fim);}
        if (resultado(XA2, XB2, XC2) == true){vitoria(1, &pl1, &vit, &fim);}
        if (resultado(XA3, XB3, XC3) == true){vitoria(1, &pl1, &vit, &fim);}
        if (resultado(XA1, XB2, XC3) == true){vitoria(1, &pl1, &vit, &fim);}
        if (resultado(XC1, XB2, XA3) == true){vitoria(1, &pl1, &vit, &fim);}

        //Calcula vitória Círculo
        if (resultado(OA1, OA2, OA3) == true){vitoria(2, &pl2, &vit, &fim);}
        if (resultado(OB1, OB2, OB3) == true){vitoria(2, &pl2, &vit, &fim);}
        if (resultado(OC1, OC2, OC3) == true){vitoria(2, &pl2, &vit, &fim);}
        if (resultado(OA1, OB1, OC1) == true){vitoria(2, &pl2, &vit, &fim);}
        if (resultado(OA2, OB2, OC2) == true){vitoria(2, &pl2, &vit, &fim);}
        if (resultado(OA3, OB3, OC3) == true){vitoria(2, &pl2, &vit, &fim);}
        if (resultado(OA1, OB2, OC3) == true){vitoria(2, &pl2, &vit, &fim);}
        if (resultado(OC1, OB2, OA3) == true){vitoria(2, &pl2, &vit, &fim);}
        */
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
}
