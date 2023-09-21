#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num[20],maior = 0;

    for (int i = 0; i < 20; i++) {
        printf("Digite o %d numeros inteiro: ", i + 1);
        scanf("%d",&num[i]);

        if (num[i] > maior) {
            maior = num[i];
        }
    }
    printf("O maior valor fornecido foi: %d \n",maior);

    return 0;
}