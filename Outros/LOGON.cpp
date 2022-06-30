#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <strings.h>
#include <windows.h>
#include <unistd.h>

using namespace std;

void slowPrint(unsigned long speed, const char *s) {

    int i = 0;
    while(s[i]!=0) {
        cout << s[i++];
        cout.flush();
        Sleep(speed);
    }
}

void LOGON();

int main() {

setlocale(LC_ALL, "Portuguese");

    char input[12];

    printf("\033[0;36m");
    system("cls");

        slowPrint(12, "                                                                                                    \n");
        slowPrint(12, "                                                                                                    \n");
        START:
        slowPrint(24, "LOGON: ");
            fgets(input, 64, stdin);
            printf("\n");
            Sleep(2048);

    //            printf("%s\n", input);
                if (strcasecmp(input, "Joshua\n") == 0) {
                    LOGON();

                }
                    else if (strcasecmp(input, "help logon\n") == 0) {

                        slowPrint(24, "HELP NOT AVAILABLE\n\n\n");
                        goto START;
                    
                }
                    else if (strcasecmp(input, "help games\n") == 0) {

                        slowPrint(24, "'GAMES' REFER TO MODELS, SIMULATIONS, AND GAMES\nWHICH HAVE TACTICAL AND STRATEGIC APPLICATIONS.\n\n\n");
                        fgets(input, 64, stdin);
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
                            printf("\n\n");
                            Sleep(2048);

                        }

                }
                    else {
                        slowPrint(24, "INDENTIFICATION NOT RECOGNIZED BY SYSTEM\n--CONNECTION TERMINATED--");
                        exit(0);
                    }
    return 0;     
}

void LOGON() {
system("cls");
Sleep(1024);

printf("TESTE");

}
