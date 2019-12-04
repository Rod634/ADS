#include <stdlib.h>
#include <stdio.h>

typedef struct letras{
  char l1;
  char l2;
  char l3;
}Letras;

Letras ler3letras(Letras letra){

  printf("digite 3 letras:\n");
  scanf("%c %c %c", &letra.l1, &letra.l2, &letra.l3);

  return letra;
}

int main(){

  Letras letra = ler3letras(letra);

  printf("letra 1: %c \n", letra.l1);
  printf("letra 2: %c \n", letra.l2);
  printf("letra 3: %c \n", letra.l3);


  return 0;
}
