//gerador de palavras automaticas com margem de erro
//alunos: Rodrigo silva, João brás
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include<string.h>

typedef struct composicao{
  char vogais[5];
  char consoantes[17];
  char palavras[100];
}composicao;

composicao alfabeto;

void inciastruct(){

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
  alfabeto.consoantes[15] = 'r';
}

composicao duassilabas(int quant){
	

  int i, x, j, l = 1;
  srand(time(NULL));
  
  	j = (rand() % 15) + (1);

    alfabeto.palavras[l] = alfabeto.consoantes[j];
    if(alfabeto.palavras[1] == 'b'){
      l++;
      x = (rand() % 4) + (1);
      alfabeto.palavras[l] = alfabeto.vogais[x];
      j = (rand() % 3) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.consoantes[j];
      x = (rand() % 3) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.vogais[x];
      l++;
    }else if(alfabeto.palavras[1] == 'c'){
      l++;
      x = (rand() % 1) + (1);

      alfabeto.palavras[l] = alfabeto.vogais[x];
      j = (rand() % 11) + (8);
      l++;
      alfabeto.palavras[l] = alfabeto.consoantes[j];
      x = (rand() % 2) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.vogais[x];
      l++;
    }else if(alfabeto.palavras[1] == 'd'){
      l++;
      x = (rand() % 3) + (1);
      alfabeto.palavras[l] = alfabeto.vogais[x];
      j = (rand() % 4) + (3);
      l++;
      alfabeto.palavras[l] = alfabeto.consoantes[j];
      x = (rand() % 3) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.vogais[x];
      l++;
    }else if(alfabeto.palavras[1] == 'f'){
      l++;
      x = (rand() % 3) + (3);
      alfabeto.palavras[l] = alfabeto.vogais[x];
      j = (rand() % 2) + (2);
      l++;
      alfabeto.palavras[l] = alfabeto.consoantes[j];
      x = (rand() % 2) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.vogais[x];
      l++;
    }else if(alfabeto.palavras[1] == 'g'){
      l++;
      x = (rand() % 1) + (1);
      alfabeto.palavras[l] = alfabeto.vogais[x];
      j = (rand() % 4) + (3);
      l++;
      alfabeto.palavras[l] = alfabeto.consoantes[j];
      x = (rand() % 3) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.vogais[x];
      l++;
    }else if(alfabeto.palavras[1] == 'j'){
      l++;
      x = (rand() % 2) + (1);
      alfabeto.palavras[l] = alfabeto.vogais[x];
      j = (rand() % 4) + (3);
      l++;
      alfabeto.palavras[l] = alfabeto.consoantes[j];
      x = (rand() % 2) + (2);
      l++;
      alfabeto.palavras[l] = alfabeto.vogais[x];
      l++;
    }else if(alfabeto.palavras[1] == 'l'){
      l++;
      x = (rand() % 4) + (1);
      alfabeto.palavras[l] = alfabeto.vogais[x];
      j = (rand() % 7) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.consoantes[j];
      x = (rand() % 3) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.vogais[x];
      l++;
    }else if(alfabeto.palavras[1] == 'm'){
      l++;
      x = (rand() % 2) + (1);
      alfabeto.palavras[l] = alfabeto.vogais[x];
      j = (rand() % 9) + (8);
      l++;
      alfabeto.palavras[l] = alfabeto.consoantes[j];
      x = (rand() % 3) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.vogais[x];
      l++;
    }else if(alfabeto.palavras[1] == 'p'){
      l++;
      x = (rand() % 3) + (1);
      alfabeto.palavras[l] = alfabeto.vogais[x];
      j = (rand() % 9) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.consoantes[j];
      x = (rand() % 3) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.vogais[x];
      l++;
    }else if(alfabeto.palavras[1] == 'r'){
      l++;
      x = (rand() % 3) + (1);
      alfabeto.palavras[l] = alfabeto.vogais[x];
      j = (rand() % 9) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.consoantes[j];
      x = (rand() % 3) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.vogais[x];
      l++;
    }else if(alfabeto.palavras[1] == 's'){
      l++;
      x = (rand() % 3) + (1);
      alfabeto.palavras[l] = alfabeto.vogais[x];
      j = (rand() % 9) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.consoantes[j];
      x = (rand() % 4) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.vogais[x];
      l++;
    }
  return alfabeto;
}

