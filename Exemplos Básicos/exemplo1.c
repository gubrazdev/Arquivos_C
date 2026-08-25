#include<stdio.h>
#include<locale.h>
/*Comentário*/
int main(){
    setlocale(LC_ALL,"");
    int soma;
    int mult=10;
    int imposto;
    imposto=5;
    soma=mult*imposto;
    printf("O resultado é:%d",soma);
    return 0;
}
