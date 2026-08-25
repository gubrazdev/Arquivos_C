#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"");
    int num;
    printf("\nDigite um número:\n\n");
    scanf("%d",&num);
    printf("O número digitado foi %d\n",num);
    return 0;
}
