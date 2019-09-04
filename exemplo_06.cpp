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
  Operadores Lógicos
  
  && : Operador lógico  (E)
  || : Operador lógico  (OU)
  !  : Operador lógico  (NÂO)
______________________________________________
  Estrutura Condicional
  
  if (condição realizada)
    {
     lista de instruções;
    }
  
  if ( (condição1) && (condição2) )
    {
     lista de instruções;
    }
  
  if ( (condição1) || (condição2) )
    {
     lista de instruções;
    }

  if ( !(condição) )
    {
     lista de instruções;
    }

   if (condição realizada) {
      lista de instruções
     }
   else {
      outra série de instruções
     }

   if (condição realizada) {
      lista de instruções
     }
   else if (condição) {
      outra série de instruções
     }
______________________________________________
Atricuição Condicional:
  a = (a>5) ? 10 : 50;
Este comando é equivalente a 
    if(a>5)
      a = 10;
    else a = 50;
______________________________________________
int variável;
switch(variável)
  {
    case 1: {instruções executadas para a variável = 1;}
            break;
    case 2: {instruções executadas para a variável = 1;}
            break;
    case 3: {instruções executadas para a variável = 3 }
            break;
    default:
            { instruções executadas para qualquer outro valor de variável }
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
   	printf("\nOs números são iguais.");
   }
   else{
   	printf("\nOs números são diferentes.");
   }
   
   if   ( (numeroInteiro1 % 2 == 0) &&  (numeroInteiro2 % 2 == 0)) {
   	 printf("\nOs números são pares.");
   }else if ( (numeroInteiro1 % 2 != 0) &&  (numeroInteiro2 % 2 != 0))
   		{
   			printf("\nOs números são ímpares.");
   		}

  printf("\nO Primeiro números é %s.",(numeroInteiro1 % 2 == 0) ? "par":"ímpar");
  printf("\nO Segundo  números é %s.",(numeroInteiro2 % 2 == 0) ? "par":"ímpar");

  fflush(stdin);  // limpa o buffer do teclado
  printf("\nEntre com a opção: (+ ou -) = ");
  opcao = getchar(); // Lê apenas um caracter
  
  switch(opcao)
  {
    case '+': { printf("\nSoma dos números = %d",numeroInteiro1 + numeroInteiro2);}
              break;
    case '-': {printf("\nSubtração dos números = %d",numeroInteiro1 - numeroInteiro2);}
              break;
    
    default:
            { printf("\nOperação Inválida");}
  }    
   
   return(0);
}
