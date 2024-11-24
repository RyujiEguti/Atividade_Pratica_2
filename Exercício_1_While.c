/* Crie um programa que imprima os números de 1 a 10 usando um loop "while". */

#include <stdio.h>

int main() {
    int numero = 1; 

    printf("Números de 1 a 10:\n");

    while (numero <= 10) { 
        printf("%d\n", numero); 
        numero++; 
    }

    return 0;
}