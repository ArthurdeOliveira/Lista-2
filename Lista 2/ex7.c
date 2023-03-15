#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    float n1;
    float n2;
    
    printf("digite a distância percorrida em KM:");
    scanf("%f", &n1);
    printf("\n");

   
    printf("digite a qunatidade de combustível consumido em L:");
    scanf("%f", &n2);
    printf("\n");


    float consumo = (n1 / n2);

    printf("O consumo do carro em Km/L é: %f", consumo);
    return 0;
}