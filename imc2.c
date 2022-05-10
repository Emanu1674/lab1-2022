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
    
    printf("O seu IMC é de %.1f\n", indice);
    if (indice < 16) {
        printf("Você possui magreza grau III");
        } else if ((indice >= 16)&&(indice <= 16.9)){
            printf("Você possui magreza grau II");  
        } else if ((indice >= 17)&&(indice <= 18.4)){
            printf("Você possui magreza grau I");  
        } else if ((indice >= 18.5)&&(indice <= 24.9)){
            printf("Você possui o peso ideal"); 
        } else if ((indice >= 25)&&(indice <= 29.9)){
            printf("Você possui pré-obesidade");
        } else if ((indice >= 30)&&(indice <= 34.9)){
            printf("Você possui obesidade grau I");
        } else if ((indice >= 35)&&(indice <= 39.9)){
            printf("Você possui obesidade grau II");
        } else if (indice >= 40){
            printf("Você possui obesidade grau III");
        }
    return 0;
}
