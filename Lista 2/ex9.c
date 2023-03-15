#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    int n1;
    
    printf("digite a idade em dias:");
    scanf("%d", &n1);
    printf("\n");

    int idade = n1 / 365;

    printf("O consumo do carro em Km/L é: %f", idade);
    return 0;
}