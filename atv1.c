#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite o lado A: ");
    scanf("%f", &a);

    printf("Digite o lado B: ");
    scanf("%f", &b);

    printf("Digite o lado C: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("O triangulo e Equilatero.\n");
        } 
        else if (a == b || a == c || b == c) {
            printf("O triangulo e Isosceles.\n");
        } 
        else {
            printf("O triangulo e Escaleno.\n");
        }
    } 
    else {
        printf("Os valores informados nao podem formar um triangulo.\n");
    }



    int valor;
    int notas50, notas20, notas10, notas5;
    int restante;

    printf("Digite o valor a ser sacado:  ");
    scanf("%d", &valor);

    if (valor <= 0 || valor % 5 != 0) {
        printf("Erro: valor nao pode ser sacado com as notas disponiveis.\n");
        return 0;
    }

    restante = valor;

    notas50 = restante / 50;
    restante = restante % 50;

    notas20 = restante / 20;
    restante = restante % 20;

    notas10 = restante / 10;
    restante = restante % 10;

    notas5 = restante / 5;
    restante = restante % 5;

    if (restante != 0) {
        printf("Erro: valor nao pode ser sacado.\n");
    } else {
        printf("\nNotas necessarias:\n");
        printf("Notas de R$ 50: %d\n", notas50);
        printf("Notas de R$ 20: %d\n", notas20);
        printf("Notas de R$ 10: %d\n", notas10);
        printf("Notas de R$ 5: %d\n", notas5);

    return 0;
}