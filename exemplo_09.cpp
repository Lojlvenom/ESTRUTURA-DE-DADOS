/*
___________________________________________________________
           PONTEIROS: Endere�o de Mem�ria (RAM)
___________________________________________________________
Endere�os e ponteiros. Os conceitos de endere�o e ponteiro 
s�o fundamentais em qualquer linguagem de programa��o. 
Em C, esses conceitos s�o expl�citos. Em algumas outras
linguagens eles s�o ocultos e representados pelo conceito 
mais abstrato de refer�ncia. Dominar o conceito de ponteiro 
exige algum esfor�o e uma boa dose de pr�tica.
___________________________________________________________
A mem�ria RAM (Random Access Memory) de qualquer computador
� uma sequ�ncia de bytes. A posi��o (0, 1, 2, 3, etc.) que
um byte ocupa na sequ�ncia � o endere�o (address) do byte.
Se "E" � o endere�o de um byte ent�o E+1 � o endere�o do
byte seguinte. Cada vari�vel de um programa ocupa um certo 
n�mero de bytes consecutivos na mem�ria do computador,
baseado no seu tipo de dados. Cada vari�vel (cada registro
e cada vetor) na mem�ria tem um endere�o. Na maioria dos
computadores, o endere�o de uma vari�vel � o endere�o do
seu primeiro byte.
______________________________________________________________
O Endere�o de uma Vari�vel � dado pelo operador "&". Assim,
se  contador � uma vari�vel ent�o  &contador � o seu endere�o
______________________________________________________________
Um ponteiro (apontador = pointer) � um tipo especial de 
vari�vel que armazena um Endere�o de Mem�ria. Um ponteiro pode
ter o valor NULL. A macro NULL est� definida na interface stdlib.h e 
seu valor � 0 (zero) na maioria dos computadores.
Se um ponteiro "p" armazena o endere�o de uma vari�vel contador, 
podemos dizer "p" aponta para contador ou  "p" � o endere�o de
contador. Em termos um pouco mais abstratos, diz-se que "p" � uma
refer�ncia � vari�vel contador. 
______________________________________________________________
      Como Declatar uma vari�vel do tipo Ponteiro?
Utiliza-se o operador "*" para indicar que uma vari�vel � um
Ponteiro.      
OBS: Aten��o, a vari�vel do tipo ponteiro s� guarda ENDERE�O!!!

    int auxiliar  // Vari�vel auxiliar do tipo inteiro
Ex: int contador; // Vari�vel contador do tipo inteiro
    int *p;       // Vari�vel ponteiro do tipo inteiro
    
    contador = 10; 
    // A vari�vel apontador "p" recebe o ENDERE�O da vari�vel 
	// contador 
    p = &contador;
    
    //Aten��o: p - Representa o ENDERE�O de Mem�ria 
    //        *p - Representa o CONTE�DO do Endere�o de Mem�ria 
    
    // Ex: A vari�vel auxiliar recebe o CONTE�DO da vari�vel contador
    auxiliar = *p  // auxiliar recebe o valor 10.
______________________________________________________________
                  Ponteiro de Ponteiro:
A linguagem C oferece uma forma de criar ponteiros para ponteiros.
Ex:
 int contador,auxiliar; // Vari�veis
 int *p;    // Ponteiro 
 int **ptr; // Ponteiro de ponteiro
 
 contador = 10;
 p = &contador;
 ptr = &p;     // O ponteiro "ptr" recebe o endere�o do ponteiro "p".
 // A vari�vel auxiliar recebe o conte�do da vari�vel contador 
 auxiliar = *ptr; 
____________________________________________
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
void trocarValor(int *valorA,int *valorB);

// Fun��o: main() 
// Descri��o: Fun��o principal do programa.
// Parametro: N�o aplica
// Retorno  : Retorna 0 para sucesso
//            Retorna valor diferente de 0 para falha
// -------------------------------------------
// Hist�rico:
// Data :10/09/2019
// Autor:Benevaldo P. Gon�alves
// A��o :Cria��o da fun��o 
// -------------------------------------------

int main ()
 {
  int valorA, valorB;	
  int auxiliar; 
  int contador; 
  // Vari�vel do tipo PONTEIRO inteiro  "p"
  int *p; 
  // Vari�vel do tipo PONTEIRO de PONTEIRO "ptr"
  int *ptr; 
        
  
  cls();
  definirIdioma();
  contador = 10;
  
  // Nunca esque�a de usar o & para indicar o endere�o da vari�vel
  // ponteiro p recebe o endere�o da vari�vel contador 
  p = &contador;
  
  // O ponteiro "ptr" recebe o endere�o do ponteiro "p". 
  // logo, o ponteiro ptr aponta para o endere�o da 
  // vari�vel contator.  
  ptr = p;
   

  // Exibir o endere�o, em hexadecimal, e o conte�do das vari�veis: contador e p
  gotoxy(20,1);
  printf("Exibir o Conte�do e o Endere�o das Vari�veis");
  gotoxy(5,3);
  // Lembre-se. Em VARI�VEL: contador (conte�do) e &contador (endre�o da vari�vel)  
  printf("Vari�vel contador: Conte�do = %d - Endere�o: %x",contador,&contador);
  gotoxy(5,4);
  // Lembre-se. Em PONTEIRO: p (endere�o) e *p (conte�do do endere�o)  
  printf("Ponteiro p       : Conte�do = %d - Endere�o: %x",*p,p);
  gotoxy(5,5);
  printf("Observa-se que as vari�veis possuem o mesmo conte�do e endere�o, pois ");
  gotoxy(5,6);
  printf("o ponteiro p aponta para o endere�o da vari�vel contador.");
  gotoxy(5,8);
  printf("Manipular o conte�do da vari�vel contator atrav�s do ponteiro p");
  // Adicionar mais cinco no conte�do do ponteiro p    
  *p = *p + 5;
  gotoxy(5,9);
  printf("C�digo: *p = *p + 5;");
  // Exibir os novos dados
  gotoxy(5,10);
  printf("Vari�vel contador: Conte�do = %d - Endere�o: %x",contador,&contador);
  gotoxy(5,11);
  printf("Ponteiro p       : Conte�do = %d - Endere�o: %x",*p,p);

  gotoxy(5,13);
  printf("Manipular o conte�do da vari�vel contator atrav�s do ponteiro ptr");
  // Adicionar mais cinco no conte�do do ponteiro p    
  *ptr = *ptr + 10;
  gotoxy(5,14);
  printf("C�digo: *ptr = *ptr + 10;");
  // Exibir os novos dados
  gotoxy(5,15);
  printf("Vari�vel contador: Conte�do = %d - Endere�o: %x",contador,&contador);
  gotoxy(5,16);
  printf("Ponteiro p       : Conte�do = %d - Endere�o: %x",*p,p);

  gotoxy(5,18);
  printf("Pressione uma tecla...");
  getch();
  cls();
  
  gotoxy(5,2);
  printf("Realizar a troca do cont�do entre duas Vari�veis atrav�s de ponteiros");
  gotoxy(5,4);
  printf("Entre com o valor numerico de A = ");
  scanf("%d",&valorA);  
  gotoxy(5,5);
  printf("Entre com o valor numerico de B = ");
  scanf("%d",&valorB); 
  // Exibir endere�o das vari�veis em hexadecimal
  gotoxy(5,7);
  printf("Endere�o da vari�vel A = %x ",&valorA);
  gotoxy(5,8);
  printf("Endere�o da vari�vel B = %x ",&valorB);
  // Char a fun��o que troca os valores atrav�s 
  // do endere�o das vari�veis 
  trocarValor(&valorA,&valorB);
  // Exibir dados com os conte�dos trocados 
  gotoxy(5,10);
  printf("Vari�vel A: Conte�do = %d - Endere�o: %x",valorA,&valorA);
  gotoxy(5,11);
  printf("Vari�vel B: Conte�do = %d - Endere�o: %x",valorB,&valorB);

  gotoxy(5,13);
  printf("Pressione uma tecla...");
  getch();

  // Retorna Sucesso (valor zero)
  return EXIT_SUCCESS; 
}

// Procedimento:trocarValor(int *valarA,*valorB).
// Descri��o: Realiza a troca do conte�do de duas 
//            vari�veis atrav�s de ponteiros.
// Parametro: Ponteiro int *valarA : primeiro valor
//            Ponteiro int *valarB : segundo valor
//            Passagem de par�metro por refer�ncia.
// ------------------------------------------------
// Hist�rico:
// Data :10/09/2019
// Autor:Benevaldo P. Gon�alves
// A��o :Cria��o do procedimento 
// -------------------------------------------
void trocarValor(int *valorA,int *valorB){
	int auxiliar; // Declara��o de um ponteiro
	// Atribuir o endere�o da vari�vel valorB para
	// o ponteiro auxiliar
	auxiliar = *valorA;
	// Realizar a troca de valores entre as vari�veis
	// utilizando SOMENTE os endere�os (ponteiros) 
	*valorA = *valorB;
	*valorB = auxiliar; 
};


// Procedimento:definirIdioma() 
// Descri��o: Define o idioma do programa
// Parametro: N�o aplica
// -------------------------------------------
// Hist�rico:
// Data :10/09/2019
// Autor:Benevaldo P. Gon�alves
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
// Data :10/09/2019
// Autor:Benevaldo P. Gon�alvees
// A��o :Cria��o do procedimento 
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
// -------------------------------------------
// Hist�rico:
// Data :10/09/2019
// Autor:Benevaldo P. Gon�alvees
// A��o :Cria��o do procedimento 
// -------------------------------------------
void gotoxy(int x, int y) {
  COORD c;
  c.X = x - 1;
  c.Y = y - 1;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}


