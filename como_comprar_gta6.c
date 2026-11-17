#include <stdio.h>
#include <ctype.h> // Para usar o toupper()

int main() {
    char resp = '\0';
    int comprou = 0; //  para controlar se o objetivo foi concluido

    printf("=== COMO COMPRAR GTA 6 ===\n\n");

    
    printf("Voce tem dinheiro? (S/N): ");
    scanf(" %c", &resp);
    if (toupper(resp) == 'S') {
        printf("\n-> Compre GTA 6!\n");
        comprou = 1;
    }

    
    if (comprou==0) {
        printf("Voce tem emprego? (S/N): ");
        scanf(" %c", &resp);
        if (toupper(resp) == 'S') {
            printf("Recebeu o salario? (S/N): ");
            scanf(" %c", &resp);
            if (toupper(resp) == 'S') {
                printf("\n-> Compre GTA 6!\n");
                comprou = 1;
            }
        }
    }

    
    if (comprou==0) {
        printf("Voce tem algo para vender? (S/N): ");
        scanf(" %c", &resp);
        if (toupper(resp) == 'S') {
            printf("\n-> Venda!\n");
            printf("-> Compre GTA 6!\n");
            comprou = 1;
        }
    }

    
    while (comprou==0) {
        printf("Voce tem orgaos? (S/N): ");
        scanf(" %c", &resp);
        if (toupper(resp) == 'S') {
            printf("\n-> Venda!\n");
            printf("-> Compre GTA 6!\n");
            comprou = 1;
        } else {
            printf("Mentiroso!\n\n");
        }
    }

    return 0;
}