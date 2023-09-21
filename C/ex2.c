#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) 
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    int Q,preco,total;

    for (int  i = 0; i < 45; i++)
    {
        printf("Digite a quantidade do produto %d: ",i+1);
        scanf("%d",&Q);
        printf("Digite o Preco do produto %d: ",i+1);
        scanf("%d",&preco);
        total += Q * preco;

    }
    printf("O total gasto foi de: %d",total);
    
}