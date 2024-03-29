/*
 ============================================================================
 Instituição: IESB
 Disciplina : Algoritmos e Programação de Computadores I (APCI)
 Objetivo   : Fornecer conhecimentos e práticas em programação na linguagem C.
 Professor  : Bruno Miranda [bruno.marcos@iesb.edu.br]
 Data       : Mar2024

 Algoritmo  : Calculo da media final na disciplina APCI

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  // declaracao de variaveis
  float total_pontos_AA1 = 0.0;
  float total_pontos_AA2 = 0.0;
  float nota_P1 = 0.0;
  float nota_P2 = 0.0;
  float nota_A1 = 0.0;
  float nota_A2 = 0.0;
  float media_final = 0.0;

  // declaracao das constantes
  const float MEDIA_REFERENCIA = 5.0;
  const float PESO_A1 = 0.4;
  const float PESO_A2 = 0.6;

  // leitura dos valores na console
  printf(">> Digite a sua nota da P1: ");
  scanf("%f", &nota_P1);

  printf(">> Digite a soma de pontos das suas AA1:");
  scanf("%f", &total_pontos_AA1);

  printf(">> Digite a sua nota da P2: ");
  scanf("%f", &nota_P2);

  printf(">> Digite a soma de pontos das suas AA2:");
  scanf("%f", &total_pontos_AA2);

  // calculo das notas A1 e A2
  nota_A1 = nota_P1 + total_pontos_AA1;
  nota_A2 = nota_P2 + total_pontos_AA2;

  // calculo da media final do aluno
  media_final = (PESO_A1 * nota_A1) + (PESO_A2 * nota_A2);

  // exibicao do relatorio final de notas
  printf("\n# # #	   RELATORIO DE NOTAS    # # #");
  printf("\n============================================================================");
  printf("\nSua nota A1 foi:     %.1lf", nota_A1);
  printf("\nSua nota A2 foi:     %.1lf", nota_A2);
  printf("\nSua media final foi: %.1lf", media_final);
  printf("\n============================================================================");

  // processamento da mencao final do aluno
  if(media_final < MEDIA_REFERENCIA){

    printf("\nInfelizmente você não foi aprovado!");

  }else if(media_final > MEDIA_REFERENCIA && media_final < 7.0){

    printf("\nVocê foi aprovado e sua menção foi MM.");

  }else if(media_final > MEDIA_REFERENCIA && media_final > 7.0 && media_final < 9.0){

    printf("\nVocê foi aprovado e sua menção foi MS.");

  }else{

    printf("\nParabéns! Você foi aprovado e sua menção foi SS!");

  }

  return 0;
}