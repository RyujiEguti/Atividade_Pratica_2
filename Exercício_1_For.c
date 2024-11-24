/* Escreva um programa que solicite ao usuário um número e imprima os números pares de 2 até o número inserido usando 
um loop "for". */

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Números pares de 2 até %d:\n", numero);

    for (int i = 2; i <= numero; i += 2) {
        printf("%d\n", i); 
    }

    return 0;
}
