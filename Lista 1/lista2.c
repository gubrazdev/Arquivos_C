#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    float celcius, fahrenheit;
    printf("digite a temperatura em celcius: ");
    scanf("%f",&celcius);
    fahrenheit= (celcius*9/5)+32;
    printf("A temperatura em fahrenheit é:%4.1f", fahrenheit);
    return 0;
 }

