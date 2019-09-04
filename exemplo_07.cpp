/*
______________________________________________
           Estrutura de Repetição 
Estrutura de repetição nada mais é que laços de 
repetições. Laços de repetições permitem que um 
conjunto de instruções seja repetido até que se
atenda uma determinada condição desejada.
______________________________________________
Laço: for
 for (variável de inicialização; condição; incremento)
 { linhas de isnstruções;}
Ex:
 int i;
 for (i=0; i<10; i++)
  {
   printf("%d\n", i);
  }    
______________________________________________
Laço:while
 Laço que possui a  uma condição n início.Necessariamente
 ele testa a condição e se caso for verdadeiro executa
 o bloco abaixo, caso seja falso ele vai para a próxima
 instrução fora do laço.
Ex:
 while (Condição)
 {
    Comandos;
 }  
______________________________________________
Laço: do while 
 Laço quase igual ao While, a diferença é que 
 primeiro ele executa um bloco e testa a condição, 
 caso seja falsa vai para o próxima instrução, isto
 é sai do laço.
Ex:
 do
 {
    Comandos;
 } while(condição);
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

   // ************* Laço for ***********************
   printf("Contar até 10 usando Laço for\n");  
   for(contador=0;contador<11;contador++)
   {
   	printf("\nNúmero %d ",contador); 	
   }
   printf("\nPressione uma tecla para continuar...");
   getch();
   
   // ************* Laço While ***********************
   system("cls");
   printf("Usando Laço While. Para finalizar digite -1\n");
   printf("Digite um número inteiro positivo = ");  
   scanf("%d",&numero);
   while(numero >=0)
   {
   	printf("O Número %d é %s.",numero, (numero % 2 ==0)? "par":"ímpar");
   	printf("\nDigite um número inteiro positivo = ");  
    scanf("%d",&numero);
   }
   printf("\nPressione uma tecla para continuar...");
   getch();
   
   // ************* Laço Do / While **********************
   system("cls");
   printf("Usando Laço Do/While. Para finalizar digite -1\n");
   do{
   	printf("\nDigite um número inteiro positivo = ");  
    scanf("%d",&numero);
    printf("\nO Número %d é %s.",numero, (numero % 2 ==0)? "par":"ímpar");
   }while(numero >=0);


   
   return(0);
}
