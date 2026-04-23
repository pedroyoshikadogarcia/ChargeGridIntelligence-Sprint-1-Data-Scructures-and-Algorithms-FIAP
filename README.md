# ChargeGrid Intelligence - Sprint 1
Simulador de sessão de recarga em C desenvolvido para a Sprint 1 do projeto ChargeGrid Intelligence (FIAP).

Sobre o Projeto
O **ChargeGrid Intelligence** é uma plataforma focada no gerenciamento automatizado de infraestrutura de recarga para o setor comercial. O projeto visa solucionar a ausência de mecanismos integrados para gestão de potência, registro de ciclos de sessão e aplicação de tarifação dinâmica em eletropostos.

Funcionalidades

**Início e Fim de Sessão:** Controle de fluxo básico de recarga.

**Diferenciação de Usuários:** Sistema que distingue usuários "Comuns" de "Premium".

**Tarifação Dinâmica:** - Cálculo automático baseado no consumo (kWh).

  Desconto de 15% para usuários Premium.
  
  Taxa de conveniência (R$ 5,00) para sessões rápidas (< 15 min), otimizando a rotatividade.
  
**Simulador de Progresso:** Feedback visual do carregamento via terminal.

**Relatório Final:** Saída formatada com todos os dados da transação.

# Equipe e Responsabilidades

| Integrante | Responsabilidade Técnica |
| :--- | :--- |
| **Pedro Garcia** | Arquitetura do Sistema, Variáveis e Gestão de Tarifas |
| **Lucas Klein** | Lógica de Validação e Controle de Fluxo (Do-While) |
| **Thiago** | Implementação de I/O de Sessão (kWh e Tempo) |
| **Rafael** | Regras de Negócio e Cálculo de Descontos |
| **Pedro Andreassa** | Simulação de Hardware e Formatação de Relatório |
