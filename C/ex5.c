#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void) 
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    int H = 1,N,i;

    printf("Digite o valor de N: ");
    scanf("%d",&N);

    for ( i = 1; i <= N; i++)
    {
        H*= i;
    }
    printf("O valor fatorial: %d",H);
}