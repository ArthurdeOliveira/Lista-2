#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    float n1;
    printf("digite um numero com vírgula:");
    scanf("%f", &n1);

    float n2;
    printf("digite outro numero com vírgula:");
    scanf("%f", &n2);

    float n3;
    printf("digite mais um numero com vírgula:");
    scanf("%f", &n3);

  

    float multi = (n1 * n2 * n3);

    printf("O resultado da multiplicação é: %f", multi);
    return 0;
}