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
 Quais ser�o os valores de x, y e o conte�do de p 
 ao final do trecho de c�digo abaixo? 
*/
int main ()
{
 int x, y, *p;
 y = 0;
 p = &y;
 x = *p;
 x = 4;
 (*p)++;
 x--;
 (*p) += x;
 printf("\nValor da variavel x    = %d",x);
 printf("\nValor da variavel y    = %d",y);
 printf("\nConteudo do ponteiro p = %d",*p);
 // Retorna Sucesso (valor zero)
 return EXIT_SUCCESS; 
}


