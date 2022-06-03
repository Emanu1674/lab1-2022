#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

bool primo (int n){
    if (n < 2) {return 0;} else
    if (n == 2){return 1;} else
    if (n == 3){return 1;} else
    if (n == 5){return 1;} else
    if (n == 7){return 1;} else
    if (n % 2 == 0){return 0;} else
    if (n % 3 == 0){return 0;} else
    if (n % 5 == 0){return 0;} else
    if (n % 7 == 0){return 0;} else
    return 1;
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int p, i, n;
    n = 0;
    i = 0;
    printf("Digite um número: ");
    scanf("%d", &p);
    printf(primo(p) ? "%d é primo\n" : "%d não é primo\n", p);
    
    for (i = 0; i < 100; i++) {
        printf(primo(i) ? "%d " : "", i);
        }
    i = 0;
    printf("\n\nDigite o total de primos que você quer imprimir: ");
    scanf("%d", &p);
    for(n = 0; n < p; i++) {
        if (primo(i) == 1) {
            printf("%d ", i);
            n++;
        }
    } 
    i = 0;
    printf("\n\nDigite a posição do primo que você quer imprimir: ");
    scanf("%d", &p);
    for(n = 0; n < p; i++) {
        if (primo(i) == 1) {
            n += 1;
        }
    }
    i-=1;
    printf("%d ", i);
    return 0;
}