composicao tressilabas(int quant){
	
  int i, x, j, l = 1;
  srand(time(NULL));
  
  	j = (rand() % 15) + (1);

    alfabeto.palavras[l] = alfabeto.consoantes[j];
    if(alfabeto.palavras[1] == 'b'){
      l++;
      x = (rand() % 4) + (1);
      alfabeto.palavras[l] = alfabeto.vogais[x];
      j = (rand() % 3) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.consoantes[j];
      x = (rand() % 3) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.vogais[x];
      l++;
    }else if(alfabeto.palavras[1] == 'c'){
      l++;
      x = (rand() % 1) + (1);

      alfabeto.palavras[l] = alfabeto.vogais[x];
      j = (rand() % 11) + (8);
      l++;
      alfabeto.palavras[l] = alfabeto.consoantes[j];
      x = (rand() % 2) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.vogais[x];
      l++;
    }else if(alfabeto.palavras[1] == 'd'){
      l++;
      x = (rand() % 3) + (1);
      alfabeto.palavras[l] = alfabeto.vogais[x];
      j = (rand() % 4) + (3);
      l++;
      alfabeto.palavras[l] = alfabeto.consoantes[j];
      x = (rand() % 3) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.vogais[x];
      l++;
    }else if(alfabeto.palavras[1] == 'f'){
      l++;
      x = (rand() % 3) + (3);
      alfabeto.palavras[l] = alfabeto.vogais[x];
      j = (rand() % 2) + (2);
      l++;
      alfabeto.palavras[l] = alfabeto.consoantes[j];
      x = (rand() % 2) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.vogais[x];
      l++;
    }else if(alfabeto.palavras[1] == 'g'){
      l++;
      x = (rand() % 1) + (1);
      alfabeto.palavras[l] = alfabeto.vogais[x];
      j = (rand() % 4) + (3);
      l++;
      alfabeto.palavras[l] = alfabeto.consoantes[j];
      x = (rand() % 3) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.vogais[x];
      l++;
    }else if(alfabeto.palavras[1] == 'j'){
      l++;
      x = (rand() % 2) + (1);
      alfabeto.palavras[l] = alfabeto.vogais[x];
      j = (rand() % 4) + (3);
      l++;
      alfabeto.palavras[l] = alfabeto.consoantes[j];
      x = (rand() % 2) + (2);
      l++;
      alfabeto.palavras[l] = alfabeto.vogais[x];
      l++;
    }else if(alfabeto.palavras[1] == 'l'){
      l++;
      x = (rand() % 4) + (1);
      alfabeto.palavras[l] = alfabeto.vogais[x];
      j = (rand() % 7) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.consoantes[j];
      x = (rand() % 3) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.vogais[x];
      l++;
    }else if(alfabeto.palavras[1] == 'm'){
      l++;
      x = (rand() % 2) + (1);
      alfabeto.palavras[l] = alfabeto.vogais[x];
      j = (rand() % 9) + (8);
      l++;
      alfabeto.palavras[l] = alfabeto.consoantes[j];
      x = (rand() % 3) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.vogais[x];
      l++;
    }else if(alfabeto.palavras[1] == 'p'){
      l++;
      x = (rand() % 3) + (1);
      alfabeto.palavras[l] = alfabeto.vogais[x];
      j = (rand() % 9) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.consoantes[j];
      x = (rand() % 3) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.vogais[x];
      l++;
    }else if(alfabeto.palavras[1] == 'r'){
      l++;
      x = (rand() % 3) + (1);
      alfabeto.palavras[l] = alfabeto.vogais[x];
      j = (rand() % 9) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.consoantes[j];
      x = (rand() % 3) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.vogais[x];
      l++;
    }else if(alfabeto.palavras[1] == 's'){
      l++;
      x = (rand() % 3) + (1);
      alfabeto.palavras[l] = alfabeto.vogais[x];
      j = (rand() % 9) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.consoantes[j];
      x = (rand() % 4) + (1);
      l++;
      alfabeto.palavras[l] = alfabeto.vogais[x];
      l++;
    }
  return alfabeto;
}

int compara(composicao comp){
	int i, x;
	
	char palavra[5], banco[5];
		for(i = 0; i <5; i++){
		palavra[i] = comp.palavras[i];
		printf("%c", palavra[i]);
	}
	
	
	FILE *file;
    file = fopen("2sila.txt", "r");

    if (file == NULL) {
        printf("\nO arquivo não foi aberto!");
        exit(0);
    }

    	while( (fscanf(file, "%s", &banco)) != EOF ) {
        	if ( (strcmp(banco, palavra) == 0)) {
            	x++;
        	}
    	}
    	

    	fclose(file);
	return x;	
}

int main(){

  int quantidade, i, l, y, acerto;
  inciastruct();
  printf("digite a quantidade de palavras desejada de 1 a 20:");
  scanf("%i", &quantidade);
  quantidade = (quantidade * 4) +  1;

  for(i=0; i<quantidade; i++){
    composicao coreto = duassilabas(quantidade);
    //printf("%c", coreto.palavras[y]);
    y++;
    if(i % 4 == 0){
    acerto = compara(coreto);
      y=1;
      printf("\n");
    }
    sleep(01);
  }
  
  printf("acertos> %i", acerto);


  return 0;
}
