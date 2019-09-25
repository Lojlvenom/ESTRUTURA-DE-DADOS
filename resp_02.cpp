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
 int x = 100, *p, **pp;
 printf("\nValor inicial de x = %d\n", x);
 p  = &x;
 pp = &p;
 x  += 10;
 (**pp) = (**pp) + ( (*p) - 20 ); 
 printf("\nValor da variavel    x  = %d", x);
 printf("\nValor do conteudo de p  = %d", *p);    
 printf("\nValor do conteudo de pp = %d\n", **pp);
 printf("\nEndereco de x  = %x", &x);
 printf("\nEndereco de p  = %x", p);    
 printf("\nEndereco de pp = %x", *pp);
 // Retorna Sucesso (valor zero)
 return EXIT_SUCCESS; 
}


