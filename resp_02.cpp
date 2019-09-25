// Inclusão das bibliotecas
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <windows.h>

// Função: main() 
// Descrição: Função principal do programa.
// Parametro: Não aplica
// Retorno  : Retorna 0 para sucesso
//            Retorna valor diferente de 0 para falha
// -------------------------------------------
// Histórico:
// Data :  /09/2019
// Autor:
// Ação :Criação da função 
// -------------------------------------------

/*
 Quais serão os valores da variável x, do conteúdo de p 
 e pp ao final do trecho de código abaixo? 
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


