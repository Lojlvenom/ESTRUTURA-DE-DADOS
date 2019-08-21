#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

/* 
Tipos Primitivos:

Tipo				 Tamanho (em bytes)   Valores 
(signed) char				1 			  -128 a 127 
unsigned char               1             256 valores de caracteres 

bool                        1             -128 / 127 ou (unsigned) 256 numerico  

(signed) short				2		      -32.768 a 32.767 
unsigned short  			2 			  0 a 65.535 

(signed) int				4             -2.147.483.648 a 2.147.483.647 
unsigned int 			    4 			  0 a 4.294.967.295 

float 						4 			  1,2e-38 a 3,4e38 

double 						8 			  2,2e-308 a 1,8e308 

OBS:
	1: Internamente a linguagem C manipula todos os seus tipos como
	   valores NUM�RICOS por isso utiliza o operador signed para indicar 
	   a parte negativa e positiva do n�mero e unsigned para indicar
	   somente a parte positiva. O padr�o � que todas as vari�veis � 
	   signed.   
	
	2: Os valores 1,2e-38 a 3,4e38 do tipo float
       e 2,2e-308 a 1,8e308 do tipo double 
	   est�o representado por Anota��o Cient�fica   
*/


// Declara��o de vari�vel GLOBAL
int matricula=0;  

int main()
{
   /*
      Determina o idioma Portugu�s para o programa
      muito �til para poder utilizar palavras acentuadas e
      substitui o ponto pela v�rgula no sistema decimal.
   */
   setlocale(LC_ALL, "Portuguese");
 
  // Principais Tipos de dados
  // Declara��o de vari�vel LOCAL
  short  idade;
  float  peso;
  double salario;
  char   sexo;     // Representa apenas um caracter 
  char   nome[50]; // Representa uma cadeia de Caracteres, ou seja uma string
  bool   temFilhos;
  
  // Declara��o de vari�vel do tipo Constante
  const float PI = 3.1415926536;   

  /* 
    O operador sizeof(), permite saber o n�mero de bytes ocupado 
	por um determinado tipo de vari�vel. � muito usado na aloca��o
	din�mica de mem�ria.
	
	Como o operador sizeof retorna um valor inteiro podemos
	visualizar esse valor usando %d.
  */
  printf("Exibe o tamanho das vari�veis em mem�ria\n\n");
  printf("Tipos de Dados\n");
  printf("Tamanho de char   = %d bytes.\n", sizeof(char));   
  printf("Tamanho de bool   = %d bytes.\n", sizeof(bool));  
  printf("Tamanho de short  = %d bytes.\n", sizeof(short));
  printf("Tamanho de int    = %d bytes.\n", sizeof(int)); 
  printf("Tamanho de float  = %d bytes.\n", sizeof(float));
  printf("Tamanho de double = %d bytes.\n", sizeof(double)); 
  printf("Tamanho de long double = %d bytes.\n", sizeof(long double)); 

  // Atribuir valores para vari�vel
  strcpy(nome,"Jo�o da Silva Xavier");
  matricula = 1020;
  idade     = 45;
  peso      = 84.500;
  sexo      = 'M';
  salario   = 17870.50;
  temFilhos = true;
  
  // Exibir dados
  printf("\n\nExibir Dados\n\n");
  printf("\nNome         : %s",nome);
  printf("\nMatricula    : %d",matricula);
  printf("\nIdade        : %u",idade);
  printf("\nPeso (Kg)    : %.3f",peso);
  printf("\nSexo         : %c",sexo);
  printf("\nSalario (R$) : %.2f",salario);
  printf("\nTem filhos   : %d",temFilhos);
    
  // Exibir endere�o de mem�ria (RAM) das vari�veis    
  /*
    Operador (&) associado com uma vari�vel representa o endere�o
    da vari�vel associada, em mem�ria (RAM), em tempo de execu��o
    do programa.
  */ 

  printf("\n\nExibir Endere�o de Mem�ria das Vari�veis\n\n");
  printf("\nNome      : Endere�o de mem�ria da variavel em hexa: %x",&nome);
  printf("\nMatricula : Endere�o de mem�ria da variavel em hexa: %x",&matricula);
  printf("\nIdade     : Endere�o de mem�ria da variavel em hexa: %x",&idade);
  printf("\nPeso      : Endere�o de mem�ria da variavel em hexa: %x",&peso);
  printf("\nSexo      : Endere�o de mem�ria da variavel em hexa: %x",&sexo);
  printf("\nSalario   : Endere�o de mem�ria da variavel em hexa: %x",&salario);
  printf("\nTem filhos: Endere�o de mem�ria da variavel em hexa: %x",&temFilhos);

  printf("\nFim do Programa.\n");
 
 return 0; 
}
