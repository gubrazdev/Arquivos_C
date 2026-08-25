#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int num;
    printf("\nDigite um número: ");
    scanf("%d",&num);
    if(num == 10){
        printf("O número é igual a dez");
    }
    else{
        if(num > 10){
            printf("O número é maior que dez");
        }
        else{
            printf("O número é menor que dez");
        }
    }
    return 0;
}
