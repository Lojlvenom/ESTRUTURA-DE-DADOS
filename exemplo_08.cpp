/*
______________________________________________
Funções:
Existem duas formas de definir uma função em C:
Primeira forma: Criar a função antes da main
Ex:
void gotoxy(int x, int y) {
  COORD c;
  c.X = x - 1;
  c.Y = y - 1;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main(){
 gotoxy(5,10);
 printf("Usando a função gotoxy()");
}
Segunda forma: Somente Declatar a função antes da main e 
implementar o código da função depois da main. Vamos 
utilizar essa forma em nossas aulas
Ex:
// Declaração da função
void gotoxy(int x, int y);

int main(){
 gotoxy(5,10);
 printf("Usando a função gotoxy()");
}

// Implementação da função
void gotoxy(int x, int y) {
  COORD c;
  c.X = x - 1;
  c.Y = y - 1;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}
______________________________________________
Registro: Permite criar novos tipos de dados a
partir dos tipos primitivos. Em Linguagem C 
Registros são chamados de Estruturas e a 
palavra-chave é struct. Para definir uma estrutura
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
O vetor é uma estrutura de dados indexada, que pode 
armazenar uma determinada quantidade de valores 
do mesmo tipo. Os dados armazenados em um vetor 
são chamados de itens do vetor. Para localizar 
a posição de um item em um vetor usamos um número
inteiro denominado índice do vetor.
Ex:
float notas[5] = {7, 8, 9.5, 9.9, 5.2};
Aluno listaAluno[50];
Para acessar o 3 elemento do vetor notas: notas[3]
Para acessar o 3 elemento do vetor listaAluno: listaAluno[3]
Para acessar o nome do 3 elemento do vetor listaAluno: listaAluno[3].nome
______________________________________________
*/

// Inclusão das bibliotecas
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <windows.h>

// Declaração dos Procedimentos e Funções
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

// Definição das estruturas
typedef struct{
   char  nome[50];       // Membro nome
   int   matricula;      // Membro matricula
   char  sexo;           // Membro sexo   
   float nota1;          // Membro nota1
   float nota2;          // Membro nota2
   float nota3;          // Membro nota3
}Aluno; // Nome da nova estrutura,novo tipo-de-dado

// Declaração de variáveis globais
Aluno listaAluno[50];
short contador=0;

// Função: main() 
// Descrição: Função principal do programa.
// Parametro: Não aplica
// Retorno  : Retorna 0 para sucesso
//            Retorna valor diferente de 0 para falha
// -------------------------------------------
// Histórico:
// Data :03/09/2019
// Autor:Benevaldo P. Gonçalves
// Ação :Criação da função 
// -------------------------------------------
int main ()
 {
  definirIdioma();	
  cls();
  menuPrincipal();
  return(0);
}

// Procedimento: menuPrincipal() 
// Descrição: Cria o menu principal do programa
// Parametro: Não aplica
// -------------------------------------------
// Histórico:
// Data :03/09/2019
// Autor:Benevaldo P. Gonçalves
// Ação :Criação do procedimento 
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
	printf("[3] - Alter por matrícula");
	gotoxy(25,7);
	printf("[4] - Pesquisar por matrícula");
	gotoxy(25,8);
	printf("[5] - Excluir aluno por matrícula");
	gotoxy(25,9);
	printf("[6] - Finalizar programa");

	gotoxy(25,11);
	printf("Entre com a opção: ");
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
	          printf("Opção Inválida...");
	          fflush(stdin);
	          getch();
	          menuPrincipal();
    }  
}

// Procedimento:definirIdioma() 
// Descrição: Define o idioma do programa
// Parametro: Não aplica
// -------------------------------------------
// Histórico:
// Data :03/09/2019
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
// Data :03/09/2019
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
// Data :03/09/2019
// Autor:Benevaldo P. Gonçalvees
// Ação :Criação do procedimento 
// -------------------------------------------
void gotoxy(int x, int y) {
  COORD c;
  c.X = x - 1;
  c.Y = y - 1;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

// Procedimento: incluir() 
// Descrição: Inclui um registro de aluno
// Parametro: Não aplica
// -------------------------------------------
// Histórico:
// Data :03/09/2019
// Autor:Benevaldo P. Gonçalves
// Ação :Criação do procedimento 
// -------------------------------------------
void incluir(){
	int matricula=0;
	cls();
	gotoxy(30,2);
	printf("Incluir Aluno");
	gotoxy(5,4);
	printf("Matrícula : ");
    scanf("%d",&matricula);
    // Se a matrícula NÃO foi cadastrada a função
	// existeMatricula() retorna -1
    if(existeMatricula(matricula) == -1)
	{
	 // Cadastrar aluno	
 	 listaAluno[contador].matricula = matricula;
	 obterDados(contador);
     gotoxy(5,12);
	 printf("Operação Finalizada. Pressione uma tecla.");
	 getch();
	 // Incrementar o contador para indicar um novo Aluno
	 contador++;	
	}else{
     gotoxy(5,12);
	 printf("A matrícula %d já foi cadastrada.Pressione uma tecla.",matricula);
	 getch();
	}
	menuPrincipal();
}

// Procedimento: listar() 
// Descrição: Lista todos os registros de alunos cadastrado
// Parametro: Não aplica
// -------------------------------------------
// Histórico:
// Data :03/09/2019
// Autor:Benevaldo P. Gonçalves
// Ação :Criação do procedimento 
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
	printf("Pressione uma tecla para o próximo.");
	getch();
  }
    gotoxy(5,12);
	printf("Operação Finalizada. Pressione uma tecla.");
	getch();

 }else{
    gotoxy(5,12);
	printf("Lista de Alunos está vazia. Pressione uma tecla.");
	getch();
 }	
	menuPrincipal();
}

