#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    int n1;
    printf("digite um numero inteiro:");
    scanf("%d", &n1);

    int n2;
    printf("digite outro numero inteiro:");
    scanf("%d", n2);

    int som = (n1 + n2);

    printf("O resultado da soma é: %d", som);
    return 0;
}