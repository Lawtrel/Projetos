#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) 
{
    int a,b,soma;
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("Digite o primeiro numero: ");
    scanf("%d",&a);
    printf("Digite o segundo numero: ");
    scanf("%d",&b);
    soma=a+b;
    printf("A soma dos dois numeros é: %d",soma);
    
    return 0;
}