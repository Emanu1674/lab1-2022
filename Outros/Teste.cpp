#include <stdio.h>
#include <iostream>
#include <locale.h>

using namespace std;

void slowPrint(unsigned long speed, const char *s) {

    int i = 0;
    while(s[i]!=0) {
        cout << s[i++];
        cout.flush();
        _sleep(speed);
    }
}

int main() {

    setlocale(LC_ALL, "Portuguese");

    printf("\033[0;36m");
    system("cls");
    slowPrint(12, "                                                                                                    \n");
    slowPrint(20, "Isso � um exemplo\nDemorei muito tempo pra fazer isso\nC++ n�o � divertido\n");
    return 0;

}