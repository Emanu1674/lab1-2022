#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    printf("O volume em litros de uma piscina olímpica é de %d litros\n", (50*25*3)*1000);
    return 0;
}