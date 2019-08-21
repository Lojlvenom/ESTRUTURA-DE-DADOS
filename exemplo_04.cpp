/*

Entrada de Dados:

scanf:

A  A função scanf opera, de forma similar à printf, sobre um fluxo de caracteres, 
mas agora trata-se de um “fluxo de entrada”. Os caracteres obtidos na “entrada” 
(em geral a scanf opera sobre um fluxo de caracteres oriundo do teclado). 
devem ser tratados (ou convertidos e atribuidos aos demais argumentos) 
de acordo com os caracteres do primeiro argumento. A especificação e implementação da scanf() 
espera que sejam fornecidos como parâmetros o endereço das variáveis onde devem ser 
armazenados os valores obtidos no fluxo de entrada. A forma mais simples de especificar 
que queremos atribuir um certo valor à variável X é usar a 
expressão &X (E comercial X, ou no jargão da linguagem C: endereço de X):

Ex: scanf("%f", &nota);

As formatações de entrada (%c, %d, %f, etc) são iguais ao prinft
*/

/// ********************** ATENÇÃO ************************************************************

/*
------------------------------------------------------------------------------------------------
O tipo de dados String por se tratar de um conjunto de caracteres (vetor de caracter) apresenta
comportamento diferente ao usutiliar o scanf("%s", nome), por exemplo. Quando se tratar do tipo
String será utilizada a função gets(nomeVariavelString)

Ex: gets(nomeVariavelString);
------------------------------------------------------------------------------------------------ 
 Outra quesão importante na entrada de dados é que toda entrada de dados via teclado, por exemplo,
 os dados vão para uma estrutura chamada buffer e a partir dessa estrutura os comandos de entrada
 de dados trabalham para acessar os dados. Geranmente as funções de entrada de dados tais como 
 scanf, gets e outras utilizam caracteres para indicar o fim da estring como: \n, \0, e outros.
 As vezes esses caracteres de controle presentes no buffer podem alterar o funcionamento adequado
 das funções de entrada de dados, sendo necessário limpar o buffer de entrada. Umas das forma de 
 fazer este procedimento é utilizar a função:

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
