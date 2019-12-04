#include <stdio.h>
#include <stdlib.h>

typedef struct cliente{

  char nome[20];
  char sexo;
  char cpf[12];
  int dia;
  int mes;
  int ano;

}Cliente;

Cliente CadastraCliente(Cliente cadastro){

  printf("digite seu nome: \n");
  scanf("%s", &cadastro.nome);
  printf("digite seu sexo f ou m: \n");
  getchar();
  scanf("%s", &cadastro.sexo);
  printf("digite seu cpf: \n");
  getchar();
  scanf("%s", &cadastro.cpf);
  printf("digite seu dia de nascimento: \n");
  scanf("%i", &cadastro.dia);
  printf("digite seu mes de nascimento: \n");
  scanf("%i", &cadastro.mes);
  printf("digite seu ano de nascimento: \n");
  scanf("%i", &cadastro.ano);

  return cadastro;
}

int main(){


  Cliente cadastro = CadastraCliente(cadastro);

  system("clear");
  printf("nome: %s\n", cadastro.nome);
  printf("cpf: % s\n", cadastro.cpf);
  printf("sexo: %c \n", cadastro.sexo);
  printf("data de nascimento: %i/%i/%i\n", cadastro.dia, cadastro.mes, cadastro.ano);



  return 0;
}
