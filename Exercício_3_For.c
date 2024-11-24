/* Crie um programa que peça ao usuário para adivinhar um número (por exemplo, 42) e continue pedindo até que o usuário
acerte o número */

#include <stdio.h>

int main() {
    int numero_secreto = 42;  
    int palpite;

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar o número secreto (entre 1 e 100):\n");

    while (1) {  
        printf("Digite o seu palpite: ");
        scanf("%d", &palpite);

        if (palpite < numero_secreto) {
            printf("O número secreto é maior. Tente novamente!\n");
        } else if (palpite > numero_secreto) {
            printf("O número secreto é menor. Tente novamente!\n");
        } else {
            printf("Parabéns! Você acertou o número secreto: %d\n", numero_secreto);
            break;  
        }
    }

    return 0;
}
