//gerador de palavras automaticas com margem de erro
//alunos: Rodrigo silva, Joao bras
#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include <string.h>

typedef struct composicao {
  char vogais[5];
  char consoantes[17];
  char palavras[100];
}
composicao;

composicao alfabeto;

void inicializar(char banco[], int tam) {
  int i;
  for (i = 0; i < tam; i++)
    banco[i] = '\0';
}

void inciastruct() {

  alfabeto.vogais[1] = 'a';
  alfabeto.vogais[2] = 'o';
  alfabeto.vogais[3] = 'e';
  alfabeto.vogais[4] = 'i';
  alfabeto.vogais[5] = 'u';
  alfabeto.consoantes[1] = 'b';
  alfabeto.consoantes[2] = 'c';
  alfabeto.consoantes[3] = 'l';
  alfabeto.consoantes[4] = 'd';
  alfabeto.consoantes[5] = 't';
  alfabeto.consoantes[6] = 'g';
  alfabeto.consoantes[7] = 'j';
  alfabeto.consoantes[8] = 'm';
  alfabeto.consoantes[9] = 'p';
  alfabeto.consoantes[10] = 's';
  alfabeto.consoantes[11] = 'v';
  alfabeto.consoantes[12] = 'n';
  alfabeto.consoantes[14] = 'q';
  alfabeto.consoantes[15] = 'f';
  alfabeto.consoantes[13] = 'r';
}

int compara(int opcao, int tam) {

  FILE * file;
  if (opcao == 1)
    file = fopen("feminino.txt", "r");
  else if (opcao == 2)
    file = fopen("afirma.txt", "r");
  else if (opcao == 3)
    file = fopen("masculino.txt", "r");

  if (!file) {
    printf("erro ao abrir");
    return 0;
  }
  int i = 0, verifica = 2;
  char banco[tam];
  char palavra[tam];
  palavra[5] = '\0';
  inicializar(banco, tam);

  for (i = 0; i < tam; i++) {
    palavra[i] = alfabeto.palavras[i];
  }

  while (fgets(banco, tam, file) != NULL) {
    verifica = strcmp(palavra, banco);
    if (verifica == 0) {
      for (i = 0; i < tam; i++) {
        printf("%c", palavra[i]);
      }
      printf(" ");
      return 1;
    }
  }
  fclose(file);
  return 0;
}

