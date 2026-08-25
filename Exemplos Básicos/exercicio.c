#include <stdio.h>
#include <math.h>
#include <locale.h>

 int main(){
    setlocale(LC_ALL,"");
    float peso , altura, imc;
    printf("digite seu peso: ");
    scanf("%f",&peso);
    printf("digite seu altura: ");
    scanf("%f",&altura);
    imc=peso/(altura*altura);
    printf("Seu IMC é %4.2f",imc);

    return 0;
 }