// Procedimento: alterar() 
// Descrição: Altera um determinado registro de aluno
// Parametro: Não aplica
// -------------------------------------------
// Histórico:
// Data :03/09/2019
// Autor:Benevaldo P. Gonçalves
// Ação :Criação do procedimento 
// -------------------------------------------
void alterar(){
  short resultado=0;
  int   matricula=0;
  cls();
  gotoxy(30,2);
  printf("Alterar dados do Aluno por Matrícula");
  gotoxy(5,4);
  printf("Informe a Matrícula : ",matricula);
  scanf("%d",&matricula);
  resultado= existeMatricula(matricula);	
  if (resultado != -1){
    obterDados(resultado);
    gotoxy(5,12);
    printf("Operação Finalizada. Pressione uma tecla.");
    getch();
  }else{
    gotoxy(5,12);
	printf("A matrícula %d não foi cadastrada.Pressione uma tecla.",matricula);
	getch();
  }
  menuPrincipal();	
}

// Procedimento: pesquisar() 
// Descrição: Pesquisa um determinado registro de aluno
// Parametro: Não aplica
// -------------------------------------------
// Histórico:
// Data :03/09/2019
// Autor:Benevaldo P. Gonçalves
// Ação :Criação do procedimento 
// -------------------------------------------
void pesquisar()
{
  short resultado=0;
  int   matricula=0;
  cls();
  gotoxy(30,2);
  printf("Pesquisar Aluno por Matrícula");
  gotoxy(5,4);
  printf("Informe a Matrícula : ",matricula);
  scanf("%d",&matricula);
  resultado= existeMatricula(matricula);	
  if (resultado != -1){
    exibirDados(resultado);
    gotoxy(5,12);
    printf("Operação Finalizada. Pressione uma tecla.");
    getch();
  }else{
    gotoxy(5,12);
	printf("A matrícula %d não foi cadastrada.Pressione uma tecla.",matricula);
	getch();
  }
  menuPrincipal();
}

// Procedimento: excluir() 
// Descrição: Exclui um determinado registro de aluno
// Parametro: Não aplica
// -------------------------------------------
// Histórico:
// Data :03/09/2019
// Autor:Benevaldo P. Gonçalves
// Ação :Criação do procedimento 
// -------------------------------------------
void excluir(){
  short resultado=0;
  int   matricula=0;
  Aluno listaAuxiliarAluno[50];
  short i;
  short contAux=0;
  cls();
  gotoxy(30,2);
  printf("Excluir aluno por matrícula");
  gotoxy(5,4);
  printf("Informe a Matrícula : ",matricula);
  scanf("%d",&matricula);
  // a variável resultado recebe o indice do vetor
  // listaAluno que contem o elemento que será excluído,
  // caso exista.
  resultado= existeMatricula(matricula);	
  if (resultado != -1){
    exibirDados(resultado);
    // Realizar a exclusão:
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
	// listaAuxiliarAluno atualizado com a exlusão do aluno 
	for (i=0;i<=contAux;i++){
	 listaAluno[i] = listaAuxiliarAluno[i]; 	
	}
	// Um aluno foi excluído, então deve-se 
	// decrementar o contador
    contador--;
    gotoxy(5,12);
    printf("Exclusão realizada com sucesso. Pressione uma tecla.");
    getch();
  }else{
    gotoxy(5,12);
	printf("A matrícula %d não foi cadastrada.Pressione uma tecla.",matricula);
	getch();
  }
  menuPrincipal();
}

// Procedimento: obterDados() 
// Descrição: Obtem os dados da tela de um registro de aluno
// Parametro: indice - indica o indice ao qual será inserido
//            ou atuliaza os dados de um registro de aluno
//            no vetor listaAluno.
// -------------------------------------------
// Histórico:
// Data :03/09/2019
// Autor:Benevaldo P. Gonçalves
// Ação :Criação do procedimento 
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
// Descrição: Exibe os dados na tela de um determinado registro de aluno.
// Parametro: indice - indica o indice do elemento do vetor listaAluno, ao
//            qual será exibido na tela. 
// -------------------------------------------
// Histórico:
// Data :03/09/2019
// Autor:Benevaldo P. Gonçalves
// Ação :Criação do procedimento 
// -------------------------------------------
void exibirDados(short indice){
	float media = 0;
 	gotoxy(5,4);
 	printf("                                            ");
 	gotoxy(5,4);
	printf("Matrícula :%d ",listaAluno[indice].matricula);
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
	printf("Média     :%.2f ",media);
}


// Função: existeMatricula() 
// Descrição: Verifica se já existe matrícula cadastrada.
// Parametro: matrícula - indica a matrícula a ser verificada.
// Retorno  : Se a matrícula existir retorna o indice do elemento.
//            Se a matrícula NÃO existir retorna -1   
// -------------------------------------------
// Histórico:
// Data :03/09/2019
// Autor:Benevaldo P. Gonçalves
// Ação :Criação da função 
// -------------------------------------------
short existeMatricula(int matricula){
  // Retorna -1 se a matricula não existe
  short resultado=-1;
  short i=0;
  for(i=0;i<=contador-1;i++){
    if (matricula == listaAluno[i].matricula){
    	resultado=i;
	}	
  }
  return resultado;	
}


