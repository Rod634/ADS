#include <stdio.h>
#include <stdlib.h>

int soma(float *n1, float *n2){
    float res;

    res = *n1 + *n2;

    return res;
}

int main()
{
    float n1, n2, res;

    printf("digite o valor de n1: \n");
    scanf("%f", &n1);
    printf("digite o valor de n2: \n");
    scanf("%f", &n2);

	res = soma (&n1, &n2);

    printf("resultado da soma de n1 e n2: %.2f \n", res);

    return 0;
}
