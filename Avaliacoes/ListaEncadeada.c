#include <stdio.h>
#include <stdlib.h>

typedef struct no{
  int conteudo;
  struct no *prox;
}*LISTA;

typedef struct no2{
  int conteudo;
  struct no2 *prox;
}*LISTA2;

LISTA lista = NULL;
LISTA2 lista2 = NULL;
int quant1 = 0;
int quant2 = 0;

void inserirItem(LISTA *lista, int conteudo){
  LISTA novo = (LISTA) malloc(sizeof(struct no));
  novo->conteudo = conteudo;
  novo->prox = *lista;
  *lista = novo;
  quant1++;
}
void inserirItem2(LISTA2 *lista2, int conteudo){
  LISTA2 novo = (LISTA2) malloc(sizeof(struct no));
  novo->conteudo = conteudo;
  novo->prox = *lista2;
  *lista2 = novo;
  quant2++;
}
void imprimeLista(LISTA listaTemp){
  while (listaTemp!=NULL) {
    printf("%i\n",listaTemp->conteudo);
    listaTemp = listaTemp->prox;
  }
}
void imprimeLista2(LISTA2 listaTemp){
  while (listaTemp!=NULL) {
    printf("%i\n",listaTemp->conteudo);
    listaTemp = listaTemp->prox;
  }
}
void somalistas(LISTA soma1, LISTA2 soma2){
  int tam, i= 1;
  if(quant1 > quant2){
    int v[quant1];
    while(soma1!=NULL){
      v[i] = soma1->conteudo;
      soma1 = soma1->prox;
      i++;
    }
    i = 1;
    while(soma2!=NULL){
      v[i] += soma2->conteudo;
      soma2 = soma2->prox;
      i++;
    }
    while(quant1 > 0){
      printf("%i\n", v[quant1]);
      quant1--;
    }
  }else if(quant2 > quant1){
    i=1;
    int v[quant2];
    while(soma2!=NULL){
      v[i] = soma2->conteudo;
      soma2 = soma2->prox;
      i++;
    }
    i=1;
    while(soma1!=NULL){
      v[i] += soma1->conteudo;
      soma1= soma1->prox;
      i++;
    }
    while(quant2 >0){
      printf("%i\n", v[quant2]);
      quant2--;
    }
  }else{
    while(soma1!=NULL){
      soma1->conteudo += soma2->conteudo;
      printf("%i\n", soma1->conteudo);
      soma1 = soma1->prox;
      soma2 = soma2->prox;
    }
  }
}
int main(){
  int op, conteudo;

  do {
    printf("1 inserir na lista 1\n");
    printf("2 inserir na lista 2\n");
    printf("3 imprimir lista\n");
    printf("4 somar listas\n");
    printf("0 sair\n");
    printf("\n");
    scanf("%i", &op);
    switch(op){
      case 1:{
        printf("digite o valor a ser inserido na lista 1: \n");
        scanf("%i", &conteudo);
        inserirItem(&lista, conteudo);
        break;
      }
      case 2:{
        printf("digite o valor a ser inserido na lista 2: \n");
        scanf("%i", &conteudo);
        inserirItem2(&lista2, conteudo);
        break;
      }
      case 3:{
        printf("digite a lista que deseja imprimir 1/2\n");
        scanf("%i", &conteudo);
        if(conteudo == 1){
          imprimeLista(lista);
        }else if(conteudo == 2){
          imprimeLista2(lista2);
        }else{
          printf("lista nao existe\n");
        }
        break;
      }
      case 4:{
        somalistas(lista, lista2);
      }
      case 0:{
        system("exit");
        break;
      }
    }

  }while(op!=0);

  return 0;
}
