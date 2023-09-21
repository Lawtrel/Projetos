#include <stdlib.h>
#include <stdio.h>
int main(void) 
{
    char nome,sexo,civil;
    int anos,mes;
    printf("Entre com seu nome: ");
    fflush(stdin);
    nome = getchar();
    printf("Digite o seu Sexo: [M/F]: ");
    fflush(stdin);
    scanf("%c",&sexo);
    fflush(stdin);
    printf("informe o estado civil(C - casada, S - solteira): ");
    scanf("%c",&civil);
    if (civil =='C' && sexo == 'F')
    {
        printf("Quantos anos de casada? ");
        scanf("%d",&anos);
        printf("Quantos meses casada? ");
        scanf("%d",&mes);
        printf("%c  e do sexo fem e casa a %d anos e %d meses",nome,anos,mes);
    }
    else {
        printf("Solteira.");
    }
}

