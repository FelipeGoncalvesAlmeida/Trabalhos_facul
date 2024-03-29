// Cabeçalho
// Autor: Felipe Gonçalves de Almeida
// Objetivo: Calcular o salário de um funcionário
// Data: 28/03/2024

#include <stdio.h>

int main(void) {


int ano_contrataçao, ano_atual, salario_base ;
  const char porc_bonus = 0.02 ;
  const char reajuste = 0.05;
  
  printf("Digite o ano de contratação: ");
  scanf("%d",& ano_contrataçao);

  printf("Digite o ano atual: ");
  scanf("%d", &ano_atual);

  printf("Digite o salário base: ");
  scanf("%d", &salario_base);

  if (ano_atual == ano_contrataçao ) {
    printf ("Para calcuar seu aumento, seu ano de contratação não deve ser o mesmo do ano atual");
  }

  
  int i;
  for (i = ano_contrataçao; i <= ano_atual; i++) {
    salario_base = salario_base + (salario_base * porc_bonus);

  }
    
   
  
  printf( "Seu salario atual é : %d", salario_base); 
  



}