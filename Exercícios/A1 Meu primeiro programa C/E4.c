#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    printf("O quilo de laranjas custa em média R$%d reais\n", (5+4+10)/3);
    return 0;
}