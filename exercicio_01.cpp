/*
____________________________________________________
                     Problema
____________________________________________________
 Sabe-se que um Círculo é uma figura geométrica que 
 apresenta um raio, uma circunferência (perímetro), 
 um diâmetro e uma área. Utilizando-se dos conceitos
 sobre Ponteiros, faça um programa que:
 1 - Leia somente o valor do raio, calcule o valor do 
     perímetro, do diâmetro e da área. Em seguida 
	 exiba o valor do raio e de todos os valores calculados;
 2 - Para realizar os cálculos solicitados, será criado 
     um único procedimento que receberá como argumentos 
	 por valor o raio e por referência o perímetro, o 
	 diâmetro e a área. Em seguida, faça os cálculos
	 conforme o item 3;
 3 - Fórmulas:
	3.1 - perímetro = 2 . PI . raio;
	3.2 - diâmetro  = 2 . raio;
	3.3 - área      = raio . raio . PI;  
____________________________________________________
*/

// Inclusão das bibliotecas
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <windows.h>


// Declaração das funções e procedimentos 
void definirIdioma();
void gotoxy(int x, int y);
void cls();


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

int main ()
 {

  // Retorna Sucesso (valor zero)
  return EXIT_SUCCESS; 
}


// Procedimento:definirIdioma() 
// Descrição: Define o idioma do programa
// Parametro: Não aplica
// -------------------------------------------
// Histórico:
// Data :  /09/2019
// Autor:
// Ação :Criação do procedimento 
// -------------------------------------------
void definirIdioma(){
 // Definir o idioma usado pelo programa
 setlocale(LC_ALL, "Portuguese");
}

// Procedimento: cls() 
// Descrição: Limpa a tela
// Parametro: Não aplica
// -------------------------------------------
// Histórico:
// Data :  /09/2019
// Autor:
// Ação :Criação do procedimento 
// -------------------------------------------
void cls()
{
 system("cls");	
}

// Procedimento: gotoxy() 
// Descrição: Posiciona a entrada ou saída de dados
//            em uma determinada Linha (y) e coluna (x)
//            da tela
// Parametro: int x - Indica a coluna da tela
//            int y - Indica a linha  da tela          
//            Passagem de parâmetro por valor
// -------------------------------------------
// Histórico:
// Data :  /09/2019
// Autor:
// Ação :Criação do procedimento 
// -------------------------------------------
void gotoxy(int x, int y) {
  COORD c;
  c.X = x - 1;
  c.Y = y - 1;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

