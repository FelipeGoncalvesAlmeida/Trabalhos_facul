// Cabeçalho
// Autor: Felipe Gonçalves de Almeida
// Objetivo: Calcular o salário atual 
// Data: 28/03/2024

#include <stdio.h>

int main(void) {


int ano_contrataçao, ano_atual ;
  const float porc_bonus = 0.02;
  const float reajuste = 0.05;
  float salario_base;
  
  printf("Digite o ano de contratação: ");
  scanf("%d",& ano_contrataçao);

  printf("Digite o ano atual: ");
  scanf("%d", &ano_atual);

  printf("Digite o salário base: ");
  scanf("%f", &salario_base);

  if (ano_atual == ano_contrataçao ) {
    printf (">> Para calcuar seu aumento, seu ano de contratação não deve ser o mesmo do ano atual\n");
     printf("\nEste algoritmo foi desenvolvido pelo aluno Felipe Gonçalves de Almeida, sua matrícula é 2412130044 ");
    
    return 0;
  }

  int i;
  for (i = ano_contrataçao +1 ; i <= ano_atual; i++) {
    salario_base = salario_base + (salario_base * porc_bonus) + 
    (salario_base * reajuste);
  }
    
  printf( "Seu salario atual é : %.2lf\n", salario_base); 

  printf("\nEste algoritmo foi desenvolvido pelo aluno Felipe Gonçalves de Almeida, sua matrícula é 2412130044 ");

  return 0;

}
