#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void) 
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    int i,N;
    int N[20];
    for ( i = 0; i < 20; i++)
    {
        printf("Digite os numeros: ");
        scanf("%d",&N);

    }
    
}