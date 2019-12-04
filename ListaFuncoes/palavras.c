#include <stdlib.h>
#include <stdio.h>

typedef struct palavras{
  char p1[20];
  char p2[20];
  char p3[20];
}Palavra;

Palavra ler3palavras(Palavra palavras){

  printf("digite 3 palavras: \n");
  scanf("%s%s%s", &palavras.p1, &palavras.p2, &palavras.p3);

  return palavras;
}

int main(){

  Palavra palavras = ler3palavras(palavras);

  printf("Palavra 1: %s \n", palavras.p1);
  printf("Palavra 2: %s \n", palavras.p2);
  printf("Palavra 3: %s \n", palavras.p3);


  return 0;
}
