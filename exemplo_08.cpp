/*
______________________________________________
Fun��es:
Existem duas formas de definir uma fun��o em C:
Primeira forma: Criar a fun��o antes da main
Ex:
void gotoxy(int x, int y) {
  COORD c;
  c.X = x - 1;
  c.Y = y - 1;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main(){
 gotoxy(5,10);
 printf("Usando a fun��o gotoxy()");
}
Segunda forma: Somente Declatar a fun��o antes da main e 
implementar o c�digo da fun��o depois da main. Vamos 
utilizar essa forma em nossas aulas
Ex:
// Declara��o da fun��o
void gotoxy(int x, int y);

int main(){
 gotoxy(5,10);
 printf("Usando a fun��o gotoxy()");
}

// Implementa��o da fun��o
void gotoxy(int x, int y) {
  COORD c;
  c.X = x - 1;
  c.Y = y - 1;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}
______________________________________________
Registro: Permite criar novos tipos de dados a
partir dos tipos primitivos. Em Linguagem C 
Registros s�o chamados de Estruturas e a 
palavra-chave � struct. Para definir uma estrutura
como um novo tipo-de-dado utiliza-se a palavra-chave
typedef.
Ex:
typedef struct{
   char  nome[50];       // Membro nome
   int   matricula;      // Membro matricula
   float nota1;          // Membro nota1
   float nota2;          // Membro nota2
   float nota3;          // Membro nota3
   char  sexo;           // Membro sexo
}Aluno; // Nome da estrutura

Foi criado um novo tipo-de-dado chamado Aluno.
Para acessar cada membro da estrutura Aluno deve-se
utilizar: NomeEstrutura.NomeMembro
Ex: Aluno.nome
_____________________________________________
Vetor:
O vetor � uma estrutura de dados indexada, que pode 
armazenar uma determinada quantidade de valores 
do mesmo tipo. Os dados armazenados em um vetor 
s�o chamados de itens do vetor. Para localizar 
a posi��o de um item em um vetor usamos um n�mero
inteiro denominado �ndice do vetor.
Ex:
float notas[5] = {7, 8, 9.5, 9.9, 5.2};
Aluno listaAluno[50];
Para acessar o 3 elemento do vetor notas: notas[3]
Para acessar o 3 elemento do vetor listaAluno: listaAluno[3]
Para acessar o nome do 3 elemento do vetor listaAluno: listaAluno[3].nome
______________________________________________
*/

// Inclus�o das bibliotecas
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <windows.h>

// Declara��o dos Procedimentos e Fun��es
void gotoxy(int x, int y);
void cls();
void definirIdioma();
void menuPrincipal();
void incluir();
void listar();
void alterar();
void pesquisar();
void excluir();
void exibirDados(short indice);
void obterDados(short indice);
short existeMatricula(int matricula);

// Defini��o das estruturas
typedef struct{
   char  nome[50];       // Membro nome
   int   matricula;      // Membro matricula
   char  sexo;           // Membro sexo   
   float nota1;          // Membro nota1
   float nota2;          // Membro nota2
   float nota3;          // Membro nota3
}Aluno; // Nome da nova estrutura,novo tipo-de-dado

// Declara��o de vari�veis globais
Aluno listaAluno[50];
short contador=0;

// Fun��o: main() 
// Descri��o: Fun��o principal do programa.
// Parametro: N�o aplica
// Retorno  : Retorna 0 para sucesso
//            Retorna valor diferente de 0 para falha
// -------------------------------------------
// Hist�rico:
// Data :03/09/2019
// Autor:Benevaldo P. Gon�alves
// A��o :Cria��o da fun��o 
// -------------------------------------------
int main ()
 {
  definirIdioma();	
  cls();
  menuPrincipal();
  return(0);
}

// Procedimento: menuPrincipal() 
// Descri��o: Cria o menu principal do programa
// Parametro: N�o aplica
// -------------------------------------------
// Hist�rico:
// Data :03/09/2019
// Autor:Benevaldo P. Gon�alves
// A��o :Cria��o do procedimento 
// -------------------------------------------
void menuPrincipal(){
	short opcao=0;
	cls();
	gotoxy(30,2);
	printf("Menu Principal");
	gotoxy(25,4);
	printf("[1] - Inserir aluno");
	gotoxy(25,5);
	printf("[2] - Listar todos alunos");
	gotoxy(25,6);
	printf("[3] - Alter por matr�cula");
	gotoxy(25,7);
	printf("[4] - Pesquisar por matr�cula");
	gotoxy(25,8);
	printf("[5] - Excluir aluno por matr�cula");
	gotoxy(25,9);
	printf("[6] - Finalizar programa");

	gotoxy(25,11);
	printf("Entre com a op��o: ");
	fflush(stdin);
	scanf("%d",&opcao);
    switch(opcao)
    {
     case 1: incluir();
             break;
     case 2: listar();
             break;
     case 3: alterar();
             break;
     case 4: pesquisar();
             break;
     case 5: excluir();
             break;
     case 6:  gotoxy(25,12);
	          printf("Programa finalizado...");
	     	  getch();
		      break;
     default: gotoxy(25,12);
	          printf("Op��o Inv�lida...");
	          fflush(stdin);
	          getch();
	          menuPrincipal();
    }  
}

