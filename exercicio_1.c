// - Escreva um programa que cadastre o nome, a matrícula e duas notas de 5 alunos.
// - Em seguida imprima a matrícula, o nome e a média de cada um deles.

// Observação: No código abaixo o usuário escolhe a quantidade de cadastros que ele deseja realizar. 

#include <stdio.h>
#include <stdlib.h> 
#include <locale.h> 

typedef struct Aluno {
  char nome[40]; 
  int matricula; 
  float nota1; 
  float nota2; 
  float media; 
}; 

int main() {
  setlocale(LC_ALL,"Portuguese"); 
  
  struct Aluno aluno; 
  
  int quantAlunos; 
  int cont; 

  printf("\n\n----- Cadastro de Alunos ----- \n"); 

  printf("\n Insira a quantidade de alunos que serão cadastrados: "); 
  scanf("%d", &quantAlunos); 
  
  for (cont = 0; cont < quantAlunos; cont++) {
   
    printf("\n\n Nome do aluno: "); 
    scanf("%s", &aluno.nome); 
    fflush(stdin); 
    
    printf(" Matrícula: "); 
    scanf("%d", &aluno.matricula); 

    printf(" Primeira nota: "); 
    scanf("%f", &aluno.nota1); 

    printf(" Segunda nota: "); 
    scanf("%f", &aluno.nota2); 

    aluno.media = (aluno.nota1 + aluno.nota2) / 2; 
 
    printf("\n Cadastro realizado com sucesso..."); 
    printf("\n\n Aluno: %s", aluno.nome); 
    printf("\n Matrícula: %d", aluno.matricula);
    printf("\n Primeira nota: %.2f", aluno.nota1);
    printf("\n Segunda nota: %.2f", aluno.nota2); 

    printf("\n Média: %.2f ", aluno.media); 
    
  } 
}
