#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int a, b;
    printf("\nDigite um número: ");
    scanf("%d",&a);
    if(a < 10){
        printf("O número é menor que dez");
    }
    else if(a == 10){
        printf("O número é igual a dez");
    }
    else if (a > 10){
        printf("O número é maior que dez");
    }
    return 0;
}
