#include <stdio.h>

int main() {
    float salario, imposto, salarioLiquido;

    printf("Digite o salario bruto: R$ ");
    scanf("%f", &salario);

    if (salario <= 2000.00) {
        imposto = 0.00;
    }
    else if (salario <= 4000.00) {
        imposto = (salario - 2000.00) * 0.15;
    }
    else {
        imposto = 300.00 + (salario - 4000.00) * 0.225;
    }

    salarioLiquido = salario - imposto;

    printf("\n===== RESULTADO =====\n");
    printf("Salario bruto: R$ %.2f\n", salario);
    printf("Imposto retido: R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);


   
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("%d e um ano bissexto.\n", ano);
    }
    else {
        printf("%d nao e um ano bissexto.\n", ano);
    }


    return 0;
}