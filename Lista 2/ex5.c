#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    float n1;
    float n2;
    float n3;
    
    printf("digite o peso da pessoa 1:");
    scanf("%f", &n1);
    printf("\n");

   
    printf("digite o peso da pessoa 2:");
    scanf("%f", &n2);
    printf("\n");

    
    printf("digite o peso da pessoa 3:");
    scanf("%f", &n3);
    printf("\n");


    float media = ((n1 + n2 + n3)/3);

    printf("A média de peso entre as 3 pessoas é: %f", media);
    return 0;
}