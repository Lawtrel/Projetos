#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int total,num,menu;

    printf("***************************************\n");
    printf("Digite o numero correspondendo ao menu:\n");
    printf("1 - estrutura do For \n");
    printf("2 - estrutura de Condicoes \n");
    printf("3 - estrutura do while \n");
    printf("***************************************\n");

    scanf("%d",&menu);

    switch (menu)
    {
    case 1:
      for ( int i = 1; i < 25; i++)
        {
            printf("%d \n",i);
            total = i++;
        }

        break;
    case 2:
        printf("digite um numero: ");
        scanf("%d",&total);

        // Estrutura de Condições
        if (total >= 25)
        {
        printf("valor maior que 25");
        }
        else
        {
        printf("VALOR MENOR %d",total);
        }

        break;
    case 3:
        // Estrutura do while
        do
        {
        printf("digite um numero positivo: ");
        scanf("%d",&num);

        } while (num <= 0);

    default:
        printf("fechando o programa");
        break;
    }

}