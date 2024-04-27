#include <stdio.h>


double inserir_custo_fabrica() {

    double custo_fabrica;

    printf("\nDigite o valor: ");
    scanf("%lf", &custo_fabrica);

    return custo_fabrica;
}


double calcular_custo_distribuidor(double custo_fabrica) {
    
    double custo_total_distribuidor;

    if (custo_fabrica <= 12000) {
        custo_total_distribuidor = custo_fabrica * 0.05;

    } else if (custo_fabrica >= 12000 && custo_fabrica <= 25000) {
        custo_total_distribuidor = custo_fabrica * 0.10;
    
    } else if (custo_fabrica > 25000) {
        custo_total_distribuidor = custo_fabrica * 0.15;
    } else {
        printf("Algo deu errado.");
    }

    return custo_total_distribuidor;
}


double calcular_custo_imposto(double custo_fabrica) {

    double custo_total_imposto;

    if (custo_fabrica >= 12000 && custo_fabrica <= 25000) {
        custo_total_imposto = custo_fabrica * 0.10;
    
    } else if (custo_fabrica > 25000) {
        custo_total_imposto = custo_fabrica * 0.15;

    } else if (custo_fabrica < 12000) {
        custo_total_imposto = 0;
    }
    
    return custo_total_imposto;
}


double calcular_total_custo(double custo_fabrica, double custo_distribuidor, double custo_imposto) {

    double calculo_total_custo;

    calculo_total_custo = custo_fabrica + custo_distribuidor + custo_imposto;

    return calculo_total_custo;
}


int main() {

    double custo_fabrica;
    double custo_distribuidor;
    double custo_imposto;
    double total_custo;

    custo_fabrica = inserir_custo_fabrica();
    custo_distribuidor = calcular_custo_distribuidor(custo_fabrica);
    custo_imposto = calcular_custo_imposto(custo_fabrica);
    total_custo = calcular_total_custo(custo_fabrica, custo_distribuidor, custo_imposto);

    printf("\nCusto total: %0.2lf", total_custo);
    

    return 0;
}