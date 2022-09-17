// � Crie uma struct para controlar a��es de uma bolsa de valores com as seguintes informa��es:
// � Nome da empresa
// � �rea de atua��o da empresa
// � Valor atual da a��o (em reais)
// � Valor anterior
// � Varia��o da a��o em porcentagem (double), ou seja, quanto a a��o cresceu ou caiu desde a abertura da bolsa no dia.

// - Com um la�o, preencha 3 structs (vetor de structs); 
// - Imprima os campos da struct; 

// Observa��o: No c�digo abaixo o usu�rio escolhe a quantidade de empresas que ele deseja avaliar. 

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
    
    printf(" �rea de atua��o: ");
    scanf("%s", &vetor[i].areaAtuacao);
    fflush(stdin); 
  
    printf(" Valor atual de a��o: R$ ");
    scanf("%f", &vetor[i].valorAtual);

    printf(" Valor de a��o anterior: R$ ");
    scanf("%f", &vetor[i].valorAnterior);

    printf("\n An�lise....\n"); 
    
    printf("\n Empresa: %s", vetor[i].nome);
    printf(" \n �rea de atua��o: %s ", vetor[i].areaAtuacao);
    printf("\n Valor de a��o atual: R$ %.2f ", vetor[i].valorAtual);
    printf("\n Valor de a��o anteior: R$ %.2f ", vetor[i].valorAnterior);

  vetor[i].variacao = (vetor[i].valorAtual -         vetor[i].valorAnterior) / vetor[i].valorAtual; 
  (vetor[i].variacao / vetor[i].valorAnterior) * 100;

  printf("\n Varia��o aproximada: %.2lf ", vetor[i].variacao);
  
  } 
}
