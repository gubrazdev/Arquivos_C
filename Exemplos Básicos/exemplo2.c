#include<stdio.h>
#include<locale.h>
/*Comentário*/
int main(){
    setlocale(LC_ALL,"");
    int soma;
    int subtrai;
    soma=1;
    subtrai=2;
    soma++;//soma=soma+1
    subtrai--;//subtrai=subtrai-1
    printf("O resultado é:%d e %d", soma,subtrai);
}