void duassilabas(int quant, int aux) {
  int valida, i, k = 0;

  do {
    alfabeto.palavras[0] = alfabeto.consoantes[(rand() % 15) + (1)];
    if (alfabeto.palavras[0] == 'b') {
      alfabeto.palavras[1] = alfabeto.vogais[(rand() % 4) + (1)];
      alfabeto.palavras[2] = alfabeto.consoantes[(rand() % 3) + (1)];
      alfabeto.palavras[3] = alfabeto.vogais[(rand() % 3) + (1)];
      valida = compara(1, 5);
      if (valida == 1) {
        k++;
      }
    } else if (alfabeto.palavras[0] == 'c') {
      alfabeto.palavras[1] = alfabeto.vogais[1];
      alfabeto.palavras[2] = alfabeto.consoantes[(rand() % 11) + (8)];
      alfabeto.palavras[3] = alfabeto.vogais[(rand() % 2) + (1)];
      valida = compara(1, 5);
      if (valida == 1) {
        k++;
      }
    } else if (alfabeto.palavras[0] == 'd') {
      alfabeto.palavras[1] = alfabeto.vogais[(rand() % 3) + (1)];
      alfabeto.palavras[2] = alfabeto.consoantes[(rand() % 4) + (3)];
      alfabeto.palavras[3] = alfabeto.vogais[(rand() % 3) + (1)];
      valida = compara(1, 5);
      if (valida == 1) {
        k++;
      }
    } else if (alfabeto.palavras[0] == 'f') {
      alfabeto.palavras[1] = alfabeto.vogais[(rand() % 3) + (3)];
      alfabeto.palavras[2] = alfabeto.consoantes[(rand() % 2) + (2)];
      alfabeto.palavras[3] = alfabeto.vogais[(rand() % 2) + (1)];
      valida = compara(1, 5);
      if (valida == 1) {
        k++;
      }
    } else if (alfabeto.palavras[0] == 'g') {
      alfabeto.palavras[1] = alfabeto.vogais[1];
      alfabeto.palavras[2] = alfabeto.consoantes[(rand() % 4) + (3)];
      alfabeto.palavras[3] = alfabeto.vogais[(rand() % 3) + (1)];
      valida = compara(1, 5);
      if (valida == 1) {
        k++;
      }
    } else if (alfabeto.palavras[0] == 'j') {
      alfabeto.palavras[1] = alfabeto.vogais[(rand() % 2) + (1)];
      alfabeto.palavras[2] = alfabeto.consoantes[(rand() % 4) + (3)];
      alfabeto.palavras[3] = alfabeto.vogais[(rand() % 2) + (2)];
      valida = compara(1, 5);
      if (valida == 1) {
        k++;
      }
    } else if (alfabeto.palavras[0] == 'l') {
      alfabeto.palavras[1] = alfabeto.vogais[(rand() % 4) + (1)];
      alfabeto.palavras[2] = alfabeto.consoantes[(rand() % 7) + (1)];
      alfabeto.palavras[3] = alfabeto.vogais[(rand() % 3) + (1)];
      valida = compara(1, 5);
      if (valida == 1) {
        k++;
      }
    } else if (alfabeto.palavras[0] == 'm') {
      alfabeto.palavras[1] = alfabeto.vogais[(rand() % 2) + (1)];
      alfabeto.palavras[2] = alfabeto.consoantes[(rand() % 9) + (8)];
      alfabeto.palavras[3] = alfabeto.vogais[(rand() % 3) + (1)];
      valida = compara(1, 5);
      if (valida == 1) {
        k++;
      }
    } else if (alfabeto.palavras[0] == 'n') {
      alfabeto.palavras[1] = alfabeto.vogais[(rand() % 5) + (1)];
      alfabeto.palavras[2] = alfabeto.consoantes[(rand() % 15) + (8)];
      alfabeto.palavras[3] = alfabeto.vogais[(rand() % 5) + (1)];
      valida = compara(1, 5);
      if (valida == 1) {
        k++;
      }

    } else if (alfabeto.palavras[0] == 'p') {
      alfabeto.palavras[1] = alfabeto.vogais[(rand() % 3) + (1)];
      alfabeto.palavras[2] = alfabeto.consoantes[(rand() % 9) + (1)];
      alfabeto.palavras[3] = alfabeto.vogais[(rand() % 3) + (1)];
      valida = compara(1, 5);
      if (valida == 1) {
        k++;
      }
    } else if (alfabeto.palavras[0] == 'r') {
      alfabeto.palavras[1] = alfabeto.vogais[(rand() % 3) + (1)];
      alfabeto.palavras[2] = alfabeto.consoantes[(rand() % 9) + (1)];
      alfabeto.palavras[3] = alfabeto.vogais[(rand() % 3) + (1)];
      valida = compara(1, 5);
      if (valida == 1) {
        k++;
      }
    } else if (alfabeto.palavras[0] == 's') {
      alfabeto.palavras[1] = alfabeto.vogais[(rand() % 3) + (1)];
      alfabeto.palavras[2] = alfabeto.consoantes[(rand() % 9) + (1)];
      alfabeto.palavras[3] = alfabeto.vogais[(rand() % 4) + (1)];
      valida = compara(1, 5);
      if (valida == 1) {
        k++;
      }
    } else {
      alfabeto.palavras[0] = alfabeto.consoantes[(rand() % 15) + (1)];
      alfabeto.palavras[1] = alfabeto.vogais[(rand() % 5) + (1)];
      alfabeto.palavras[2] = alfabeto.consoantes[(rand() % 15) + (1)];
      alfabeto.palavras[3] = alfabeto.vogais[(rand() % 5) + (1)];
      valida = compara(1, 5);
      if (valida == 1) {
        k++;
      }

    }
  } while (k < aux);

}
void tressilabas(int quant, int aux) {

  int valida, k = 0;

  do {
    alfabeto.palavras[0] = alfabeto.consoantes[(rand() % 15) + (1)];
    if (alfabeto.palavras[0] == 'a') {
      alfabeto.palavras[1] = alfabeto.vogais[(rand() % 1) + (1)];
      alfabeto.palavras[2] = alfabeto.consoantes[(rand() % 3) + (1)];
      alfabeto.palavras[3] = alfabeto.vogais[(rand() % 3) + (1)];
      alfabeto.palavras[4] = alfabeto.consoantes[(rand() % 15) + (15)];
      alfabeto.palavras[5] = alfabeto.vogais[(rand() % 3) + (1)];
      valida = compara(2, 7);
      if (valida == 1) {
        k++;
      }
    } else if (alfabeto.palavras[0] == 'b') {
      alfabeto.palavras[1] = alfabeto.vogais[(rand() % 5) + (1)];
      alfabeto.palavras[2] = alfabeto.consoantes[(rand() % 5) + (1)];
      alfabeto.palavras[3] = alfabeto.vogais[(rand() % 4) + (1)];
      alfabeto.palavras[4] = alfabeto.consoantes[(rand() % 5) + (1)];
      alfabeto.palavras[5] = alfabeto.vogais[(rand() % 4) + (1)];
      valida = compara(2, 7);
      if (valida == 1) {
        k++;
      }
    } else if (alfabeto.palavras[0] == 'c') {
      alfabeto.palavras[1] = alfabeto.vogais[1];
      alfabeto.palavras[2] = alfabeto.consoantes[(rand() % 12) + (1)];
      alfabeto.palavras[3] = alfabeto.vogais[(rand() % 4) + (1)];
      alfabeto.palavras[4] = alfabeto.consoantes[(rand() % 12) + (1)];
      alfabeto.palavras[5] = alfabeto.vogais[(rand() % 4) + (1)];
      valida = compara(2, 7);
      if (valida == 1) {
        k++;
      }
    } else if (alfabeto.palavras[0] == 'd') {
      alfabeto.palavras[1] = alfabeto.vogais[(rand() % 3) + (1)];
      alfabeto.palavras[2] = alfabeto.consoantes[(rand() % 5) + (1)];
      alfabeto.palavras[3] = alfabeto.vogais[(rand() % 3) + (1)];
      alfabeto.palavras[4] = alfabeto.consoantes[(rand() % 12) + (1)];
      alfabeto.palavras[5] = alfabeto.vogais[(rand() % 3) + (1)];
      valida = compara(2, 7);
      if (valida == 1) {
        k++;
      }
    } else if (alfabeto.palavras[0] == 'f') {
      alfabeto.palavras[1] = alfabeto.vogais[(rand() % 5) + (1)];
      alfabeto.palavras[2] = alfabeto.consoantes[(rand() % 5) + (2)];
      alfabeto.palavras[3] = alfabeto.vogais[(rand() % 4) + (1)];
      alfabeto.palavras[4] = alfabeto.consoantes[(rand() % 12) + (2)];
      alfabeto.palavras[5] = alfabeto.vogais[(rand() % 3) + (1)];
      valida = compara(2, 7);
      if (valida == 1) {
        k++;
      }
    } else if (alfabeto.palavras[1] == 'g') {
      alfabeto.palavras[2] = alfabeto.vogais[(rand() % 5) + (1)];
      alfabeto.palavras[3] = alfabeto.consoantes[(rand() % 15) + (5)];
      alfabeto.palavras[4] = alfabeto.vogais[(rand() % 4) + (1)];
      alfabeto.palavras[5] = alfabeto.consoantes[(rand() % 15) + (1)];
      alfabeto.palavras[6] = alfabeto.vogais[(rand() % 5) + (1)];
      valida = compara(2, 7);
      if (valida == 1) {
        k++;
      }
    } else if (alfabeto.palavras[1] == 'j') {
      alfabeto.palavras[2] = alfabeto.vogais[(rand() % 5) + (1)];
      alfabeto.palavras[3] = alfabeto.consoantes[(rand() % 12) + (3)];
      alfabeto.palavras[4] = alfabeto.vogais[(rand() % 5) + (1)];
      alfabeto.palavras[5] = alfabeto.consoantes[(rand() % 15) + (1)];
      alfabeto.palavras[6] = alfabeto.vogais[(rand() % 5) + (1)];
      valida = compara(2, 7);
      if (valida == 1) {
        k++;
      }
    } else if (alfabeto.palavras[1] == 'l') {
      alfabeto.palavras[2] = alfabeto.vogais[(rand() % 5) + (1)];
      alfabeto.palavras[3] = alfabeto.consoantes[(rand() % 12) + (1)];
      alfabeto.palavras[4] = alfabeto.vogais[(rand() % 5) + (1)];
      alfabeto.palavras[5] = alfabeto.consoantes[(rand() % 12) + (1)];
      alfabeto.palavras[6] = alfabeto.vogais[(rand() % 5) + (1)];
      valida = compara(2, 7);
      if (valida == 1) {
        k++;
      }

    } else if (alfabeto.palavras[1] == 'm') {

      alfabeto.palavras[2] = alfabeto.vogais[(rand() % 5) + (1)];
      alfabeto.palavras[3] = alfabeto.consoantes[(rand() % 12) + (3)];
      alfabeto.palavras[4] = alfabeto.vogais[(rand() % 5) + (1)];
      alfabeto.palavras[5] = alfabeto.consoantes[(rand() % 12) + (1)];
      alfabeto.palavras[6] = alfabeto.vogais[(rand() % 5) + (1)];
      valida = compara(2, 7);
      if (valida == 1) {
        k++;
      }
    } else if (alfabeto.palavras[1] == 'p') {
      alfabeto.palavras[2] = alfabeto.vogais[(rand() % 4) + (1)];
      alfabeto.palavras[3] = alfabeto.consoantes[(rand() % 10) + (2)];
      alfabeto.palavras[4] = alfabeto.vogais[(rand() % 4) + (1)];
      alfabeto.palavras[5] = alfabeto.consoantes[(rand() % 13) + (1)];
      alfabeto.palavras[6] = alfabeto.vogais[(rand() % 4) + (1)];
      valida = compara(2, 7);
      if (valida == 1) {
        k++;
      }
    } else if (alfabeto.palavras[1] == 'r') {
      alfabeto.palavras[2] = alfabeto.vogais[(rand() % 5) + (1)];
      alfabeto.palavras[3] = alfabeto.consoantes[(rand() % 16) + (1)];
      alfabeto.palavras[4] = alfabeto.vogais[(rand() % 4) + (1)];
      alfabeto.palavras[5] = alfabeto.consoantes[(rand() % 16) + (1)];
      alfabeto.palavras[6] = alfabeto.vogais[(rand() % 3) + (1)];
      valida = compara(2, 7);
      if (valida == 1) {
        k++;
      }
    } else if (alfabeto.palavras[1] == 's') {
      alfabeto.palavras[2] = alfabeto.vogais[(rand() % 5) + (1)];
      alfabeto.palavras[3] = alfabeto.consoantes[(rand() % 13) + (3)];
      alfabeto.palavras[4] = alfabeto.vogais[(rand() % 5) + (1)];
      alfabeto.palavras[5] = alfabeto.consoantes[(rand() % 16) + (1)];
      alfabeto.palavras[6] = alfabeto.vogais[(rand() % 2) + (1)];
      valida = compara(2, 7);
      if (valida == 1) {
        k++;
      }
    } else {
      alfabeto.palavras[0] = alfabeto.consoantes[(rand() % 15) + (1)];
      alfabeto.palavras[1] = alfabeto.vogais[(rand() % 5) + (1)];
      alfabeto.palavras[2] = alfabeto.consoantes[(rand() % 15) + (1)];
      alfabeto.palavras[3] = alfabeto.vogais[(rand() % 5) + (1)];
      alfabeto.palavras[4] = alfabeto.consoantes[(rand() % 15) + (1)];
      alfabeto.palavras[5] = alfabeto.vogais[(rand() % 5) + (1)];
      valida = compara(2, 7);
      if (valida == 1) {
        k++;
      }
    }
  } while (k < aux);
}

