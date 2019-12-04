#include <stdio.h>
#include <stdlib.h>

float subtrai(float *n1, float *n2, float *n3){

    float res;

    res = *n1 - *n2 - *n3;

  return res;
}

int main(){

    float n1, n2, n3, res;

    printf("Digite o valor de n1: \n");
    scanf("%f", &n1);
    printf("Digite o valor de n2: \n");
    scanf("%f", &n2);
    printf("Digite o valor de n3: \n");
    scanf("%f", &n3);

    res = subtrai(&n1, &n2, &n3);
    printf("Resutado da subtracao: %.2f\n",res);

  return 0;
}
