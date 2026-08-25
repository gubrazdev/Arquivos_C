#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int a, b;
    printf("\nDigite um número: ");
    scanf("%d",&a);
    b = a % 2;
    switch(b){
    case 0:
        printf("\nNúmero par");
        break;
    case 1:
        printf("\nNúmero ímpar");
        break;
    defaut:
        printf("\nNão é par nem ímpar");
        break;
    }
    return 0;
}
