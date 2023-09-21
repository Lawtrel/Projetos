#include <stdio.h>
#include <stdlib.h>

int main (void) 
{
    int num,maior,menor;

    do
    {
        printf("Digite um numero: ");
        scanf("%d",&num);
        if ((num >=maior) && (num>=menor)) {
            maior=num;
        }
        else {
            if ((num <maior) && (num<menor)) {
                menor=num;
            }
        }

    } while (num<=20);
    printf("O numero maior e: %d",maior);
    printf("o numero menor e: %d",menor);
    
}