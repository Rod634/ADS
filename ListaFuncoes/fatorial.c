#include <stdio.h>
#include <stdlib.h>

int fatorial(int *num){

    int aux, fat = 1;
    aux = *num;

    if(*num < 0){
      return 0;
    }else{
      while (aux > 0){
          fat = fat * aux;
          aux--;
      }
    }
  return fat;
}

int main() {

    int num, fat;

    printf("Digite um valor inteiro: \n");
    scanf("%i", &num);
    fat = fatorial(&num);
    if(fat <=0){
      printf("nao foi possivel calcular o fatorial\n");
    }else{
      printf("fatorial do numero %i : %i \n", num, fat);
    }
  return 0;
}
