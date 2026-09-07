#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        printf("%d é bissexto.\n", ano);
    }
    else if (ano <= 0) {
        printf("Ano inválido!\n");
    }
    else {
        printf("%d não é bissexto.\n", ano);
    }

    return 0;
}