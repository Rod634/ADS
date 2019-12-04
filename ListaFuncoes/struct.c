#include <stdlib.h>
#include <stdio.h>

typedef struct numero{
  int n1;
  int n2;
  int n3;
  int n4;
}Num;

Num ler4Numeros(Num numero){

  printf("digite 4 numeros: \n");
  scanf("%i%i%i%i", &numero.n1, &numero.n2, &numero.n3, &numero.n4);

  return numero;
}

int main(){

  Num numero = ler4Numeros(numero);

  printf("numero 1: %i \n", numero.n1);
  printf("numero 2: %i \n", numero.n2);
  printf("numero 3: %i \n", numero.n3);
  printf("numero 4: %i \n", numero.n4);


  return 0;
}
