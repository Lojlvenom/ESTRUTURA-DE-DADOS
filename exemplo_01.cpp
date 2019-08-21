/*
   Fazer um bloco de comentário.
*/

// Fazer uma liha de comentário.


/*
  Variáveis:

  1 - Uma variável é uma possição de memória que pode ser identificada
      através de um nome.

  2 - Variável é um local reservado na memória para armazenar um tipo de dado.

  3 - Toda variável deve ter um identificador, ou seja um nome.

  4 - Além de ter um nome, a variável também precisa ter um tipo.

  5 - O tipo de dado de uma variável determina o que ela é capaz de armazenar.
*/

/*
Para a escolha dos nomes das variáveis é necessário seguir alguams regras:
 1 - Um identificador (nome da variável) deve iniciar por uma letra ou
     por um "_" (underscore);
 2 - A partir do segundo caracter pode conter letras, números e underscore;
 3 - Deve-se usar nomes significativos dentro do contexto do programa;
 4 - C é uma linguagem case-sensitive, ou seja, faz diferença entre nomes
     com letras maiúsculas e nomes com letras minúsculas.
 5 - Costuma-se usar maiúsculas e minúsculas para separar palavras. Exemplo:"pesoDoCarro";
 6 - Deve ser diferente dos comandos (paralavra chave) da linguagem;
 7 - Deve ter no máximo 31 caracteres, isso depende do compilador da Linguagem;
 8 - Pode conter números a partir do segundo caracter;
 9 - Deve-se evitar caracteres especiais: @ $ % & * + - / etc...
*/

/*
 Bibliotecas são arquivos com definicações de
 funções desenvolvidas para uma determinada
 Linguagem. No caso da Linguagem C para
 usar uma biblioteca deve-se usar:
 #include <nomeBiblioteca.h>
*/

// Biblioteca padrão de Entrada e Saída
#include <stdio.h>

// Biblioteca de manipulação do tipo String
#include <string.h>

// Biblioteca de manipulação do tipo bool:true, false
#include <stdbool.h>

// Bibliote para definir o idioma utilizado
#include <locale.h>

// Programa Principal
int main()
{

   /*
      Determina o idioma Português para o programa
      muito útil para poder utilizar palavras acentuadas e
      substitui o ponto pela vírgula no sistema decimal.
   */
   setlocale(LC_ALL, "Portuguese");

   // Variável do tipo String (cadeia de caracteres)
   char nome[50];

   // Variável tipo Inteiro
   int      matricula;

   // Variável tipo Real
   float    nota1;
   float    nota2;
   float    nota3;

   // Variável tipo Caracter (apenas um caracter)
   char     sexo;

   // Variável tipo Verdadeiro ou falso (bool: true(1), false(0))
   bool     gostaDeEstudar;

   // Atribuir valores para as variáveis:

   /* Para fazer uma atribuição de String em C é
      necessário utilizar a função strcpy da
      bibliote <string.h>
   */

   strcpy(nome,"João da Silva Xavier");
   matricula      = 1020;
   nota1          = 8.5;
   nota2          = 7.5;
   nota3          = 6.5;
   sexo           = 'M';
   gostaDeEstudar = false;


   /*
     A função printf é usada para exibir valores
     formatado (inteiro: %d, real:%f,string:%s, caracter:%c) na tela.
     A instrução ("\n") pula uma linha na tela;
   */

   // Exibir os valores das variádeis
   // com as suas respectivas formatações

   printf("Nome      = %s\n",nome);
   printf("Matricula = %d\n",matricula);
   // Formatação %f exibe o valor real com todas as casas decimais
   printf("Nota 01   = %f\n",nota1);
   // Formatação %.2f exibe o valor real com duas casas decimais
   printf("Nota 02   = %.2f\n",nota2);
   printf("Nota 03   = %.2f\n",nota3);
   printf("Sexo      = %c\n",sexo);
   printf("Gosta de Estudar = %d\n",gostaDeEstudar);

   // Pular uma linha
   printf("\n");

   // Imprimir várias variáveis
   printf("Nome %s, Matricula %d, Gosta de Estudar %d",nome, matricula, gostaDeEstudar);
   printf("\n");
   printf("Nota 1 = %.2f Nota 2 = %.2f  Nota 3 = %.2f  Sexo = %c",nota1,nota2,nota3,sexo);

   // fim do programa
   printf("\n");
   printf("Fim do Programa");
   return 0;
}
