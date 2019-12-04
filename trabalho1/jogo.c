#include <stdio.h>
#include <stdlib.h>


void jogo(char tabuleiro[9]){
  system("clear");
  printf("  1    2    3\n");
  printf("A  %c| %c | %c \n", tabuleiro[0], tabuleiro[1], tabuleiro[2]);
  printf("   ----------\n");
  printf("B  %c | %c | %c\n", tabuleiro[3], tabuleiro[4], tabuleiro[5]);
  printf("   ----------\n");
  printf("C  %c | %c | %c\n\n", tabuleiro[6], tabuleiro[7], tabuleiro[8]);

}

int main(){

  char tabuleiro[9];
  int posi, cont = 0, jogada = 0, i, jogador= 1;
  char play[2];

      for(i=0; i<=8; i++){
        tabuleiro[i] = ' ';
  }

    do{
      jogo(tabuleiro);
      printf("vez do jogador %i:\n", jogador);
      scanf("%c%c",&play[0], &play[1]);
      
      if(play[0] == 'A' && play[1] == '1'){posi = 1;}
      if(play[0] == 'A' && play[1] == '2'){posi = 2;}
      if(play[0] == 'A' && play[1] == '3'){posi = 3;}
      if(play[0] == 'B' && play[1] == '1'){posi = 4;}
      if(play[0] == 'B' && play[1] == '2'){posi = 5;}
      if(play[0] == 'B' && play[1] == '3'){posi = 6;}
      if(play[0] == 'C' && play[1] == '1'){posi = 7;}
      if(play[0] == 'C' && play[1] == '2'){posi = 8;}
      if(play[0] == 'C' && play[1] == '3'){posi = 9;}

      if(posi < 1 || posi > 9){
          posi = 0;
      }else if(tabuleiro[posi-1] != ' '){
          posi = 0;
       }else{
        if(jogada %2 == 0){
          tabuleiro[posi-1] = 'X';
          jogador++;
        }else{
          tabuleiro[posi-1] = 'O';
          jogador--;
        }
        cont++;
        jogada++;
      }

      if(tabuleiro[0] == 'O' && tabuleiro[1] == 'O' && tabuleiro[2] == 'O'){cont = 12;}
      if(tabuleiro[3] == 'O' && tabuleiro[4] == 'O' && tabuleiro[5] == 'O'){cont = 12;}
      if(tabuleiro[6] == 'O' && tabuleiro[7] == 'O' && tabuleiro[8] == 'O'){cont = 12;}
      if(tabuleiro[0] == 'O' && tabuleiro[3] == 'O' && tabuleiro[6] == 'O'){cont = 12;}
      if(tabuleiro[1] == 'O' && tabuleiro[4] == 'O' && tabuleiro[7] == 'O'){cont = 12;}
      if(tabuleiro[2] == 'O' && tabuleiro[5] == 'O' && tabuleiro[8] == 'O'){cont = 12;}
      if(tabuleiro[0] == 'O' && tabuleiro[4] == 'O' && tabuleiro[8] == 'O'){cont = 12;}
      if(tabuleiro[2] == 'O' && tabuleiro[4] == 'O' && tabuleiro[6] == 'O'){cont = 12;}

      if(tabuleiro[0] == 'X' && tabuleiro[1] == 'X' && tabuleiro[2] == 'X'){cont = 11;}
      if(tabuleiro[3] == 'X' && tabuleiro[4] == 'X' && tabuleiro[5] == 'X'){cont = 11;}
      if(tabuleiro[6] == 'X' && tabuleiro[7] == 'X' && tabuleiro[8] == 'X'){cont = 11;}
      if(tabuleiro[0] == 'X' && tabuleiro[3] == 'X' && tabuleiro[6] == 'X'){cont = 11;}
      if(tabuleiro[1] == 'X' && tabuleiro[4] == 'X' && tabuleiro[7] == 'X'){cont = 11;}
      if(tabuleiro[2] == 'X' && tabuleiro[5] == 'X' && tabuleiro[8] == 'X'){cont = 11;}
      if(tabuleiro[0] == 'X' && tabuleiro[4] == 'X' && tabuleiro[8] == 'X'){cont = 11;}
      if(tabuleiro[2] == 'X' && tabuleiro[4] == 'X' && tabuleiro[6] == 'X'){cont = 11;}

    }while(cont <= 9);
    jogo(tabuleiro);
    if(cont == 11){
      printf("jogador 1 (X) venceu\n");
    }else if(cont == 12){
      printf("Jogador 2 (O) venceu\n");
    }
    if(cont == 10){
      printf("sem vencedores :(\n");
    }

  return 0;
}
