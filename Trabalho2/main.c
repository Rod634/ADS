#include <stdio.h>
#include <stdlib.h>

#include "EstruturaVetores.h"

int menu();

void dobrar(int *x);

int menu(){
    int op;
    printf("Digite as opção desejada\n");
    printf("0 - Sair\n");
    printf("1 - Inserir\n");
    printf("2 - Excluir\n");
    printf("3 - Listar sem ordernacao\n");
    printf("4 - Dobrar Numero\n");
    printf("5 - Criar estrutura\n");
    printf("6 - Exluir valor\n");
    printf("7 - Listar vetor ordenado\n");
    printf("8 - Listar todos os vetores\n");
    printf("9 - Listar todos os vetores ordenados\n");
    printf("10 - Modificar o tamnho\n");
    printf("11 - Lista encadeada\n");
    scanf("%d", &op);
    return op;
}

int main(){

    int valor, posicao, tamanho, retorno, qtd;
    int i, x;
    int op;
    int sair = 0;
    int ret;
    inicializar();
    while (!sair){
        op = menu();
        switch (op){
            case 0:{//sair
                finalizar();
                sair =1;
                break;
            }
            case 1:{ //inserir
                //TODO

                printf("digite o valor e a posicao:\n");
                scanf("%i%i", &valor, &posicao);
                ret = inserirNumeroEmEstrutura(valor, posicao);
                if (ret == SUCESSO){
                	printf("Inserido com sucesso");
                }else if (ret == SEM_ESPACO){
                	printf("Sem Espaço");
                }else if (ret == SEM_ESTRUTURA_AUXILIAR){
                	printf("Sem estrutura Auxiliar");
                  printf("\nDigite o tamanho e a posicao que deseja criar\n");
                  scanf("%i%i", &tamanho, &posicao);

                  ret = criarEstruturaAuxiliar(tamanho, posicao);
                  if(ret == JA_TEM_ESTRUTURA_AUXILIAR){
                    printf("já tem estrutura na posição\n");
                  }else if(ret == POSICAO_INVALIDA){
                    printf("Posição inválida para estrutura auxiliar\n");
                  }else if(ret == SEM_ESPACO_DE_MEMORIA){
                    printf("sem espaco de memoria\n");
                  }else if(ret == TAMANHO_INVALIDO){
                    printf("o tamanho tem inteiro maior ou igual a 1\n");
                  }else if(ret == SUCESSO){
                    printf("criado com sucesso\n");
                  }
                }
                break;
            }
            case 2:{//excluirultimo
               printf("digite a posicao desejada: \n");
              scanf("%i", &posicao);

              ret = excluirNumeroDoFinaldaEstrutura(posicao);

              if(ret == SUCESSO){
                printf("excluido com sucesso\n");
              }else if(ret == ESTRUTURA_AUXILIAR_VAZIA){
                printf("estrutura vazia\n");
              }else if(ret == SEM_ESTRUTURA_AUXILIAR){
                printf("Não tem estrutura auxiliar\n");
              }else if(ret == POSICAO_INVALIDA){
                printf("Posição inválida para estrutura auxiliar\n");
              }


                break;
            }
            case 3:{//Listar

              printf("Digite a posicao da estrutura:\n");
              scanf("%i", &posicao);

              qtd = getQuantidadedePosicoesDaEstrutura(posicao);
              if(posicao < 1 || posicao > 10){
                printf("Posição inválida para estrutura auxiliar\n");
              }else{

                int vetorAux[qtd];

                retorno = getDadosEstruturaAuxiliar(posicao, vetorAux);

                if(retorno == SEM_ESTRUTURA_AUXILIAR){
                  printf("Não tem estrutura auxiliar\n");
                }else if(retorno == SUCESSO){
                  printf("valores do vetor dinamico posicao %i:\n", posicao);
                  for(i = 0; i<qtd; i++){
                    printf("valor: %i\n", vetorAux[i]);
                  }
                }
              }

              break;
            }
            case 4:{ //dobrar
                //ler um numero
                scanf("%i", &valor);
                dobrar(&valor);

                // passar para um funcao (void dobrar(...)) que recebe o numero e dobra (EstruturaVetores.c)

                printf("%i", valor);

                break;
            }
            case 5:{//criar


              break;
            }
            case 6:{//exluir especifico

              printf("digite o valor a ser excluido e a posicao:\n");
              scanf("%i%i", &valor, &posicao);

              ret = excluirNumeroEspecificoDeEstrutura(valor, posicao);

              if(ret == SUCESSO){
                printf("excluido com sucesso %i da estrutura na posicao %i\n", valor, posicao);
              }else if(ret == ESTRUTURA_AUXILIAR_VAZIA){
                printf("estrutura vazia\n");
              }else if(ret == SEM_ESTRUTURA_AUXILIAR){
                printf("Nao tem estrutura auxiliar\n");
              }else if(ret == NUMERO_INEXISTENTE){
                printf("Numero nao existe\n");
              }else if(ret == POSICAO_INVALIDA){
                printf("Posição inválida para estrutura auxiliar\n");
              }

              break;
            }
            case 7:{//listar ordenado

              int posicao, retorno, qtd;

              printf("Digite a posicao da estrutura:\n");
              scanf("%i", &posicao);

              qtd = getQuantidadedePosicoesDaEstrutura(posicao);
              if(posicao < 1 || posicao > 10){
                printf("Posição inválida para estrutura auxiliar\n");
              }else{

                int vetorAux[qtd];

                retorno = getDadosOrdenadosEstruturaAuxiliar(posicao, vetorAux);

                if(retorno == SEM_ESTRUTURA_AUXILIAR){
                  printf("Não tem estrutura auxiliar\n");
                }else if(retorno == SUCESSO){
                  printf("valores do vetor dinamico posicao %i:\n", posicao);
                  for(i = 0; i<qtd; i++){
                    printf("valor: %i\n", vetorAux[i]);
                  }
                }
              }
              break;
            }
            case 8:{//listartods

              int qtdt = getQuantidadeTotal();
              if(qtdt == 0){
                ret == SEM_ESTRUTURA_AUXILIAR;
              }else{
                int vetorAux[qtdt];
                ret = getDadosDeTodasEstruturasAuxiliares(vetorAux);
                if(ret == SEM_ESTRUTURA_AUXILIAR){
                  printf("sem estrutura auxiliar\n");
                }else if(ret == SUCESSO){
                  printf("todos os valores: \n");
                  for(i=0; i<qtdt; i++){
                    printf("valor %i\n", vetorAux[i]);
                  }
                }
                qtdt = 0;
              }

              break;
            }
            case 9:{//listartodsordena

              int qtdt = getQuantidadeTotal();
              if(qtdt == 0){
                ret = SEM_ESTRUTURA_AUXILIAR;
              }else{
                int vetorAux[qtdt];
                ret = getDadosOrdenadosDeTodasEstruturasAuxiliares(vetorAux);
                if(ret == SEM_ESTRUTURA_AUXILIAR){
                  printf("sem estrutura auxiliar\n");
                }else if(ret == SUCESSO){
                  printf("todos os valores: \n");
                  for(i=0; i<qtdt; i++){
                    printf("valor %i\n", vetorAux[i]);
                  }
                }
                qtdt = 0;
              }

              break;
            }

            case 10:{//realoc

              int novoTamanho;
              printf("digite a posicao e o novo tamnho desejado:\n");
              scanf("%i%i", &posicao, &novoTamanho);

              ret = modificarTamanhoEstruturaAuxiliar(posicao, novoTamanho);

              if(ret == SEM_ESTRUTURA_AUXILIAR){
                printf("Não tem estrutura auxiliar\n");
              }else if(ret == POSICAO_INVALIDA){
                printf("posicao invalida\n");
              }else if(ret == NOVO_TAMANHO_INVALIDO){
                printf("novo tamanho invalido\n");
              }else if(ret == SEM_ESPACO_DE_MEMORIA){
                printf("sem espaco de mermoria\n");
              }else if(ret == SUCESSO){
                printf("foi modificado corretamente o tamanho da estrutura auxiliar\n");
              }

              break;
            }
            case 11:{
                No *inicio;
                int qtdt = getQuantidadeTotal();
                int vetorAux[qtdt];
                getDadosListaEncadeadaComCabecote(inicio, vetorAux);
              break;
            }

            default:{
                printf("opcao inválida\n");
            }
        }
    }

    return 0;

}
