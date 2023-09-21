#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) 
{
	float pesoCaixa[25],pesoTotal = 0;
	for (int i = 1; i < 25; i++)
	{
		printf("Digite o Peso da caixa %d: ",i);
		scanf("%f",&pesoCaixa[i]);
		pesoTotal += pesoCaixa[i];
	}

	printf("O peso total da caixa e: %0.2f",pesoTotal);
	
}
