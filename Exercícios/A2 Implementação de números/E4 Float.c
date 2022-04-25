#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    printf("O quilo de laranjas custa em média R$%.2f reais\n", (5.0 + 4.0 + 10.0)/3.0);
    return 0;
}