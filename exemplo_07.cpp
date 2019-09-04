/*
______________________________________________
           Estrutura de Repeti��o 
Estrutura de repeti��o nada mais � que la�os de 
repeti��es. La�os de repeti��es permitem que um 
conjunto de instru��es seja repetido at� que se
atenda uma determinada condi��o desejada.
______________________________________________
La�o: for
 for (vari�vel de inicializa��o; condi��o; incremento)
 { linhas de isnstru��es;}
Ex:
 int i;
 for (i=0; i<10; i++)
  {
   printf("%d\n", i);
  }    
______________________________________________
La�o:while
 La�o que possui a  uma condi��o n in�cio.Necessariamente
 ele testa a condi��o e se caso for verdadeiro executa
 o bloco abaixo, caso seja falso ele vai para a pr�xima
 instru��o fora do la�o.
Ex:
 while (Condi��o)
 {
    Comandos;
 }  
______________________________________________
La�o: do while 
 La�o quase igual ao While, a diferen�a � que 
 primeiro ele executa um bloco e testa a condi��o, 
 caso seja falsa vai para o pr�xima instru��o, isto
 � sai do la�o.
Ex:
 do
 {
    Comandos;
 } while(condi��o);
______________________________________________  

*/

#include <stdio.h>
#include <dos.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main ()
 {
  int contador;
  int numero;
  
   
  // Definir o idioma usado pelo programa
  setlocale(LC_ALL, "Portuguese");
  
  // Inciar Variaveis
   
	// Limpar a tela
	system("cls");

   // Exemplos:

   // ************* La�o for ***********************
   printf("Contar at� 10 usando La�o for\n");  
   for(contador=0;contador<11;contador++)
   {
   	printf("\nN�mero %d ",contador); 	
   }
   printf("\nPressione uma tecla para continuar...");
   getch();
   
   // ************* La�o While ***********************
   system("cls");
   printf("Usando La�o While. Para finalizar digite -1\n");
   printf("Digite um n�mero inteiro positivo = ");  
   scanf("%d",&numero);
   while(numero >=0)
   {
   	printf("O N�mero %d � %s.",numero, (numero % 2 ==0)? "par":"�mpar");
   	printf("\nDigite um n�mero inteiro positivo = ");  
    scanf("%d",&numero);
   }
   printf("\nPressione uma tecla para continuar...");
   getch();
   
   // ************* La�o Do / While **********************
   system("cls");
   printf("Usando La�o Do/While. Para finalizar digite -1\n");
   do{
   	printf("\nDigite um n�mero inteiro positivo = ");  
    scanf("%d",&numero);
    printf("\nO N�mero %d � %s.",numero, (numero % 2 ==0)? "par":"�mpar");
   }while(numero >=0);


   
   return(0);
}