int main() {

  int quantidade, i, l, y = 1, menu;
  inciastruct();
  srand(time(NULL));
  do {
    printf("\n1 - duas silabas\n");
    printf("\n2 - tres silabas\n");
    printf("\n3 - gere frases\n");
    printf("\n0 - sair\n");
    scanf("%i", & menu);


    switch (menu) {

    case 1:
      {
        printf("\ndigite a quantidade de palavras desejada de 1 a 20:");
        scanf("%i", & quantidade);
        l = quantidade;

        quantidade = (quantidade * 4) + 1;
        for (i = 0; i < l; i++) {
          duassilabas(quantidade, l);
        }

        break;
      }

    case 2:
      {
        printf("\ndigite a quantidade de palavras desejada de 1 a 20:");
        scanf("%i", & quantidade);
        l = quantidade;

        quantidade = (quantidade * 6) + 1;
        for (i = 0; i < l; i++) {
          tressilabas(quantidade, l);
        }
        break;
      }

    case 3:
      {

        int escolha;
        escolha = (rand() % 4) + (1);

        if(escolha == 1){
          printf("\n");
          duassilabas(5, 1);
          printf("é ");
          printf("uma ");
          tressilabas(7, 1);
          printf("\n");
        }else if(escolha == 2){
          printf("\n");
          duassilabas(5, 1);
          printf("é ");
          printf("um ");
          tressilabas(7, 1);
          printf("\n");
        }else if(escolha == 3){
          printf("\n");
          duassilabas(5, 1);
          printf("seja ");
          printf("mais ");
          tressilabas(7, 1);
          printf("\n");
        }else if(escolha == 4){
          printf("\n");
          duassilabas(5, 1);
          printf("faça ");
          printf("mais ");
          tressilabas(7, 1);
          printf("\n");
        }
          break;
      }

    }

  }while (menu != 0);

return 0;
}
