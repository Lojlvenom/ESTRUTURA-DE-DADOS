/*
____________________________________________________
                     Problema
____________________________________________________
 Sabe-se que um C�rculo � uma figura geom�trica que 
 apresenta um raio, uma circunfer�ncia (per�metro), 
 um di�metro e uma �rea. Utilizando-se dos conceitos
 sobre Ponteiros, fa�a um programa que:
 1 - Leia somente o valor do raio, calcule o valor do 
     per�metro, do di�metro e da �rea. Em seguida 
	 exiba o valor do raio e de todos os valores calculados;
 2 - Para realizar os c�lculos solicitados, ser� criado 
     um �nico procedimento que receber� como argumentos 
	 por valor o raio e por refer�ncia o per�metro, o 
	 di�metro e a �rea. Em seguida, fa�a os c�lculos
	 conforme o item 3;
 3 - F�rmulas:
	3.1 - per�metro = 2 . PI . raio;
	3.2 - di�metro  = 2 . raio;
	3.3 - �rea      = raio . raio . PI;  
____________________________________________________
*/

// Inclus�o das bibliotecas
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <windows.h>

// Declara��o das fun��es e procedimentos 
void definirIdioma();
void gotoxy(int x, int y);
void cls();
void calcularMedidas(float raio, 
                     float *perimetro,
					 float *diametro,
					 float *area);

// Fun��o: main() 
// Descri��o: Fun��o principal do programa.
// Parametro: N�o aplica
// Retorno  : Retorna 0 para sucesso
//            Retorna valor diferente de 0 para falha
// -------------------------------------------
// Hist�rico:
// -------------------------------------------
// Data : 10/09/2019
// Autor: Benevaldo P. Gon�alves
// A��o : Cria��o da fun��o 
// -------------------------------------------
int main ()
 {
  float raio, perimetro,diametro, area;	
  definirIdioma();
  cls();
  gotoxy(20,3);
  printf("Figura Geom�trica: C�rculo");
  gotoxy(5,5);
  printf("Entre com o valor do Raio = ");
  scanf("%f",&raio);
  // Chamar a fun��o para realizar todos os c�lculos.
  // Par�metros: raio (por valor), perimetro (por refer�ncia),
  // diametro (por refer�ncia) e area (por refer�ncia). 
  calcularMedidas(raio,&perimetro,&diametro,&area);
  // Mostrar os resultados:
  gotoxy(5,7);
  printf("Raio      = %.2f",raio);
  gotoxy(5,8);
  printf("�rea      = %.2f",area);
  gotoxy(5,9);
  printf("Per�metro = %.2f",perimetro);
  gotoxy(5,10);
  printf("Di�metro  = %.2f",diametro);
  // Retorna Sucesso (valor zero)
  return EXIT_SUCCESS; 
}

// Procedimento:calcularMedidas(...). 
// Descri��o:
//   Calcula as medidas referente ao 
//   per�metro, diametro e a �rea de
//   um C�rculo com um determinado raio.
// Parametro:
//   float raio      : raio do c�rculo       - por valor 
//   float *perimetro: ponteiro do per�metro - por refer�ncia
//   float *diametro : ponteiro do di�metro  - por refer�ncia
//   float *area     : ponteiro da �rea      - por refer�ncia
// -------------------------------------------
// Hist�rico:
// -------------------------------------------
// Data : 10/09/2019
// Autor: Benevaldo P. Gon�alves
// A��o : Cria��o do procedimento 
// -------------------------------------------
void calcularMedidas(float raio, 
                     float *perimetro,
					 float *diametro,
					 float *area)
{
    // Constante PI da biblioteca <math.h> = M_PI
	// Altera o conte�do do ponteiro perimetro    
  	(*perimetro) = (2 * M_PI * raio);  
  	// Altera o conte�do do ponteiro diametro
    (*diametro)  = (2 * raio);
	// Pot�ncia da biblioteca <math.h> = pow    
	// Altera o conte�do do ponteiro area
    (*area)      = (pow(raio,2) * M_PI);
}


// Procedimento:definirIdioma() 
// Descri��o: Define o idioma do programa
// Parametro: N�o aplica
// -------------------------------------------
// Hist�rico:
// -------------------------------------------
// Data :  /09/2019
// Autor:
// A��o :Cria��o do procedimento 
// -------------------------------------------
void definirIdioma(){
 // Definir o idioma usado pelo programa
 setlocale(LC_ALL, "Portuguese");
}

// Procedimento: cls() 
// Descri��o: Limpa a tela
// Parametro: N�o aplica
// -------------------------------------------
// Hist�rico:
// -------------------------------------------
// Data : 10/09/2019
// Autor: Benevaldo P. Gon�alves
// A��o : Cria��o do procedimento 
// -------------------------------------------
void cls()
{
 system("cls");	
}

// Procedimento: gotoxy() 
// Descri��o: Posiciona a entrada ou sa�da de dados
//            em uma determinada Linha (y) e coluna (x)
//            da tela
// Parametro: int x - Indica a coluna da tela
//            int y - Indica a linha  da tela          
//            Passagem de par�metro por valor
// -------------------------------------------
// Hist�rico:
// -------------------------------------------
// Data : 10/09/2019
// Autor: Benevaldo P. Gon�alves
// A��o : Cria��o do procedimento 
// -------------------------------------------
void gotoxy(int x, int y) {
  COORD c;
  c.X = x - 1;
  c.Y = y - 1;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

