/*
   Fazer um bloco de coment�rio.
*/

// Fazer uma liha de coment�rio.


/*
  Vari�veis:

  1 - Uma vari�vel � uma possi��o de mem�ria que pode ser identificada
      atrav�s de um nome.

  2 - Vari�vel � um local reservado na mem�ria para armazenar um tipo de dado.

  3 - Toda vari�vel deve ter um identificador, ou seja um nome.

  4 - Al�m de ter um nome, a vari�vel tamb�m precisa ter um tipo.

  5 - O tipo de dado de uma vari�vel determina o que ela � capaz de armazenar.
*/

/*
Para a escolha dos nomes das vari�veis � necess�rio seguir alguams regras:
 1 - Um identificador (nome da vari�vel) deve iniciar por uma letra ou
     por um "_" (underscore);
 2 - A partir do segundo caracter pode conter letras, n�meros e underscore;
 3 - Deve-se usar nomes significativos dentro do contexto do programa;
 4 - C � uma linguagem case-sensitive, ou seja, faz diferen�a entre nomes
     com letras mai�sculas e nomes com letras min�sculas.
 5 - Costuma-se usar mai�sculas e min�sculas para separar palavras. Exemplo:"pesoDoCarro";
 6 - Deve ser diferente dos comandos (paralavra chave) da linguagem;
 7 - Deve ter no m�ximo 31 caracteres, isso depende do compilador da Linguagem;
 8 - Pode conter n�meros a partir do segundo caracter;
 9 - Deve-se evitar caracteres especiais: @ $ % & * + - / etc...
*/

/*
 Bibliotecas s�o arquivos com definica��es de
 fun��es desenvolvidas para uma determinada
 Linguagem. No caso da Linguagem C para
 usar uma biblioteca deve-se usar:
 #include <nomeBiblioteca.h>
*/

// Biblioteca padr�o de Entrada e Sa�da
#include <stdio.h>

// Biblioteca de manipula��o do tipo String
#include <string.h>

// Biblioteca de manipula��o do tipo bool:true, false
#include <stdbool.h>

// Bibliote para definir o idioma utilizado
#include <locale.h>

// Programa Principal
int main()
{

   /*
      Determina o idioma Portugu�s para o programa
      muito �til para poder utilizar palavras acentuadas e
      substitui o ponto pela v�rgula no sistema decimal.
   */
   setlocale(LC_ALL, "Portuguese");

   // Vari�vel do tipo String (cadeia de caracteres)
   char nome[50];

   // Vari�vel tipo Inteiro
   int      matricula;

   // Vari�vel tipo Real
   float    nota1;
   float    nota2;
   float    nota3;

   // Vari�vel tipo Caracter (apenas um caracter)
   char     sexo;

   // Vari�vel tipo Verdadeiro ou falso (bool: true(1), false(0))
   bool     gostaDeEstudar;

   // Atribuir valores para as vari�veis:

   /* Para fazer uma atribui��o de String em C �
      necess�rio utilizar a fun��o strcpy da
      bibliote <string.h>
   */

   strcpy(nome,"Jo�o da Silva Xavier");
   matricula      = 1020;
   nota1          = 8.5;
   nota2          = 7.5;
   nota3          = 6.5;
   sexo           = 'M';
   gostaDeEstudar = false;


   /*
     A fun��o printf � usada para exibir valores
     formatado (inteiro: %d, real:%f,string:%s, caracter:%c) na tela.
     A instru��o ("\n") pula uma linha na tela;
   */

   // Exibir os valores das vari�deis
   // com as suas respectivas formata��es

   printf("Nome      = %s\n",nome);
   printf("Matricula = %d\n",matricula);
   // Formata��o %f exibe o valor real com todas as casas decimais
   printf("Nota 01   = %f\n",nota1);
   // Formata��o %.2f exibe o valor real com duas casas decimais
   printf("Nota 02   = %.2f\n",nota2);
   printf("Nota 03   = %.2f\n",nota3);
   printf("Sexo      = %c\n",sexo);
   printf("Gosta de Estudar = %d\n",gostaDeEstudar);

   // Pular uma linha
   printf("\n");

   // Imprimir v�rias vari�veis
   printf("Nome %s, Matricula %d, Gosta de Estudar %d",nome, matricula, gostaDeEstudar);
   printf("\n");
   printf("Nota 1 = %.2f Nota 2 = %.2f  Nota 3 = %.2f  Sexo = %c",nota1,nota2,nota3,sexo);

   // fim do programa
   printf("\n");
   printf("Fim do Programa");
   return 0;
}
