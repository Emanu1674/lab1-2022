#include <stdio.h>

void color(int color){
switch(color){
        case 0:
            printf("\033[0m"); //Padrão
            break;
        case 1:
            printf("\033[0;30m"); //Preto
            break;
        case 2:
            printf("\033[0;31m"); //Vermelho
            break;
        case 3:
            printf("\033[0;32m"); //Verde
            break;
        case 4:
            printf("\033[0;33m"); //Amarelo
            break;
        case 5:
            printf("\033[0;34m"); //Azul
            break;
        case 6:
            printf("\033[0;35m"); //Roxo
            break;
        case 7:
            printf("\033[0;36m"); //Ciano
            break;
        case 8:
            printf("\033[0;37m"); //Branco
            break;
        default:
            printf("\033[0m"); //Padrão
            break;
    }
}

void cprintf(int color, const char *s){
    switch(color){
        case 0:
            printf("\033[0m"); //Padrão
            break;
        case 1:
            printf("\033[0;30m"); //Preto
            break;
        case 2:
            printf("\033[0;31m"); //Vermelho
            break;
        case 3:
            printf("\033[0;32m"); //Verde
            break;
        case 4:
            printf("\033[0;33m"); //Amarelo
            break;
        case 5:
            printf("\033[0;34m"); //Azul
            break;
        case 6:
            printf("\033[0;35m"); //Roxo
            break;
        case 7:
            printf("\033[0;36m"); //Ciano
            break;
        case 8:
            printf("\033[0;37m"); //Branco
            break;
        default:
            printf("\033[0m"); //Padrão
            break;
    }
    printf(s);
    printf("\033[0m"); //Padrão
}

void cls(){
    #ifdef WINDOWS
        system("cls");
    #else
        // Assume POSIX
        system ("clear");
    #endif
}

int conta_arquivo(){
            char nome[8];

            cprintf(5, "    Contador de caracteres\n\n");
            cprintf(4, "Qual o nome do arquivo que deseja abrir?");
            printf("\n\nOpção: ");

            color(7);
            fgets(nome, 8, stdin);
            fgets(nome, 8, stdin);
            color(0);
    FILE *arq;
    arq = fopen(nome, "r");

    if (arq == NULL) {
        color(2);
        printf("Não foi possível abrir o arquivo '%s'", nome);
        color(0);
        return 1;
    }

    int conta = 0;
    for (;;) {
        char c;
            if (fscanf(arq, "%c", &c) != 1){
                break;
            }
            conta++;
        }
        fclose(arq);
        return conta;
}

int main(){
    int O;
    cprintf(4, "Escolha o que deseja fazer: \n\n");
    printf("1    ");
    cprintf(5, "Contar caracteres\n");
    printf("2    ");
    cprintf(5, "Contar linhas\n");
    printf("\n\nOpção: ");

    color(7);
    scanf("%d", &O);
    color(0);

    switch(O){
        default:
            color(2);
            printf("A opção selecionada não existe.");
            color(0);
            return 1;
            break;
        case 1:
            cls();
            conta_arquivo();
    }
}
