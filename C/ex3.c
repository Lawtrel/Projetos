#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    float horasTrabalhadas,salarioBruto = 0;
    
    for (int  i = 0; i <= 30; i++)
    {
        printf("Digite o numero de hora trabalhada no dia %d : ",i+1);
        scanf("%f",&horasTrabalhadas);
        salarioBruto += horasTrabalhadas * 10.00;
    }
    printf("o Salario Bruto foi de : %0.2f",salarioBruto);
    
}