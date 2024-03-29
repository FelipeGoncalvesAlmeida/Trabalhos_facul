/*
*
CABEÇALHO
  Autor: Prof. Bruno Miranda
  Objetivo: Descrição do algoritmo
  Data: 26/03/2024
*
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

  // declaracao de variaveis
  int numero_inteiro;
  float numero_real;

  // declaracao de constante
  const float CONSTANTE_REAL = 5.0;

  // imprime uma mensagem
  printf("");

  // ler um valor inteiro
  scanf("%d", &numero_inteiro);

  // ler um valor real
  scanf("%f", &numero_real);

  // imprime um valor inteiro
  printf("Valor: %d", numero_inteiro);

  // imprime um valor real
  printf("Valor: %.1lf", numero_real);

  // estrutura de controle SE
  if(1 == 1){

    // comandos

  }

  // estrutura de repeticao ENQUANTO
  while(1 != 5){

    // comandos
    break;

  }

  // estrutura de repeticao PARA FAÇA
  for(int i=0; i<10; i++){

    // comandos

  }

  // finaliza o programa
  return 0;
}