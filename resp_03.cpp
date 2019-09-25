// Inclus�o das bibliotecas
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <windows.h>

// Fun��o: main() 
// Descri��o: Fun��o principal do programa.
// Parametro: N�o aplica
// Retorno  : Retorna 0 para sucesso
//            Retorna valor diferente de 0 para falha
// -------------------------------------------
// Hist�rico:
// Data :  /09/2019
// Autor:
// A��o :Cria��o da fun��o 
// -------------------------------------------

/*
 Quais ser�o os valores da vari�vel x, do conte�do de p 
 e pp ao final do trecho de c�digo abaixo? 
*/
int main ()
{
 int a,b,c,*p1,*p2,*p3,**pp1,**pp2,**pp3;
 a=5;b=10;c=15;
 printf("\nValores Iniciais...: a = %d, b = %d, c = %d",a,b,c);
 p3=&a;p2=&b;p1=&c;
 pp3=&p1;pp2=&p2;pp1=&p3;
 (**pp1) = (*p3) + 10;
 (**pp2) = ( (*p2) + 10) - 10;
 (**pp3) = ( (*p1) - 10); 
 printf("\nValores Processados: a = %d, b = %d, c = %d",a,b,c);
 return EXIT_SUCCESS; 
}


