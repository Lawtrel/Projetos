#include <stdio.h>

int main() {
    int num[20];
    int menor;
    int soma = 0;

    for (int i = 0; i < 20; i++) {
        printf("Digite o %dº número inteiro: ", i + 1);
        scanf("%d", &num[i]);

        if (i == 0 || num[i] < menor) {
            menor = num[i];
        }

        soma += num[i];
    }

    float media = (float)soma / 20;

    printf("O menor valor fornecido foi: %d\n", menor);
    printf("A média dos valores fornecidos foi: %.2f\n", media);

    return 0;
}
