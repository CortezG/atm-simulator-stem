#include <stdio.h>

void calcular_notas(int saque) {
    int notas[] = {100, 50, 10, 5, 1};
    int quantidade_notas[sizeof(notas) / sizeof(notas[0])];
    int i;

    for (i = 0; i < sizeof(notas) / sizeof(notas[0]); i++) {
        quantidade_notas[i] = saque / notas[i];
        saque %= notas[i];
    }

    printf("Notas necessarias:\n");
    for (i = 0; i < sizeof(notas) / sizeof(notas[0]); i++) {
        if (quantidade_notas[i] > 0) {
            printf("%d nota(s) de %d\n", quantidade_notas[i], notas[i]);
        }
    }
}

int main() {
    int saque;

    printf("Digite o valor do saque (entre 10 e 600): ");
    scanf("%d", &saque);

    if (saque < 10 || saque > 600) {
        printf("Valor de saque invalido!\n");
        return 0;
    }

    calcular_notas(saque);

    return 0;
}
