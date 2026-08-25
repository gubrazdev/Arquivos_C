#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float altura;
    int idade , futuro;
    printf("digite sua idade: ");
    scanf("%d",&idade);
    printf("digite seu altura: ");
    scanf("%f",&altura);
    futuro= idade + 5;
    printf("Você tem %d anos, sua altura é de %4.2f", idade, altura);
    printf("\nDaqui a 5 anos você terá %d anos", futuro);
    return 0;
 }
