#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    printf("Minha altura em polegadas é %din\n", 63);
    return 0;
}