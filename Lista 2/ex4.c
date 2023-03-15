#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    float r;
    printf("o raio para uma circunferencia:");
    scanf("%f", &r);
    printf("\n");

    float pi = 3.14159;

    float a = (pi * (r*r));

    printf("\n");
    printf("\nA área da circunferência é: %f", a);

    return 0;
}