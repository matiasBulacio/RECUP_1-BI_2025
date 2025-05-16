#include <stdio.h>
#include "operacoes.h"

int main() {
    float saldo = 0.0;
    int opcao;
    float valor;

    do {
        printf("\n====== MENU BANCÁRIO ======\n");
        printf("1. Depositar\n");
        printf("2. Sacar\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Informe o valor para depósito: R$ ");
                scanf("%f", &valor);
                saldo = depositar(saldo, valor);
                break;
            case 2:
                printf("Informe o valor para saque: R$ ");
                scanf("%f", &valor);
                saldo = sacar(saldo, valor);
                break;
            case 0:
                printf("👋 Encerrando operações. Saldo final: R$ %.2f\n", saldo);
                break;
            default:
                printf("⚠️ Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}