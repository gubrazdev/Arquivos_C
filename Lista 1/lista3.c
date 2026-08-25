#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float distancia, velocidade, tempo;
    printf("digite a distancia da viagem em quilômetros: ");
    scanf("%f",&distancia);
    printf("digite a velocidade média esperada: ");
    scanf("%f",&velocidade);
    tempo= distancia/velocidade;
    printf("A distância da viagem é de 4.2%f km e o tempo de demora é de %4.2f", distancia, tempo);
    return 0;
 }
