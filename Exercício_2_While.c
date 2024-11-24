/* Escreva um programa que solicite ao usuário um número e imprima os números de 1 até o número inserido usando um loop
"while". */

#include <stdio.h>

int main() {
    int numero, contador = 1;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Números de 1 até %d:\n", numero);

    while (contador <= numero) {
        printf("%d\n", contador); 
        contador++;
    }

    return 0;
}