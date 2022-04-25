#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    printf("Minha idade aproximada em dias é %d dias\n", 21*365);
    return 0;
}