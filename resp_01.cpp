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
 Quais serão os valores de x, y e o conteúdo de p 
 ao final do trecho de código abaixo? 
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


