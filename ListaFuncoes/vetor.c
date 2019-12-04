#include<stdio.h>
#include <stdlib.h>


int ler3numeros(int *x){

    int vetor[3], i;

    for(i=0; i<1; i++){
      printf("digite 1 numero inteiro: \n");
      scanf("%i", &vetor[i]);
    }

    for(i=0; i<3; i++){
      return vetor[i];
    }

}



int main(){
    int i, x, vetor[3];
    for(i=0; i<3; i++){
      vetor[i] = ler3numeros(&x);
      x++;
    }
    for(i=0; i<3; i++){
      printf("valor da posicao %i: %i\n", i + 1, vetor[i]);
    }



  return 0;
}
