#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

char nome[20];
int anos;

int main(){
    setlocale(LC_ALL,"Portuguese");

    printf("qual o seu nome? \n");
    scanf("%s",&nome);
    printf("qual a sua idade? \n");
    scanf("%d",&anos);
    
    printf("Seu nome é %s e sua idade é %d",nome,anos);
    
    return 0;
}
