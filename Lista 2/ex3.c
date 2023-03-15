#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    int n1;
    printf("digite um numero inteiro:");
    scanf("%d", &n1);
    printf("\n");

    int n2;
    printf("digite outro numero inteiro:");
    scanf("%d", &n2);

    int sub = (n1 - n2);
    int div1 = (n1 / n2);
    int div2 = (n2 / n1);
    int quad = (n1 * n1);
    int cub = (n2 * n2 * n2);

    printf("\nO resultado da subtração é: %d", sub);
    printf("\n");
    printf("\nO resultado da divisão é: %d", div1);
    printf("\n");
    printf("\nO resultado da divisão é: %d", div2);
    printf("\n");
    printf("\nO resultado do quadrado é: %d", quad);
    printf("\n");
    printf("\n5O resultado do cubo é: %d", cub);

    return 0;
}