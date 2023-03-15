#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    float n1;
    float n2;
    
    printf("digite a nota 1:");
    scanf("%f", &n1);
    printf("\n");

   
    printf("digite a nota 2:");
    scanf("%f", &n2);
    printf("\n");


    float media = (((n1 * 4) + (n2 * 6)) /10);

    printf("A média entre as duas notas é: %f", media);
    return 0;
}