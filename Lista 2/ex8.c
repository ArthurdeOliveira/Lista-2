#include <stdio.h>
#include <stdlib.h>
#include <Locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    float n1;
    float n2;
    float n3;

    int q1;
    int q2;
    int q3;

    
    printf("digite o preço do produto 1:");
    scanf("%f", &n1);
    printf("\n");

   
    printf("digite a quantidade do produto 1 a ser comprada:");
    scanf("%d", &q1);
    printf("\n");

    printf("digite o preço do produto 2:");
    scanf("%f", &n2);
    printf("\n");

   
    printf("digite a quantidade do produto 2 a ser comprada:");
    scanf("%d", &q2);
    printf("\n");

    printf("digite o preço do produto 3:");
    scanf("%f", &n3);
    printf("\n");

   
    printf("digite a quantidade do produto 3 a ser comprada:");
    scanf("%d", &q3);
    printf("\n");


    float t1 = (n1 * q1);
    float t2 = (n2 * q2);
    float t3 = (n3 * q3);
    float tc = (t1 + t2 + t3);


    printf("\nTotal produto 1: %.2f", t1);
    printf("\nTotal produto 2: %.2f", t2);
    printf("\nTotal produto 3: %.2f", t3);
    printf("\nTotal da compra: %.2f", tc);

    return 0;
}