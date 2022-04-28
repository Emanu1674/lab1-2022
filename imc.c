#include <stdio.h>
#include <locale.h>

//função que calcula IMC
float imc(int peso, float alt) {
    float indice;
    
    indice = (peso/(alt*alt));
    return indice;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
        float peso;
        float alt;
        float indice;
    
    printf("digite o seu peso (em kg): ");
        scanf("%f", &peso);
    
    printf("digite a sua altura (em metros): ");
        scanf("%f", &alt);
    
    indice = imc(peso, alt);
    
    printf("O seu IMC é de %.1f", indice);

    return 0;
}
