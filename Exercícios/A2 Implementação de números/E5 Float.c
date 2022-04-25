#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    printf("A distância que o carro pode fazer com R$100 de gasolina é de %.2fkm\n", (100.0/7.0)*10.0);
    return 0;
}