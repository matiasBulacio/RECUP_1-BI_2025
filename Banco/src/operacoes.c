#include <stdio.h>
#include "operacoes.h"

// Realiza depósito, adiciona valor ao saldo e imprime resultado
float depositar(float saldo, float valor) {
    if (valor <= 0) {
        printf("❌ Valor de depósito inválido. Tente um valor maior que zero.\n");
    } else {
        saldo += valor;
        printf("✅ Depósito de R$ %.2f realizado com sucesso!\n", valor);
    }
    printf("💰 Saldo atual: R$ %.2f\n", saldo);
    return saldo;
}

// Realiza saque, subtrai valor do saldo se houver saldo suficiente
float sacar(float saldo, float valor) {
    if (valor <= 0) {
        printf("❌ Valor de saque inválido. Tente um valor maior que zero.\n");
    } else if (valor > saldo) {
        printf("❌ Saldo insuficiente para saque de R$ %.2f.\n", valor);
    } else {
        saldo -= valor;
        printf("✅ Saque de R$ %.2f realizado com sucesso!\n", valor);
    }
    printf("💰 Saldo atual: R$ %.2f\n", saldo);
    return saldo;
}