/******************************************************************************
 * PROJETO: ChargeGrid Intelligence - Sprint 1
 * DESCRIÇÃO: Simulador de Sessão de Recarga para Eletropostos Comerciais
 * * AUTORES:
 * - Pedro Garcia: Arquitetura, Variáveis e Gestão de Tarifas
 * - Thiago: Lógica de Validação de Entrada (Do-While)
 * - Lucas Klein: Implementação de I/O de Sessão (kWh e Tempo)
 * - Rafael: Regras de Negócio e Cálculo de Descontos
 * - Pedro Andreassa: Simulação de Hardware e Formatação de Relatório
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
}