#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    printf("A distância que o carro pode fazer com R$100 de gasolina é de %dkm\n", (100/7)*10);
    return 0;
}