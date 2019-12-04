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

int Validanome(Cliente *cadastro){

    int quantc = 0;

    while(cadastro->nome[quantc] != '\0'){
      quantc++;
    }

    if(quantc <= 20){
      return 0;
    }else{
      return 1;
    }


}
int validarSexo(Cliente *cadastro){

    if ((cadastro->sexo == 'f') || (cadastro->sexo == 'F') || (cadastro->sexo == 'm') || (cadastro->sexo == 'M') || (cadastro->sexo == 'o') || (cadastro->sexo == 'O')){
      return 0;
    }else{
    return 1;
  }

}
int validarCPF(Cliente *cadastro){

  int quantc = 0;

  while(cadastro->cpf[quantc] != '\0'){
    quantc++;
  }

  if(quantc == 11){
    return 0;
  }else{
    return 1;
  }

}
int validarNacimento(Cliente *cadastro){

    if (cadastro->ano >= 1900 && cadastro->ano <= 9999)
  {

      if (cadastro->mes >= 1 && cadastro->mes <= 12)
      {

          if ((cadastro->dia >= 1 && cadastro->dia <= 31) && (cadastro->mes == 1 || cadastro->mes == 3 || cadastro->mes == 5 || cadastro->mes == 7 || cadastro->mes == 8 || cadastro->mes == 10 || cadastro->mes == 12))
              return 0;
          else if ((cadastro->dia >= 1 && cadastro->dia <= 30) && (cadastro->mes == 4 || cadastro->mes == 6 || cadastro->mes == 9 || cadastro->mes == 11))
              return 0;
          else if ((cadastro->dia >= 1 && cadastro->dia <= 28) && (cadastro->mes == 2))
              return 0;
          else if (cadastro->dia == 29 && cadastro->mes == 2 && (cadastro->ano % 400 == 0 || (cadastro->ano % 4 == 0 && cadastro->ano % 100 != 0)))
              return 0;
          else
              return 1;
      }
      else
      {
          return 1;
      }
  }
  else
  {
      return 1;
  }

}

void CadastraCliente(int *vetor){

  Cliente cadastro;
  int i;

  printf("digite seu nome: \n");
  scanf("%s", &cadastro.nome);
  vetor[1] = Validanome(&cadastro);
  printf("digite seu sexo F/M/O: \n");
  getchar();
  scanf("%s", &cadastro.sexo);
  vetor[2] = validarSexo(&cadastro);
  printf("digite seu cpf: \n");
  getchar();
  scanf("%s", &cadastro.cpf);
  vetor[3] = validarCPF(&cadastro);
  printf("digite sua data de nascimento no formato (DD MM AAAA): \n");
  scanf("%i %i %i", &cadastro.dia, &cadastro.mes, &cadastro.ano);
  vetor[4] = validarNacimento(&cadastro);

}

int main(){

    int vetor[4] = {0,0,0,0};
    int i;

    CadastraCliente(vetor);

    if (vetor[1] == 1)
      printf("erro no cadastro do nome!!\n");

    if(vetor[2] == 1)
      printf("erro na escolha do sexo!!\n");

    if(vetor[3] == 1)
      printf("erro no cadastro do cpf!!\n");

    if(vetor[4]== 1)
      printf("erro na data de nascimento\n");

    if((vetor[0] == 0) && (vetor[1] == 0) && (vetor[2] == 0) && (vetor[3] == 0) && (vetor[4] == 0)){
      printf("\ncadastro feito com sucesso\n");
    }

  return 0;
}
