#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

void slowPrint(unsigned long speed, const char *s) {

    int i = 0;
    while(s[i]!=0) {
        cout << s[i++];
        cout.flush();
        _sleep(speed);
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
            _sleep(2048);

    //            printf("%s\n", input);
                if (strcmp(input, "Joshua\n") == 0) {
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
                        _sleep(2048);

                        if (strcasecmp(input, "list games\n") == 0) {

                            slowPrint(24, "FALKEN'S MAZE\n");
                                _sleep(1024);
                            slowPrint(24, "BLACK JACK\n");
                                _sleep(920);
                            slowPrint(24, "GIN RUMMY\n");
                                _sleep(900);
                            slowPrint(24, "HEARTS\n");
                                _sleep(720);
                            slowPrint(24, "BRIDGE\n");
                                _sleep(720);
                            slowPrint(24, "CHECKERS\n");
                                _sleep(800);
                            slowPrint(24, "CHESS\n");
                                _sleep(640);
                            slowPrint(24, "POKER\n");
                                _sleep(640);
                            slowPrint(24, "FIGHTER COMBAT\n");
                                _sleep(1024);
                            slowPrint(24, "GUERRILLA ENGAGEMENT\n");
                                _sleep(1280);
                            slowPrint(25, "DESERT WARFARE\n");
                                _sleep(1024);
                            slowPrint(25, "THEATERWIDE TACTICAL WARFARE\n");
                                _sleep(1800);
                            slowPrint(26, "THEATERWIDE BIOTOXIC AND CHEMICAL WARFARE");
                                _sleep(2040);
                                printf("\n\n");
                            slowPrint(32, "GLOBAL THERMONUCLEAR WAR\n\n");

                            fgets(input, 64, stdin);
                            printf("\n\n");
                            _sleep(2048);

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
_sleep(1024);

printf("TESTE");

}
