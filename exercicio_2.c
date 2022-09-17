// – Crie uma struct para controlar ações de uma bolsa de valores com as seguintes informações:
// • Nome da empresa
// • Área de atuação da empresa
// • Valor atual da ação (em reais)
// • Valor anterior
// • Variação da ação em porcentagem (double), ou seja, quanto a ação cresceu ou caiu desde a abertura da bolsa no dia.

// - Com um laço, preencha 3 structs (vetor de structs); 
// - Imprima os campos da struct; 

// Observação: No código abaixo o usuário escolhe a quantidade de empresas que ele deseja avaliar. 

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <locale.h>
 
typedef struct {
  char nome[40];
  char areaAtuacao[40]; 
  float valorAtual; 
  float valorAnterior; 
  double variacao; 

}Empresa; 
 
int main() {
  setlocale(LC_ALL,"portuguese");

  printf("\n----- Controle Bolsa de Valores -----\n"); 
  
  int quantEmpresas; 
  printf("\n Insira a quantidade de empresas a serem analisadas: "); 
  scanf("%d", &quantEmpresas); 
  
  Empresa vetor[quantEmpresas];
  int i = 0;

  for(i=0; i<quantEmpresas; i++) {
    printf("\n\n Nome da empresa:  ");
    scanf("%s", &vetor[i].nome);
    fflush(stdin); 
    
    printf(" Área de atuação: ");
    scanf("%s", &vetor[i].areaAtuacao);
    fflush(stdin); 
  
    printf(" Valor atual de ação: R$ ");
    scanf("%f", &vetor[i].valorAtual);

    printf(" Valor de ação anterior: R$ ");
    scanf("%f", &vetor[i].valorAnterior);

    printf("\n Análise....\n"); 
    
    printf("\n Empresa: %s", vetor[i].nome);
    printf(" \n Área de atuação: %s ", vetor[i].areaAtuacao);
    printf("\n Valor de ação atual: R$ %.2f ", vetor[i].valorAtual);
    printf("\n Valor de ação anteior: R$ %.2f ", vetor[i].valorAnterior);

  vetor[i].variacao = (vetor[i].valorAtual -         vetor[i].valorAnterior) / vetor[i].valorAtual; 
  (vetor[i].variacao / vetor[i].valorAnterior) * 100;

  printf("\n Variação aproximada: %.2lf ", vetor[i].variacao);
  
  } 
}
