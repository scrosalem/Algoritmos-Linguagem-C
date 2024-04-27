#include <stdio.h>


int escolher_tipo_investimento() {

    int escolha;

    printf("1 - Poupanca  |  2 - Fundos de renda fixa");

    printf("\nEscolha o tipo de investimento: ");
    scanf("%d", &escolha);

    return escolha;
}


double investir_valor() {

    double valor_investido;

    printf("\nDigite o valor que deseja investir: ");
    scanf("%lf", &valor_investido);


    return valor_investido;
}


double calcular_valor_poupanca(double valor_investido) {
    
    double valor_acrescentar;

    valor_acrescentar = valor_investido * 0.03;

    return valor_acrescentar;
}


double calcular_valor_renda_fixa(double valor_investido) {
    
    double valor_acrescentar;

    valor_acrescentar = valor_investido * 0.04;

    return valor_acrescentar;
}


double calcular_valor_final(double valor_investido, double valor_acrescentar) {
    
    double valor_final;

    valor_final = valor_investido + valor_acrescentar;

    return valor_final;
}


void manager(int escolha) {

    double valor_investido;
    double valor_acrescentar;
    double valor_final;

    if (escolha == 1) {
        
        printf("\nTipo de conta escolhida: Poupanca");

        valor_investido = investir_valor();
        valor_acrescentar = calcular_valor_poupanca(valor_investido);
        valor_final = calcular_valor_final(valor_investido, valor_acrescentar);

        printf("\nValor total apos 1 mes: %0.2lf", valor_final);
    
    
    } else if (escolha == 2) {
        
        printf("\nTipo de conta escolhida: Fundos de Renda Fixa");

        valor_investido = investir_valor();
        valor_acrescentar = calcular_valor_renda_fixa(valor_investido);
        valor_final = calcular_valor_final(valor_investido, valor_acrescentar);

        printf("\nValor total apos 1 mes: %0.2lf", valor_final);
    
    
    } else {
        printf("Algo deu errado. Numero invalido.");
    }
    
}


int main() {

    int escolha;

    escolha = escolher_tipo_investimento();

    manager(escolha);

    return 0;
}



