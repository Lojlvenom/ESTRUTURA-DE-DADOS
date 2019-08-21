/*

Entrada de Dados:

scanf:

A  A fun��o scanf opera, de forma similar � printf, sobre um fluxo de caracteres, 
mas agora trata-se de um �fluxo de entrada�. Os caracteres obtidos na �entrada� 
(em geral a scanf opera sobre um fluxo de caracteres oriundo do teclado). 
devem ser tratados (ou convertidos e atribuidos aos demais argumentos) 
de acordo com os caracteres do primeiro argumento. A especifica��o e implementa��o da scanf() 
espera que sejam fornecidos como par�metros o endere�o das vari�veis onde devem ser 
armazenados os valores obtidos no fluxo de entrada. A forma mais simples de especificar 
que queremos atribuir um certo valor � vari�vel X � usar a 
express�o &X (E comercial X, ou no jarg�o da linguagem C: endere�o de X):

Ex: scanf("%f", &nota);

As formata��es de entrada (%c, %d, %f, etc) s�o iguais ao prinft
*/

/// ********************** ATEN��O ************************************************************

/*
------------------------------------------------------------------------------------------------
O tipo de dados String por se tratar de um conjunto de caracteres (vetor de caracter) apresenta
comportamento diferente ao usutiliar o scanf("%s", nome), por exemplo. Quando se tratar do tipo
String ser� utilizada a fun��o gets(nomeVariavelString)

Ex: gets(nomeVariavelString);
------------------------------------------------------------------------------------------------ 
 Outra ques�o importante na entrada de dados � que toda entrada de dados via teclado, por exemplo,
 os dados v�o para uma estrutura chamada buffer e a partir dessa estrutura os comandos de entrada
 de dados trabalham para acessar os dados. Geranmente as fun��es de entrada de dados tais como 
 scanf, gets e outras utilizam caracteres para indicar o fim da estring como: \n, \0, e outros.
 As vezes esses caracteres de controle presentes no buffer podem alterar o funcionamento adequado
 das fun��es de entrada de dados, sendo necess�rio limpar o buffer de entrada. Umas das forma de 
 fazer este procedimento � utilizar a fun��o:

 fflush(stdin);

------------------------------------------------------------------------------------------------ 
*/


#include <stdio.h>
#include <string.h>

int main ()
 {
  int    matricula;
  short  idade;
  float  peso;
  double salario;
  char   sexo;     // Representa apenas um caracter 
  char   nome[50]; // Representa uma cadeia de Caracteres, ou seja uma string
  bool   temFilhos;

   printf("\nEntre com os dados\n"); 

   printf("Matricula : ");
   scanf("%d",&matricula);
 	
   fflush(stdin);	
   printf("Nome : ");
   gets(nome);
  
   printf("Idade : ");
   scanf("%u",&idade);
  
   printf("Peso : ");
   scanf("%f",&peso);
 
   printf("Salario : ");
   scanf("%f",&salario);
  
   fflush(stdin);
   printf("Sexo (M/F): ");
   sexo = getchar();
   
   printf("Tem filhos (S/N): ");
   scanf("%d",&temFilhos);
   
   return(0);
}
