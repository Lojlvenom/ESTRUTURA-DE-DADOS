/*
  Operadores Matemático

*/


#include <stdio.h>
#include <string.h>

// Permite chamar comando do Sistema Operacional
#include <stdlib.h>
   
#include <locale.h>
#include <math.h>

int main ()
 {
  
  int    numeroInteiro1;
  int    numeroInteiro2;
  int    resultadoInteiro;
  
  int    contador;
  
  float  numeroFloat1;
  float  numeroFloat2;
  float  resultadoFloat;
  float  contadorFloat;
  
  // Definir o idioma usado pelo programa
  setlocale(LC_ALL, "Portuguese");
  
  // Inciar Variaveis
  numeroInteiro1 = 2;
  numeroInteiro2 = 9;
  contador = 1;
  
  numeroFloat1  = 2;
  numeroFloat2  = 9;
  contadorFloat = 1;
  
  
  /*
     Principais operadores matemático
    (+): Adição
    (-): Subtração
    (*): Multiplicação
    (/): Divisão de inteiro
    (%): Resto da divisão (módulo)
    
    Operadores compostos de atribuição:
    += : Ex: resultado += contador. Equivalente a resultado = contador + contador 
    -= : Ex: resultado -= contador. Equivalente a resultado = contador - contador 
    *= : Ex: resultado *= contador. Equivalente a resultado = contador * contador 
    /= : Ex: resultado /= contador. Equivalente a resultado = contador / contador 
    
    // Operadores de Incremento e Decremento
    ++ : Incrementa a variável. Ex: contador++
    -- : Decrementa a variável. Ex: contador--
    
    
    Principais funções:
    OBS: A linguagem C possui diversas funções matemáticas 
	na biblioteca <math.h>
    
    Função	                  Descrição do comando
    floor( )                -  arredonda para baixo
    ceil( )	                -  arredonda para cima
    sqrt( )	                - calcula raiz quadrada
    pow(variável, expoente) - potenciação
    sin( )	                - seno           
    cos( )	                - cosseno
    tan( )                  - Tangente
    log( )	                - logaritmo natural
    log10( )	            - logaritmo base 10
  
  */

	// Limpar a tela
	system("cls");

   // Exemplos:

   printf("\nDados Inteiro\n");    
   printf("\nNumero Inteiro 1 = %d",numeroInteiro1);
   printf("\nNumero Inteiro 2 = %d",numeroInteiro2);
   printf("\nNumero Contador  = %d",contador);
     	 
   resultadoInteiro = numeroInteiro2 + numeroInteiro1;
   printf("\n(%d + %d) = %d ",numeroInteiro1,numeroInteiro2,resultadoInteiro);
   
   resultadoInteiro = numeroInteiro2 - numeroInteiro1;
   printf("\n(%d - %d) = %d ",numeroInteiro2,numeroInteiro1,resultadoInteiro);

   resultadoInteiro = numeroInteiro1 * numeroInteiro2;
   printf("\n(%d * %d) = %d ",numeroInteiro1,numeroInteiro2,resultadoInteiro);
   
   resultadoInteiro = numeroInteiro2 / numeroInteiro1;
   printf("\n(%d / %d) = %d ",numeroInteiro2,numeroInteiro1,resultadoInteiro);

   resultadoInteiro = numeroInteiro2 % numeroInteiro1;
   printf("\n(%d %% %d) = %d ",numeroInteiro2,numeroInteiro1,resultadoInteiro);
 
   // Operadores compostos de atribuição:
   resultadoInteiro += contador;
   printf("\nExpressao: resultadoInteiro += contador = %d ",resultadoInteiro);
   
   // Incrementar e Decrementar valor
   contador++;
   printf("\nIncrementar contador = %d ",contador);
   contador--;
   printf("\nDecrementar contador = %d ",contador);
   
   resultadoInteiro = sqrt(numeroInteiro2);
   printf("\nRaiz quadrada de %d = %d ",numeroInteiro2,resultadoInteiro);
   
   resultadoInteiro = pow(numeroInteiro1,3);
   printf("\nPotencia de %d elevado a 3 = %d ",numeroInteiro1,resultadoInteiro);
   
    
   printf("\nPressione uma tecla...");
   system("PAUSE");

   // Limpar a tela
   system("cls");
   
   // Analisar o mesmo comportamento utilizando o tipo Float
 
   printf("\nDados Real - Float\n");    
   printf("\nNumero Float 1 = %f",numeroFloat1);
   printf("\nNumero Float 2 = %f",numeroFloat2);
   printf("\nNumero Contador  = %f",contadorFloat);
     	 
   resultadoFloat = numeroFloat2 + numeroFloat1;
   printf("\n(%f + %f) = %f ",numeroFloat1,numeroFloat2,resultadoFloat);
   
   resultadoFloat = numeroFloat2 - numeroFloat1;
   printf("\n(%f - %f) = %f ",numeroFloat2,numeroFloat1,resultadoFloat);

   resultadoFloat = numeroFloat1 * numeroFloat2;
   printf("\n(%f * %f) = %f ",numeroFloat1,numeroFloat2,resultadoFloat);
   
   resultadoFloat = numeroFloat2 / numeroFloat1;
   printf("\n(%f / %f) = %f ",numeroFloat2,numeroFloat1,resultadoFloat);

   resultadoFloat =  ( (int) numeroFloat2) % ( (int) numeroFloat1);
   printf("\n(%f %% %f) = %f ",numeroFloat2,numeroFloat1,resultadoFloat);
 
   // Operadores compostos de atribuição:
   resultadoFloat += contadorFloat;
   printf("\nExpressao: resultadoFloat += contadorFloat = %f ",resultadoFloat);
   
   // Incrementar e Decrementar valor
   contadorFloat++;
   printf("\nIncrementar contadorFloat = %f ",contadorFloat);
   contadorFloat--;
   printf("\nDecrementar contadorFloat = %f ",contadorFloat);
   
   resultadoFloat = sqrt(numeroFloat2);
   printf("\nRaiz quadrada de %f = %f ",numeroFloat2,resultadoFloat);
   
   resultadoFloat = pow(numeroFloat1,3);
   printf("\nPotencia de %f elevado a 3 = %f ",numeroFloat1,resultadoFloat);
   
    
   printf("\nPressione uma tecla...");
   system("PAUSE");

   
	
   
   return(0);
}
