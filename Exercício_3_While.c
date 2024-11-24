/* Crie um programa que calcule a soma dos números pares de 1 a 100 usando um loop "while" */

#include <stdio.h>

int main() {
    int numero = 2; ]
    int soma = 0;
]
    while (numero <= 100) {
        soma += numero; 
        numero += 2; 
    }

    printf("A soma dos números pares de 1 a 100 é: %d\n", soma);

    return 0;
}
