/******************************************************************************
 * PROJETO: ChargeGrid Intelligence - Sprint 1
 * DESCRIÇÃO: Simulador de Sessão de Recarga para Eletropostos Comerciais
 * * AUTORES:
 * - Pedro Garcia: Arquitetura, Variáveis e Gestão de Tarifas
 * - Thiago: Lógica de Validação de Entrada (Do-While)
 * - Pedro Andreassa: Implementação de I/O de Sessão (kWh e Tempo)
 * - Rafael: Regras de Negócio e Cálculo de Descontos
 * - Lucas Klein: Simulação de Hardware e Formatação de Relatório
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    int tipoUsuario; 
    float kwhConsumido = 0;
    int tempoMinutos = 0; 
    float precoPorKwh = 1.50; 
    float valorTotal = 0;
    char confirma;

    printf("--- ChargeGrid Intelligence | Terminal de Recarga ---\n");

    do {
        printf("\nSelecione o Tipo de Usuario:\n");
        printf("1 - Usuario Comum (Tarifa Standard)\n");
        printf("2 - Usuario Premium (15%% de Desconto)\n");
        printf("Escolha: ");
        scanf("%d", &tipoUsuario);
 
        if (tipoUsuario < 1 || tipoUsuario > 2) {
            printf("[ERRO] Opcao invalida. Tente novamente.\n");
        }
    } while (tipoUsuario < 1 || tipoUsuario > 2);
}