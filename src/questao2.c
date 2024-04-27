#include <stdio.h>


double get_produto() {

    double valor_produto;

    printf("\nDigite o valor do produto: ");
    scanf("%lf", &valor_produto);

    return valor_produto;
}


double calcular_custo_aumento(double valor_produto) {

    double custo_aumento;

    if (valor_produto <= 50) {
        custo_aumento = valor_produto * 0.05;
    } else if (valor_produto >= 50 && valor_produto <= 100) {
        custo_aumento = valor_produto * 0.10;
    } else if (valor_produto > 100) {
        custo_aumento = valor_produto * 0.15;
    }

    return custo_aumento;
}


double calcular_valor_final(double valor_produto, double custo_aumento) {

    double valor_final;

    valor_final = valor_produto + custo_aumento;
    printf("\nValor total: %0.2lf", valor_final);

    return valor_final;
}


void atribuir_classificacao(double valor_final) {

    if (valor_final <= 80) {
        printf("\nClassificacao: BARATO");
    } else if (valor_final > 80 && valor_final < 120) {
        printf("\nClassificacao: NORMAL");
    } else if (valor_final >= 120 && valor_final <= 200) {
        printf("\nClassificacao: CARO");
    } else if (valor_final > 200) {
        printf("\nClassificacao: MUITO CARO");
    }
    
}


int main() {

    double valor_produto;
    double custo_aumento;
    double valor_final;

    valor_produto = get_produto();
    custo_aumento = calcular_custo_aumento(valor_produto);
    valor_final = calcular_valor_final(valor_produto, custo_aumento);

    atribuir_classificacao(valor_final);


    return 0;
}