// Procedimento:definirIdioma() 
// Descri��o: Define o idioma do programa
// Parametro: N�o aplica
// -------------------------------------------
// Hist�rico:
// Data :03/09/2019
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
// Data :03/09/2019
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
// Data :03/09/2019
// Autor:Benevaldo P. Gon�alvees
// A��o :Cria��o do procedimento 
// -------------------------------------------
void gotoxy(int x, int y) {
  COORD c;
  c.X = x - 1;
  c.Y = y - 1;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

// Procedimento: incluir() 
// Descri��o: Inclui um registro de aluno
// Parametro: N�o aplica
// -------------------------------------------
// Hist�rico:
// Data :03/09/2019
// Autor:Benevaldo P. Gon�alves
// A��o :Cria��o do procedimento 
// -------------------------------------------
void incluir(){
	int matricula=0;
	cls();
	gotoxy(30,2);
	printf("Incluir Aluno");
	gotoxy(5,4);
	printf("Matr�cula : ");
    scanf("%d",&matricula);
    // Se a matr�cula N�O foi cadastrada a fun��o
	// existeMatricula() retorna -1
    if(existeMatricula(matricula) == -1)
	{
	 // Cadastrar aluno	
 	 listaAluno[contador].matricula = matricula;
	 obterDados(contador);
     gotoxy(5,12);
	 printf("Opera��o Finalizada. Pressione uma tecla.");
	 getch();
	 // Incrementar o contador para indicar um novo Aluno
	 contador++;	
	}else{
     gotoxy(5,12);
	 printf("A matr�cula %d j� foi cadastrada.Pressione uma tecla.",matricula);
	 getch();
	}
	menuPrincipal();
}

// Procedimento: listar() 
// Descri��o: Lista todos os registros de alunos cadastrado
// Parametro: N�o aplica
// -------------------------------------------
// Hist�rico:
// Data :03/09/2019
// Autor:Benevaldo P. Gon�alves
// A��o :Cria��o do procedimento 
// -------------------------------------------
void listar(){
 short   i=0;
 cls();
 gotoxy(30,2);
 printf("Listar todos Alunos");
 if ( (contador-1) >= 0 ){
  for(i=0;i<=contador-1;i++){
	cls();
	gotoxy(30,2);
	printf("Listar todos Alunos");
	exibirDados(i);
    gotoxy(5,12);
	printf("Pressione uma tecla para o pr�ximo.");
	getch();
  }
    gotoxy(5,12);
	printf("Opera��o Finalizada. Pressione uma tecla.");
	getch();

 }else{
    gotoxy(5,12);
	printf("Lista de Alunos est� vazia. Pressione uma tecla.");
	getch();
 }	
	menuPrincipal();
}

// Procedimento: alterar() 
// Descri��o: Altera um determinado registro de aluno
// Parametro: N�o aplica
// -------------------------------------------
// Hist�rico:
// Data :03/09/2019
// Autor:Benevaldo P. Gon�alves
// A��o :Cria��o do procedimento 
// -------------------------------------------
void alterar(){
  short resultado=0;
  int   matricula=0;
  cls();
  gotoxy(30,2);
  printf("Alterar dados do Aluno por Matr�cula");
  gotoxy(5,4);
  printf("Informe a Matr�cula : ",matricula);
  scanf("%d",&matricula);
  resultado= existeMatricula(matricula);	
  if (resultado != -1){
    obterDados(resultado);
    gotoxy(5,12);
    printf("Opera��o Finalizada. Pressione uma tecla.");
    getch();
  }else{
    gotoxy(5,12);
	printf("A matr�cula %d n�o foi cadastrada.Pressione uma tecla.",matricula);
	getch();
  }
  menuPrincipal();	
}

// Procedimento: pesquisar() 
// Descri��o: Pesquisa um determinado registro de aluno
// Parametro: N�o aplica
// -------------------------------------------
// Hist�rico:
// Data :03/09/2019
// Autor:Benevaldo P. Gon�alves
// A��o :Cria��o do procedimento 
// -------------------------------------------
void pesquisar()
{
  short resultado=0;
  int   matricula=0;
  cls();
  gotoxy(30,2);
  printf("Pesquisar Aluno por Matr�cula");
  gotoxy(5,4);
  printf("Informe a Matr�cula : ",matricula);
  scanf("%d",&matricula);
  resultado= existeMatricula(matricula);	
  if (resultado != -1){
    exibirDados(resultado);
    gotoxy(5,12);
    printf("Opera��o Finalizada. Pressione uma tecla.");
    getch();
  }else{
    gotoxy(5,12);
	printf("A matr�cula %d n�o foi cadastrada.Pressione uma tecla.",matricula);
	getch();
  }
  menuPrincipal();
}

// Procedimento: excluir() 
// Descri��o: Exclui um determinado registro de aluno
// Parametro: N�o aplica
// -------------------------------------------
// Hist�rico:
// Data :03/09/2019
// Autor:Benevaldo P. Gon�alves
// A��o :Cria��o do procedimento 
// -------------------------------------------
void excluir(){
  short resultado=0;
  int   matricula=0;
  Aluno listaAuxiliarAluno[50];
  short i;
  short contAux=0;
  cls();
  gotoxy(30,2);
  printf("Excluir aluno por matr�cula");
  gotoxy(5,4);
  printf("Informe a Matr�cula : ",matricula);
  scanf("%d",&matricula);
  // a vari�vel resultado recebe o indice do vetor
  // listaAluno que contem o elemento que ser� exclu�do,
  // caso exista.
  resultado= existeMatricula(matricula);	
  if (resultado != -1){
    exibirDados(resultado);
    // Realizar a exclus�o:
    // Quardar temporariamente os elementos da listaAluno 
	// no vetor listaAuxiliarAluno  
    for(i=0;i<=contador;i++){
      // Excluir o aluno identificado	
      if (resultado != i){
      	listaAuxiliarAluno[contAux] = listaAluno[i];
		contAux++;   
	  } 	
	}
	// Atualizar o vetor listaaluno com o vetor 
	// listaAuxiliarAluno atualizado com a exlus�o do aluno 
	for (i=0;i<=contAux;i++){
	 listaAluno[i] = listaAuxiliarAluno[i]; 	
	}
	// Um aluno foi exclu�do, ent�o deve-se 
	// decrementar o contador
    contador--;
    gotoxy(5,12);
    printf("Exclus�o realizada com sucesso. Pressione uma tecla.");
    getch();
  }else{
    gotoxy(5,12);
	printf("A matr�cula %d n�o foi cadastrada.Pressione uma tecla.",matricula);
	getch();
  }
  menuPrincipal();
}

// Procedimento: obterDados() 
// Descri��o: Obtem os dados da tela de um registro de aluno
// Parametro: indice - indica o indice ao qual ser� inserido
//            ou atuliaza os dados de um registro de aluno
//            no vetor listaAluno.
// -------------------------------------------
// Hist�rico:
// Data :03/09/2019
// Autor:Benevaldo P. Gon�alves
// A��o :Cria��o do procedimento 
// -------------------------------------------
void obterDados(short indice){
     gotoxy(5,5);
	 fflush(stdin);
	 printf("Nome      : ");
     gets(listaAluno[indice].nome);
     gotoxy(5,6);
	 fflush(stdin);
	 printf("Sexo (M/F): ");
	 listaAluno[indice].sexo = getchar();
     gotoxy(5,7);
	 printf("Nota 1    : ");
     scanf("%f",&listaAluno[indice].nota1);
     gotoxy(5,8);
	 printf("Nota 2    : ");
     scanf("%f",&listaAluno[indice].nota2);
     gotoxy(5,9);
	 printf("Nota 3    : ");
     scanf("%f",&listaAluno[indice].nota3);	    
}

// Procedimento: exibirDados() 
// Descri��o: Exibe os dados na tela de um determinado registro de aluno.
// Parametro: indice - indica o indice do elemento do vetor listaAluno, ao
//            qual ser� exibido na tela. 
// -------------------------------------------
// Hist�rico:
// Data :03/09/2019
// Autor:Benevaldo P. Gon�alves
// A��o :Cria��o do procedimento 
// -------------------------------------------
void exibirDados(short indice){
	float media = 0;
 	gotoxy(5,4);
 	printf("                                            ");
 	gotoxy(5,4);
	printf("Matr�cula :%d ",listaAluno[indice].matricula);
    gotoxy(5,5);
	printf("Nome      :%s ",listaAluno[indice].nome);
    gotoxy(5,6);
	printf("Sexo (M/F):%c ",listaAluno[indice].sexo);
    gotoxy(5,7);
	printf("Nota 1    :%.2f ",listaAluno[indice].nota1);
    gotoxy(5,8);
	printf("Nota 2    :%.2f ",listaAluno[indice].nota2);
    gotoxy(5,9);
	printf("Nota 3    :%.2f ",listaAluno[indice].nota3);
	media = (listaAluno[indice].nota1+listaAluno[indice].nota2+listaAluno[indice].nota3)/3;
    gotoxy(5,10);
	printf("M�dia     :%.2f ",media);
}


// Fun��o: existeMatricula() 
// Descri��o: Verifica se j� existe matr�cula cadastrada.
// Parametro: matr�cula - indica a matr�cula a ser verificada.
// Retorno  : Se a matr�cula existir retorna o indice do elemento.
//            Se a matr�cula N�O existir retorna -1   
// -------------------------------------------
// Hist�rico:
// Data :03/09/2019
// Autor:Benevaldo P. Gon�alves
// A��o :Cria��o da fun��o 
// -------------------------------------------
short existeMatricula(int matricula){
  // Retorna -1 se a matricula n�o existe
  short resultado=-1;
  short i=0;
  for(i=0;i<=contador-1;i++){
    if (matricula == listaAluno[i].matricula){
    	resultado=i;
	}	
  }
  return resultado;	
}


