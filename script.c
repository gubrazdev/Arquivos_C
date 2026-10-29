#include <stdio.h>


int main(){
    float salario, s_maior=0;
    int filhos=0, sem_filhos=0, com_filhos=0, cadastrados=0;
    while (1){
        printf("Digite seu salario: ");
        scanf("%f", &salario);
        if (salario <= 0){
            break;
        }
        else{
            do{
                printf("Digite sua quantidade de filhos: ");
                scanf("%d", &filhos);
                if (filhos==0){
                    sem_filhos++;
                }
                else if(filhos>=1){
                    com_filhos++;
                }
            }while(filhos<0);
            if(salario>s_maior){
                s_maior=salario;
            }
            cadastrados++;
        }
    }

    printf("\nPessoas cadastradas: %d", cadastrados);
    printf("\nPessoas que tem filhos cadastradas: %d", com_filhos);
    printf("\nPessoas sem filhos cadastradas: %d", sem_filhos);
    printf("\nMaior salario cadastrado: %.2f", s_maior);
    printf("\nProcesso encerrado");
    return 0;

}