#include <stdio.h>
#include <stdlib.h>

typedef struct valores{

  int N1, N2, N3;
  int maior;
  int menor;
  int aux;

}num;

num processavalores(){

  num Num;

  printf("digite um valor para n1\n");
  scanf("%i\n", &Num.N1);
  printf("digite um valor para n2\n");
  scanf("%i\n", &Num.N2);
  printf("digite um valor para n3\n");
  scanf("%i\n", &Num.N3);

  if((Num.N1 == Num.N2) && (Num.N2 == Num.N3)){
    Num.aux = 1;
  }else if((Num.N1 == Num.N2) || (Num.N2 == Num.N3) || (Num.N1 == Num.N3)){
    Num.aux = 2;
  }else{
    Num.aux = 3;
  }

  Num.maior = Num.N1;
  Num.menor = Num.N1;

  if((Num.N2 > Num.maior) && (Num.N2 > Num.N3)){
    Num.maior = Num.N2;
  }else if((Num.N3 > Num.maior) && (Num.N3 > Num.N2)){
    Num.maior = Num.N3;
}

  if((Num.N2 < Num.menor) && (Num.N2 < Num.N3)){
    Num.menor = Num.N2;
  }else if((Num.N3 < Num.menor) && (Num.N3 < Num.N2))
    Num.menor = Num.N3;

    return Num;
  }

int main(){

  num Num = processavalores();

  printf("triangulo = %i\n", Num.aux);
  printf("maior %i\n", Num.maior);
  printf("menor %i\n", Num.menor);

  return 0;
}
