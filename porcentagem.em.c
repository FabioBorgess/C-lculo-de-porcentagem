#include <stdio.h>

int main() {
    // Declaração das variáveis
    float valorTabelaFipe, valorSeguro, porcentagem;

    // Solicita ao usuário o valor da Tabela Fipe
    printf("Digite o valor da Tabela Fipe do veículo: R$ ");
    scanf("%f", &valorTabelaFipe);

    // Solicita ao usuário o valor do seguro
    printf("Digite o valor do seguro do veículo: R$ ");
    scanf("%f", &valorSeguro);

    // Verifica se o valor da Tabela Fipe é maior que zero para evitar divisão por zero
    if (valorTabelaFipe <= 0) {
        printf("O valor da Tabela Fipe deve ser maior que zero.\n");
        return 1;
    }

    // Calcula a porcentagem do valor do seguro em relação ao valor da Tabela Fipe
    porcentagem = (valorSeguro / valorTabelaFipe) * 100;

    // Exibe o resultado
    printf("O valor do seguro representa %.2f%% da Tabela Fipe.\n", porcentagem);

    return 0;
}