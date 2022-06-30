#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <strings.h>
#include <windows.h>
#include <unistd.h>

using namespace std;

// Função que facilita o gerenciamento de som
void beep(void) {
    PlaySound(NULL, 0, 0);
    PlaySound(TEXT("./beeploopL.wav"), nullptr, SND_ASYNC);
}

// Função que emula efeito de máquina de escrever (requer C++ para funcionar)
    void slowPrint(unsigned long speed, const char *s) {

        int i = 0;
        while(s[i]!=0) {
            cout << s[i++];
            cout.flush();
            Sleep(speed);
        }
    }

// Função para terminar a execução do programa
    int Termination(void) {
        slowPrint(24, "INDENTIFICATION NOT RECOGNIZED BY SYSTEM\n--CONNECTION TERMINATED--");
        exit(0);
    }

// Função que informa que o comando "help logon" não está disponível
    int helpNot(void) {
        slowPrint(24, "HELP NOT AVAILABLE\n\n\n");
        return 0;
    }

// Função para listar os "Jogos" presentes no programa
    int gList(char input[12]) {
        slowPrint(24, "'GAMES' REFER TO MODELS, SIMULATIONS, AND GAMES\nWHICH HAVE TACTICAL AND STRATEGIC APPLICATIONS.\n\n\n");
        fgets(input, 64, stdin);
        PlaySound(TEXT("./beep.wav"), nullptr, SND_ASYNC);
        printf("\n");
        Sleep(2048);

        if (strcasecmp(input, "list games\n") == 0) {
        
        slowPrint(24, "FALKEN'S MAZE\n");
        Sleep(1024);
        slowPrint(24, "BLACK JACK\n");
        Sleep(920);
        slowPrint(24, "GIN RUMMY\n");
        Sleep(900);
        slowPrint(24, "HEARTS\n");
        Sleep(720);
        slowPrint(24, "BRIDGE\n");
        Sleep(720);
        slowPrint(24, "CHECKERS\n");
        Sleep(800);
        slowPrint(24, "CHESS\n");
        Sleep(640);
        slowPrint(24, "POKER\n");
        Sleep(640);
        slowPrint(24, "FIGHTER COMBAT\n");
        Sleep(1024);
        slowPrint(24, "GUERRILLA ENGAGEMENT\n");
        Sleep(1280);
        slowPrint(25, "DESERT WARFARE\n");
        Sleep(1024);
        slowPrint(25, "THEATERWIDE TACTICAL WARFARE\n");
        Sleep(1800);
        slowPrint(26, "THEATERWIDE BIOTOXIC AND CHEMICAL WARFARE");
        Sleep(2040);
            printf("\n\n");
        slowPrint(32, "GLOBAL THERMONUCLEAR WAR\n\n");

        fgets(input, 64, stdin);
        PlaySound(TEXT("./beep.wav"), nullptr, SND_ASYNC);
        printf("\n\n");
    Sleep(2048);
        }
        else {
            Termination();
        }
    return 0;
    }

// Programa Principal
    int main() {

    setlocale(LC_ALL, "Portuguese");

        char input[12];

        printf("\033[0;36m");
        system("cls");

        // Tela de Login

            slowPrint(26, "                                                                                                    \n");
            slowPrint(26, "                                                                                                    \n");
            START:
            slowPrint(24, "LOGON: ");
                fgets(input, 64, stdin);
                PlaySound(TEXT("./beep.wav"), nullptr, SND_ASYNC);
                printf("\n");
                Sleep(2048);

                    // Código de reconhecimento de senhas ou comandos

                    if (strcmp(input, "Joshua\n") == 0) {goto LOGON;}
                    if (strcasecmp(input, "help logon\n") == 0) {helpNot(); goto START;}
                    if (strcasecmp(input, "help games\n") == 0) {gList(input);}
                        else {Termination();}

    LOGON:
    system("cls");
    Sleep(1024);
        return 0;     
    }