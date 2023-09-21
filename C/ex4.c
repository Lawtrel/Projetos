#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void) 
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    int H = 0,N;

    printf("Digite o valor de N: ");
    scanf("%d",&N);

    for (int  i = 1; i < N; i++)
    {
       H += i;
    }
    printf("O valor de H: %d",H);
}