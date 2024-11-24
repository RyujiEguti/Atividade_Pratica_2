/* Escreva Escreva um programa que calcule a média de 10 números fornecidos pelo usuário usando um loop "for". */

#include <stdio.h>

int main() {
    int soma = 0, numero;
    float media;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);
        soma += numero;  
    }

    // Calcula a média
    media = (float)soma / 10;

    // Exibe o resultado
    printf("A média dos 10 números é: %.2f\n", media);

    return 0;
}
