/*
___________________________________________________________
           PONTEIROS: Endereço de Memória (RAM)
___________________________________________________________
Endereços e ponteiros. Os conceitos de endereço e ponteiro 
são fundamentais em qualquer linguagem de programação. 
Em C, esses conceitos são explícitos. Em algumas outras
linguagens eles são ocultos e representados pelo conceito 
mais abstrato de referência. Dominar o conceito de ponteiro 
exige algum esforço e uma boa dose de prática.
___________________________________________________________
A memória RAM (Random Access Memory) de qualquer computador
é uma sequência de bytes. A posição (0, 1, 2, 3, etc.) que
um byte ocupa na sequência é o endereço (address) do byte.
Se "E" é o endereço de um byte então E+1 é o endereço do
byte seguinte. Cada variável de um programa ocupa um certo 
número de bytes consecutivos na memória do computador,
baseado no seu tipo de dados. Cada variável (cada registro
e cada vetor) na memória tem um endereço. Na maioria dos
computadores, o endereço de uma variável é o endereço do
seu primeiro byte.
______________________________________________________________
O Endereço de uma Variável é dado pelo operador "&". Assim,
se  contador é uma variável então  &contador é o seu endereço
______________________________________________________________
Um ponteiro (apontador = pointer) é um tipo especial de 
variável que armazena um Endereço de Memória. Um ponteiro pode
ter o valor NULL. A macro NULL está definida na interface stdlib.h e 
seu valor é 0 (zero) na maioria dos computadores.
Se um ponteiro "p" armazena o endereço de uma variável contador, 
podemos dizer "p" aponta para contador ou  "p" é o endereço de
contador. Em termos um pouco mais abstratos, diz-se que "p" é uma
referência à variável contador. 
______________________________________________________________
      Como Declatar uma variável do tipo Ponteiro?
Utiliza-se o operador "*" para indicar que uma variável é um
Ponteiro.      
OBS: Atenção, a variável do tipo ponteiro só guarda ENDEREÇO!!!

    int auxiliar  // Variável auxiliar do tipo inteiro
Ex: int contador; // Variável contador do tipo inteiro
    int *p;       // Variável ponteiro do tipo inteiro
    
    contador = 10; 
    // A variável apontador "p" recebe o ENDEREÇO da variável 
	// contador 
    p = &contador;
    
    //Atenção: p - Representa o ENDEREÇO de Memória 
    //        *p - Representa o CONTEÚDO do Endereço de Memória 
    
    // Ex: A variável auxiliar recebe o CONTEÚDO da variável contador
    auxiliar = *p  // auxiliar recebe o valor 10.
______________________________________________________________
                  Ponteiro de Ponteiro:
A linguagem C oferece uma forma de criar ponteiros para ponteiros.
Ex:
 int contador,auxiliar; // Variáveis
 int *p;    // Ponteiro 
 int **ptr; // Ponteiro de ponteiro
 
 contador = 10;
 p = &contador;
 ptr = &p;     // O ponteiro "ptr" recebe o endereço do ponteiro "p".
 // A variável auxiliar recebe o conteúdo da variável contador 
 auxiliar = *ptr; 
____________________________________________
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
void trocarValor(int *valorA,int *valorB);

// Função: main() 
// Descrição: Função principal do programa.
// Parametro: Não aplica
// Retorno  : Retorna 0 para sucesso
//            Retorna valor diferente de 0 para falha
// -------------------------------------------
// Histórico:
// Data :10/09/2019
// Autor:Benevaldo P. Gonçalves
// Ação :Criação da função 
// -------------------------------------------

int main ()
 {
  int valorA, valorB;	
  int auxiliar; 
  int contador; 
  // Variável do tipo PONTEIRO inteiro  "p"
  int *p; 
  // Variável do tipo PONTEIRO de PONTEIRO "ptr"
  int *ptr; 
        
  
  cls();
  definirIdioma();
  contador = 10;
  
  // Nunca esqueça de usar o & para indicar o endereço da variável
  // ponteiro p recebe o endereço da variável contador 
  p = &contador;
  
  // O ponteiro "ptr" recebe o endereço do ponteiro "p". 
  // logo, o ponteiro ptr aponta para o endereço da 
  // variável contator.  
  ptr = p;
   

  // Exibir o endereço, em hexadecimal, e o conteúdo das variáveis: contador e p
  gotoxy(20,1);
  printf("Exibir o Conteúdo e o Endereço das Variáveis");
  gotoxy(5,3);
  // Lembre-se. Em VARIÁVEL: contador (conteúdo) e &contador (endreço da variável)  
  printf("Variável contador: Conteúdo = %d - Endereço: %x",contador,&contador);
  gotoxy(5,4);
  // Lembre-se. Em PONTEIRO: p (endereço) e *p (conteúdo do endereço)  
  printf("Ponteiro p       : Conteúdo = %d - Endereço: %x",*p,p);
  gotoxy(5,5);
  printf("Observa-se que as variáveis possuem o mesmo conteúdo e endereço, pois ");
  gotoxy(5,6);
  printf("o ponteiro p aponta para o endereço da variável contador.");
  gotoxy(5,8);
  printf("Manipular o conteúdo da variável contator através do ponteiro p");
  // Adicionar mais cinco no conteúdo do ponteiro p    
  *p = *p + 5;
  gotoxy(5,9);
  printf("Código: *p = *p + 5;");
  // Exibir os novos dados
  gotoxy(5,10);
  printf("Variável contador: Conteúdo = %d - Endereço: %x",contador,&contador);
  gotoxy(5,11);
  printf("Ponteiro p       : Conteúdo = %d - Endereço: %x",*p,p);

  gotoxy(5,13);
  printf("Manipular o conteúdo da variável contator através do ponteiro ptr");
  // Adicionar mais cinco no conteúdo do ponteiro p    
  *ptr = *ptr + 10;
  gotoxy(5,14);
  printf("Código: *ptr = *ptr + 10;");
  // Exibir os novos dados
  gotoxy(5,15);
  printf("Variável contador: Conteúdo = %d - Endereço: %x",contador,&contador);
  gotoxy(5,16);
  printf("Ponteiro p       : Conteúdo = %d - Endereço: %x",*p,p);

  gotoxy(5,18);
  printf("Pressione uma tecla...");
  getch();
  cls();
  
  gotoxy(5,2);
  printf("Realizar a troca do contúdo entre duas Variáveis através de ponteiros");
  gotoxy(5,4);
  printf("Entre com o valor numerico de A = ");
  scanf("%d",&valorA);  
  gotoxy(5,5);
  printf("Entre com o valor numerico de B = ");
  scanf("%d",&valorB); 
  // Exibir endereço das variáveis em hexadecimal
  gotoxy(5,7);
  printf("Endereço da variável A = %x ",&valorA);
  gotoxy(5,8);
  printf("Endereço da variável B = %x ",&valorB);
  // Char a função que troca os valores através 
  // do endereço das variáveis 
  trocarValor(&valorA,&valorB);
  // Exibir dados com os conteúdos trocados 
  gotoxy(5,10);
  printf("Variável A: Conteúdo = %d - Endereço: %x",valorA,&valorA);
  gotoxy(5,11);
  printf("Variável B: Conteúdo = %d - Endereço: %x",valorB,&valorB);

  gotoxy(5,13);
  printf("Pressione uma tecla...");
  getch();

  // Retorna Sucesso (valor zero)
  return EXIT_SUCCESS; 
}

// Procedimento:trocarValor(int *valarA,*valorB).
// Descrição: Realiza a troca do conteúdo de duas 
//            variáveis através de ponteiros.
// Parametro: Ponteiro int *valarA : primeiro valor
//            Ponteiro int *valarB : segundo valor
//            Passagem de parâmetro por referência.
// ------------------------------------------------
// Histórico:
// Data :10/09/2019
// Autor:Benevaldo P. Gonçalves
// Ação :Criação do procedimento 
// -------------------------------------------
void trocarValor(int *valorA,int *valorB){
	int auxiliar; // Declaração de um ponteiro
	// Atribuir o endereço da variável valorB para
	// o ponteiro auxiliar
	auxiliar = *valorA;
	// Realizar a troca de valores entre as variáveis
	// utilizando SOMENTE os endereços (ponteiros) 
	*valorA = *valorB;
	*valorB = auxiliar; 
};


// Procedimento:definirIdioma() 
// Descrição: Define o idioma do programa
// Parametro: Não aplica
// -------------------------------------------
// Histórico:
// Data :10/09/2019
// Autor:Benevaldo P. Gonçalves
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
// Data :10/09/2019
// Autor:Benevaldo P. Gonçalvees
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
// -------------------------------------------
// Histórico:
// Data :10/09/2019
// Autor:Benevaldo P. Gonçalvees
// Ação :Criação do procedimento 
// -------------------------------------------
void gotoxy(int x, int y) {
  COORD c;
  c.X = x - 1;
  c.Y = y - 1;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}


