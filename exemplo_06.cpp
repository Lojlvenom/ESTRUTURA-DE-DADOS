/*
______________________________________________
  Operadores Relacionais
  
  >  : Maior que
  >= : Maior ou igual
  <  : Menor que
  <= : Menor ou igual
  == : Igualdade
  != : Diferente
______________________________________________  
  Operadores L�gicos
  
  && : Operador l�gico  (E)
  || : Operador l�gico  (OU)
  !  : Operador l�gico  (N�O)
______________________________________________
  Estrutura Condicional
  
  if (condi��o realizada)
    {
     lista de instru��es;
    }
  
  if ( (condi��o1) && (condi��o2) )
    {
     lista de instru��es;
    }
  
  if ( (condi��o1) || (condi��o2) )
    {
     lista de instru��es;
    }

  if ( !(condi��o) )
    {
     lista de instru��es;
    }

   if (condi��o realizada) {
      lista de instru��es
     }
   else {
      outra s�rie de instru��es
     }

   if (condi��o realizada) {
      lista de instru��es
     }
   else if (condi��o) {
      outra s�rie de instru��es
     }
______________________________________________
Atricui��o Condicional:
  a = (a>5) ? 10 : 50;
Este comando � equivalente a 
    if(a>5)
      a = 10;
    else a = 50;
______________________________________________
int vari�vel;
switch(vari�vel)
  {
    case 1: {instru��es executadas para a vari�vel = 1;}
            break;
    case 2: {instru��es executadas para a vari�vel = 1;}
            break;
    case 3: {instru��es executadas para a vari�vel = 3 }
            break;
    default:
            { instru��es executadas para qualquer outro valor de vari�vel }
  }
______________________________________________  
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main ()
 {
  char   opcao;  
  int    numeroInteiro1;
  int    numeroInteiro2;
   
  // Definir o idioma usado pelo programa
  setlocale(LC_ALL, "Portuguese");
  
  // Inciar Variaveis
  numeroInteiro1 = 0;
  numeroInteiro2 = 0;
   
	// Limpar a tela
	system("cls");

   // Exemplos:

   printf("Numero Inteiro 1 = "); 
   scanf("%d",&numeroInteiro1);

   printf("Numero Inteiro 2 = "); 
   scanf("%d",&numeroInteiro2);
   
   if   (numeroInteiro1 == numeroInteiro2) {
   	printf("\nOs n�meros s�o iguais.");
   }
   else{
   	printf("\nOs n�meros s�o diferentes.");
   }
   
   if   ( (numeroInteiro1 % 2 == 0) &&  (numeroInteiro2 % 2 == 0)) {
   	 printf("\nOs n�meros s�o pares.");
   }else if ( (numeroInteiro1 % 2 != 0) &&  (numeroInteiro2 % 2 != 0))
   		{
   			printf("\nOs n�meros s�o �mpares.");
   		}

  printf("\nO Primeiro n�meros � %s.",(numeroInteiro1 % 2 == 0) ? "par":"�mpar");
  printf("\nO Segundo  n�meros � %s.",(numeroInteiro2 % 2 == 0) ? "par":"�mpar");

  fflush(stdin);  // limpa o buffer do teclado
  printf("\nEntre com a op��o: (+ ou -) = ");
  opcao = getchar(); // L� apenas um caracter
  
  switch(opcao)
  {
    case '+': { printf("\nSoma dos n�meros = %d",numeroInteiro1 + numeroInteiro2);}
              break;
    case '-': {printf("\nSubtra��o dos n�meros = %d",numeroInteiro1 - numeroInteiro2);}
              break;
    
    default:
            { printf("\nOpera��o Inv�lida");}
  }    
   
   return(0);
}
