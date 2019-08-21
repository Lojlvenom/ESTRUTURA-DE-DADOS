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
	   valores NUMÉRICOS por isso utiliza o operador signed para indicar 
	   a parte negativa e positiva do número e unsigned para indicar
	   somente a parte positiva. O padrão é que todas as variáveis é 
	   signed.   
	
	2: Os valores 1,2e-38 a 3,4e38 do tipo float
       e 2,2e-308 a 1,8e308 do tipo double 
	   estão representado por Anotação Científica   
*/


// Declaração de variável GLOBAL
int matricula=0;  

int main()
{
   /*
      Determina o idioma Português para o programa
      muito útil para poder utilizar palavras acentuadas e
      substitui o ponto pela vírgula no sistema decimal.
   */
   setlocale(LC_ALL, "Portuguese");
 
  // Principais Tipos de dados
  // Declaração de variável LOCAL
  short  idade;
  float  peso;
  double salario;
  char   sexo;     // Representa apenas um caracter 
  char   nome[50]; // Representa uma cadeia de Caracteres, ou seja uma string
  bool   temFilhos;
  
  // Declaração de variável do tipo Constante
  const float PI = 3.1415926536;   

  /* 
    O operador sizeof(), permite saber o número de bytes ocupado 
	por um determinado tipo de variável. É muito usado na alocação
	dinâmica de memória.
	
	Como o operador sizeof retorna um valor inteiro podemos
	visualizar esse valor usando %d.
  */
  printf("Exibe o tamanho das variáveis em memória\n\n");
  printf("Tipos de Dados\n");
  printf("Tamanho de char   = %d bytes.\n", sizeof(char));   
  printf("Tamanho de bool   = %d bytes.\n", sizeof(bool));  
  printf("Tamanho de short  = %d bytes.\n", sizeof(short));
  printf("Tamanho de int    = %d bytes.\n", sizeof(int)); 
  printf("Tamanho de float  = %d bytes.\n", sizeof(float));
  printf("Tamanho de double = %d bytes.\n", sizeof(double)); 
  printf("Tamanho de long double = %d bytes.\n", sizeof(long double)); 

  // Atribuir valores para variável
  strcpy(nome,"João da Silva Xavier");
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
    
  // Exibir endereço de memória (RAM) das variáveis    
  /*
    Operador (&) associado com uma variável representa o endereço
    da variável associada, em memória (RAM), em tempo de execução
    do programa.
  */ 

  printf("\n\nExibir Endereço de Memória das Variáveis\n\n");
  printf("\nNome      : Endereço de memória da variavel em hexa: %x",&nome);
  printf("\nMatricula : Endereço de memória da variavel em hexa: %x",&matricula);
  printf("\nIdade     : Endereço de memória da variavel em hexa: %x",&idade);
  printf("\nPeso      : Endereço de memória da variavel em hexa: %x",&peso);
  printf("\nSexo      : Endereço de memória da variavel em hexa: %x",&sexo);
  printf("\nSalario   : Endereço de memória da variavel em hexa: %x",&salario);
  printf("\nTem filhos: Endereço de memória da variavel em hexa: %x",&temFilhos);

  printf("\nFim do Programa.\n");
 
 return 0; 
}
