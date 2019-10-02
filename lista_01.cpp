/*
_______________________________________________________
        Aloca��o de Mem�ria Est�tica
_______________________________________________________
   Na aloca��o est�tica de mem�ria, os tipos de dados 
tem tamanho predefinido. Neste caso, o compilador vai 
alocar de forma autom�tica o espa�o de mem�ria necess�rio.
Sendo assim, dizemos que a aloca��o est�tica � feita em 
tempo de compila��o. Este tipo de aloca��o tende a 
desperdi�ar recursos, j� que nem sempre � poss�vel 
determinar previamente qual � o espa�o necess�rio para 
armazenar as informa��es. Quando n�o se conhece o espa�o 
total necess�rio, a tend�ncia � o programador exagerar
pois � melhor superdimensionar do que faltar espa�o.
Ex: Declra��o de vari�veis, registros, vetores,
    matrizes.
_________________________________________________________
        Aloca��o de Mem�ria Din�mica
_________________________________________________________
  Na aloca��o din�mica podemos alocar espa�os durante a 
execu��o de um programa, ou seja, a aloca��o din�mica � 
feita em tempo de execu��o. Isto � bem interessante do 
ponto de vista do programador, pois permite que o espa�o
em mem�ria seja alocado apenas quando necess�rio. Al�m disso,
a aloca��o din�mica permite aumentar ou at� diminuir a 
quantidade de mem�ria alocada.
Ex: Todo tipo de estrutura de dados encadeado: lista,
fila, pilha, �rvore, etc...
_______________________________________________________
       Fun��es para implementar aloca��o din�mica:

sizeof: A fun��o sizeof determina o n�mero de bytes para 
        um determinado tipo de dados. � interessante notar
		que o n�mero de bytes reservados pode variar de 
		acordo com o compilador utilizado.
		Ex: int x = sizeof(int); //retorna 4 bytes no compulador gcc
		
malloc: A fun��o malloc aloca um espa�o de mem�ria e retorna
        um ponteiro do tipo void (gen�rico) para o in�cio do espa�o
		de mem�ria alocado.
		EX: int *x =  (int *) malloc(sizeof(int));
		
free:   A fun��o free libera o espa�o de mem�ria alocado.
        Ex: free(x);
_______________________________________________________
              Lista Encadeada
_______________________________________________________
Defini��o:
  Uma lista encadeada (linked list ou lista ligada) 
  � uma sequ�ncia de c�lulas ou NO; cada c�lula ou NO
  cont�m um um tipo de Dados (todos os dados s�o do 
  mesmo tipo) e o Endere�o da c�lula seguinte.
  Listas encadeadas s�o estruturas de dados lineares 
  e din�micas, a grande vantagem que elas possuem 
  em rela��o ao uso de vetor � o fato de terem tamanho
  m�ximo relativamente infinito (o tamanho m�ximo � 
  o da mem�ria do computador), ao mesmo tempo que 
  podem ter o tamanho m�nimo de 1 elemento evitando o 
  desperd�cio de mem�ria.

ATE��O:
 1 - Uma c�lula ou NO � constitu�do de duas parte: uma que
     armazena o DADO e a outra que representa um PONTEIRO,
	 que permite encadear a lista, isto �, ligar os elementos. 
 2 - O Endere�o de uma lista encadeada � o endere�o de 
     sua primeira c�lula, por exemplo, uma lista possui
     10 elementos, ent�o o endere�o da primeira c�lula
     indica o in�cio da lista.
 3 - Em uma lista encadeada linear o ultimo elemento 
     aponta para NULL .
 4 - O operador NULL indica o fim de uma lista.    
_______________________________________________________
    As principais Estrat�gias para manipular 
    uma Lista Encadeada:
 1 - Adicionar ou remover elemento da lista 
     a partir do In�cio da lista encadeada.
 2 - Adicionar ou remover elemento da lista
     a partir do Fim da lista.
 3 - Adicionar ou remover elemento da lista
     entre os elementos j� existentes.
_______________________________________________________
                     Lista Encadeada
     Possui uma estrutura formada por dois elementos:
     
 1 - Uma �rea para armazenar o tipo de dados desejado;
 2 - Um Ponteiro utilizado para encadear as c�luas da lista.  
_______________________________________________________
                     Lista Encadeada
     Uma lista possui as seguintes Opera��es:
     
  1 - Criar a estrutura da Lista;
  2 - Inicializar a Lista, equivalente a criar Lista;
  3 - Adicionar um elemento na lista:
     3.1 - Nesta opera��o � ALOCADO dinamicamente
           uma �rea de Mem�ria para uma c�lula.
  4 - Remover um elemento da lista:
     4.1 - Nesta opera��o � DESALOCADO dinamicamente
           uma �rea de Mem�ria usada pela c�lula.
  5 - Listar elementos da Lista;
  6 - Pesquisar elemento da Lista;
  7 - Alterar conte�do da c�lula da Lista            
  8 - Verificar se a lista est� vazia;
  9 - Destruir Lista: garantir que todas as c�luas alocads
      foram desalocadas na mem�ria.  
_______________________________________________________ 
*/

// Inclus�o das bibliotecas
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <windows.h>

// Defini��o da estrutura de uma c�lula ou NO
// da Lista Encadeada
typedef struct celula {
  // tipo int 4 bytes	
  int         conteudo;     
  // Aponta para uma estrutura do MESMO tipo celula,
  // logo possui 4 bytes
  struct celula *proximo; 
  
}celula; 
// Novo tipo de dado chamado celula com total de 8 bytes.

// Declara��o dos Procedimentos e Fun��es
void gotoxy(int x, int y);
void cls();
void definirIdioma();
void menuPrincipal(celula *inicio);

// Opera��es da Lista
// Estrat�gia utilizada:
//  1 - Adicionar ou remover elemento da lista 
//      a partir do In�cio da lista encadeada. 
void criarLista(celula *inicio);
void inserirDadoInicio(celula *inicio);
void removerDadoInicio(celula *inicio);
void exibirListaInicio(celula *inicio);
void pesquisarDadoInicio(celula *inicio);
void alterarDadoInicio(celula *inicio);
void apagarLista(celula *inicio);


// Fun��o: main() 
// Descri��o: Fun��o principal do programa.
// Parametro: N�o aplica
// Retorno  : Retorna 0 para sucesso
//            Retorna valor diferente de 0 para falha
// -------------------------------------------
// Hist�rico:
// Data :12/09/2019
// Autor:Benevaldo P. Gon�alves
// A��o :Cria��o da fun��o 
// -------------------------------------------
int main ()
 {
  /*
  A estrat�gia de manipula��o da lista encadeada
  adotada neste exemplo ser� a de adicionar ou 
  remover elementos da lista a partir do IN�CIO
  da lista.  
  */
  
  // Declara uma vari�vel do tipo celula, indicando
  // a estrat�gia de manipula��o da Lista: a partir do 
  // in�cio da Lista.
  celula *inicio;
  /*
   ATEN��O:
   Como a vari�vel *inicio � um ponteiro e o seu tipo
   celula � uma estrutura formada pelo elemento inteiro
   conteudo e pelo ponteiro proximo. Para acessar cada
   elemento deve-se utilizar o simbolo [->] para acessar
   cada elemento da estrutura.
   Ex: inicio->conteudo e inicio->proximo  
  */
  
  definirIdioma();	
  cls();
  // Inicia ou cria uma Lista  
  criarLista(inicio);
  menuPrincipal(inicio);
  return EXIT_SUCCESS;
}


// Procedimento: menuPrincipal() 
// Descri��o: Cria o menu principal do programa
// Parametro: N�o aplica
// -------------------------------------------
// Hist�rico:
// Data :12/09/2019
// Autor:Benevaldo P. Gon�alves
// A��o :Cria��o do procedimento 
// -------------------------------------------
void menuPrincipal(celula *inicio){
	short opcao=0;
	cls();
	gotoxy(30,2);
	printf("Menu Principal");
	gotoxy(25,4);
	printf("[1] - Inserir");
	gotoxy(25,5);
	printf("[2] - Listar");
	gotoxy(25,6);
	printf("[3] - Alterar");
	gotoxy(25,7);
	printf("[4] - Pesquisar");
	gotoxy(25,8);
	printf("[5] - Excluir");
	gotoxy(25,9);
	printf("[6] - Finalizar programa");

	gotoxy(25,11);
	printf("Entre com a op��o: ");
	fflush(stdin);
	scanf("%d",&opcao);
    switch(opcao)
    {
     case 1: inserirDadoInicio(inicio);
             break;
     case 2: exibirListaInicio(inicio);
             break;
     case 3: alterarDadoInicio(inicio);
             break;
     case 4: pesquisarDadoInicio(inicio);
             break;
     case 5: removerDadoInicio(inicio);
             break;
     case 6:  // Garantir que toda mem�ria que foi Alocada seja
              // Desalocada libernado espa�o na mem�ria.
	          apagarLista(inicio);
	          gotoxy(25,12);
	          printf("Lista apagada...");
	          gotoxy(25,14);
	          printf("Programa finalizado...");
	     	  getch();
		      break;
     default: gotoxy(25,12);
	          printf("Op��o Inv�lida...");
	          fflush(stdin);
	          getch();
	          menuPrincipal(inicio);
    }  
}

// Procedimento:criarLista(...). 
// Descri��o:
//   Cria e inicia uma estrtura de dados 
//   do tipo Lista Encaeada
// Parametro:
//   celula inicio   : Inicia a c�lula do in�cio da Lista
//   Passagem de parametro por : refer�ncia 
// -------------------------------------------
// Hist�rico:
// -------------------------------------------
// Data : 12/09/2019
// Autor: Benevaldo P. Gon�alves
// A��o : Cria��o do procedimento 
// -------------------------------------------
void criarLista(celula *inicio){
 // O in�cio de uma Lista sempre aponta para NULL, 
 // que indica o fim de uma lista.	
 inicio = NULL;
}

// Procedimento:inserirDadoInicio(...). 
// Descri��o:
//   Cria uma nova c�lula dinamicamente e inseri no
//   in�cio da Lista Encaeada
// Parametro:
//   celula inicio: indica a refer�ncia da c�lula que 
//                  aoponta para o inicio da Lista.
//   Par�metro passado por: refer�ncia  
// -------------------------------------------
// Hist�rico:
// -------------------------------------------
// Data : 12/09/2019
// Autor: Benevaldo P. Gon�alves
// A��o : Cria��o do procedimento 
// -------------------------------------------
void inserirDadoInicio(celula *inicio){
   celula *nova; // Nova c�lula da lista: um ponteiro
   int    dado;  // Novo dado da lista
   
   // Aloca din�micamente a mem�ria para a 
   // NOVA c�lula da lista.
   nova =  (celula*) malloc(sizeof(celula));
   /* ATEN��O:
    1 - Converter o ponteiro para o tipo de dados desejado,
        como a fun��o malloc retorna um ponteiro do tipo void,
        precisamos converter esse ponteiro (void) para o tipo 
	    da nossa vari�vel, no caso celula, para isso usamos 
	    o comando de convers�o explicita: (celula*).
	2 - Um ponteiro do tipo void � considerado um ponteiro
	    Gen�rico, sendo necess�rio convert�-lo em um tipo
		espec�fico da vari�vel em uso, no caso: celula     
   */
   
  // Indica que N�O existe mem�ria dispon�vel.
  if (nova == NULL)
  {
   	 gotoxy(25,12);
	 printf("N�o existe mem�ria suficiente para realizar a loca��o.");
	 fflush(stdin);
	 getch();
  }
  else
  {
   // Existe mem�ria dispon�vel.	
   // Obter o dado novo
   cls();
   gotoxy(25,2);
   printf("Entrada de Dados Inteiro");
   gotoxy(3,4);
   printf("Entre com um valor = ");
   scanf("%d",&dado);
   // Preencher os dados na NOVA c�lula que ser�
   // inserida no IN�CIO da Lista.
   nova->conteudo = dado; // Novo dado da celula
   nova->proximo  = NULL; // Iniciar o ponteiro da celula
   
   // Verificar SE a NOVA C�LULA � a primeira da Lista
   if (inicio==NULL)
      //Se for verdadeiro: Primeiro elemento da Lista.
      // A c�lula in�cio � atualizado para o novo elemento 
	  // da lista, isto �, o in�cio aponta para o novo 
	  // elemento da Lista.
	  
	  // O ponteiro inicio recebe o endere�o, retornado pela fun��o malloc,
	  // da nova celeula, logo o ponteiro inicio aponta
	  // para o endere�o da nova celula.
      inicio = nova; 
   else
    {
   	  // J� existe elemento na Lista
   	  // Estrat�gia: O novo elemento deve apontar para o endere�o que 
	  // o ponteiro inicio aponta, mantendo assim a conex�o com os 
	  // outros elementos da Lista
	  nova->proximo = inicio;
	   
	  // Em seguida, o ponteiro in�cio deve ser atualizado, para isso
	  // deve-se apontar para o endere�o do novo elemento,
	  // isto �, o NOVO elemento passa a ser o novo in�cio da lista.
	  inicio  = nova; 
	}   	
  }
  // Retorna ao Menu Principal com
  // o ponteiro inicio atualizado. 
  menuPrincipal(inicio);
}

// Procedimento:removerDadoInicio(...). 
// Descri��o:
//   Remove a c�lula do in�cio da Lista dinamicamente  
//   desalocando espa�o na men�ria
// Parametro:
//   celula inicio: indica a refer�ncia da c�lula que 
//                  aoponta para o inicio da Lista.
//   Par�metro passado por: refer�ncia  
// -------------------------------------------
// Hist�rico:
// -------------------------------------------
// Data : 12/09/2019
// Autor: Benevaldo P. Gon�alves
// A��o : Cria��o do procedimento 
// -------------------------------------------
void removerDadoInicio(celula *inicio){
  celula *removerElemento;
  cls();
  gotoxy(30,2);
  printf("Excluir Dado");
  // Verificar se a Lsita est� vazia
  if (inicio->proximo == NULL){
    gotoxy(3,5);
    printf("Lista est� Vazia. Pressione uma tecla.");
    fflush(stdin);
	getch();
  }
  else
  {
  	// Obterm o elemento do In�cio
    removerElemento = inicio;
    // Atualiza o ponteiro do In�cio para o proximo 
    // elemento da Lista
    inicio = inicio->proximo;
    // Libera a mem�ria alocada para o antigo primeiro elemento
    free(removerElemento);
    gotoxy(3,5);
	printf("Dado exclu�do com sucesso. Pressione uma tecla.");
	fflush(stdin);
	getch();
  }	
  menuPrincipal(inicio);
}

// Procedimento:exibirListaInicio(...). 
// Descri��o:
//   Exibe todos os elementos da Lista a partir  
//   do in�cio.
// Parametro:
//   celula inicio: indica a refer�ncia da c�lula que 
//                  aoponta para o inicio da Lista.
//   Par�metro passado por: refer�ncia  
// -------------------------------------------
// Hist�rico:
// -------------------------------------------
// Data : 12/09/2019
// Autor: Benevaldo P. Gon�alves
// A��o : Cria��o do procedimento 
// -------------------------------------------
void exibirListaInicio(celula *inicio){
 // Representa a c�lula atual da lista	
 celula *elemento; 
 short  linha=5;
 short  cont=0;	
 cls();
 gotoxy(25,2);
 printf("Listar todos os Elementos da Lista");
 // Verifica se a Lista est� vazia
 if (inicio->proximo == NULL){
   gotoxy(3,5);
   printf("Lista vazia. Pressione uma tecla.");
   fflush(stdin);
   getch();
 }else{
  // Existe elemento na lista
  // Aponta para o elemento do in�cio da Lista
  elemento = inicio; 
  gotoxy(3,4);
  printf("Elemento da Lista:");
  // Realiza a loop at� a lista chegar no fim = NULL
  while (elemento->proximo != NULL) {
  	 gotoxy(5,linha);
  	 // Exibe o Elemento (conte�do) da Lista
     printf("Elemento[%d] = %d",cont,elemento->conteudo);
     // Obter o pr�ximo elemento da Lista
     elemento = elemento->proximo;
     cont++;   // Indica a posi��o do elemento na Lista
     linha++;  // Controla a linha da tela para exibir o dado
  }
  gotoxy(3,linha);
  printf("Fim da Lista. Tamanho = %d bytes.", (cont * sizeof(inicio)));
  fflush(stdin);
  getch(); 	
 }
 menuPrincipal(inicio);	
}

// Procedimento:pesquisarDadoInicio(...). 
// Descri��o:
//   Pesquisa um determinado dado na Lista, a partir 
//   do in�cio da Lista. Se a lsita tiver elementos 
//   repetidos o primeiro ser� exibido
// Parametro:
//   celula inicio: indica a refer�ncia da c�lula que 
//                  aoponta para o inicio da Lista.
//   Par�metro passado por: refer�ncia  
// -------------------------------------------
// Hist�rico:
// -------------------------------------------
// Data : 12/09/2019
// Autor: Benevaldo P. Gon�alves
// A��o : Cria��o do procedimento 
// -------------------------------------------
void pesquisarDadoInicio(celula *inicio){
 int  dado=0;
 bool encontrouElemento = false;
 // Representa a c�lula atual da lista	
 celula *elemento; 
 short  cont=0;	
 cls();
 gotoxy(25,2);
 printf("Pesquisar Elemento da Lista");
 // Verifica se a Lista est� vazia
 if (inicio->proximo == NULL){
   gotoxy(3,5);
   printf("Lista vazia. Pressione uma tecla.");
   fflush(stdin);
   getch();
 }else{
  // Existe elemento na lista
  // Aponta para o elemento do in�cio da Lista
  elemento = inicio;
  gotoxy(3,4);
  printf("Entre com um valor = ");
  scanf("%d",&dado); 
  // Realiza a loop at� a lista chegar no fim = NULL
  while (elemento->proximo != NULL) {
     // Verificar o dado de pesquisa 
     if(elemento->conteudo == dado)
	 {
   	   gotoxy(5,5);
  	   // Exibe o Elemento (conte�do) da Lista e a sua posi��o
       printf("Elemento[%d] = %d",cont,elemento->conteudo);
       encontrouElemento = true; // Indica que achou o elemento na Lista
	 }
     // Obter o pr�ximo elemento da Lista
     elemento = elemento->proximo;
     cont++;  // indica a posi��o do elemento da Lista
  }
  
  if(!encontrouElemento){
   gotoxy(3,6);
   printf("O dado %d, n�o consta na Lista.",dado);
  }
  gotoxy(3,8);
  printf("Pressione uma tecla...");
  fflush(stdin);  // libera o buffer do teclado
  getch(); 	
 }
 menuPrincipal(inicio);	
}

// Procedimento:alterarDadoInicio(...). 
// Descri��o:
//   Pesquisa e altera um determinado dado na Lista,  
//   a partir do in�cio da Lista. Se a lista tiver elementos 
//   repetidos o primeiro ser� alterado
// Parametro:
//   celula inicio: indica a refer�ncia da c�lula que 
//                  aoponta para o inicio da Lista.
//   Par�metro passado por: refer�ncia  
// -------------------------------------------
// Hist�rico:
// -------------------------------------------
// Data : 12/09/2019
// Autor: Benevaldo P. Gon�alves
// A��o : Cria��o do procedimento 
// -------------------------------------------
void alterarDadoInicio(celula *inicio){
 int  dadoDaLista=0;
 int  novoDado=0; 
 bool encontrouElemento = false;
 // Representa a c�lula atual da lista	
 celula *elemento; 
 short  cont=0;	
 cls();
 gotoxy(25,2);
 printf("Alterar Elemento da Lista");
 // Verifica se a Lista est� vazia
 if (inicio->proximo == NULL){
   gotoxy(3,5);
   printf("Lista vazia. Pressione uma tecla.");
   fflush(stdin);
   getch();
 }else{
  // Existe elemento na lista
  // Aponta para o elemento do in�cio da Lista
  elemento = inicio;
  gotoxy(3,4);
  printf("Entre com o Dado a ser alterado = ");
  scanf("%d",&dadoDaLista);
  gotoxy(3,5);
  printf("Entre com o novo Dado           = ");
  scanf("%d",&novoDado);

  // Realiza a loop at� a lista chegar no fim = NULL
  while (elemento->proximo != NULL) {
     // Verificar o dado de pesquisa.
	 // Este procedimento verifica o primeiro elemento
	 // encontrado, caso exista outro elemento igual
	 // na lista n�o ser� alterado, apenas o primeiro 
     if(elemento->conteudo == dadoDaLista)
	 {
   	   gotoxy(3,7);
  	   // Exibe o Elemento (conte�do) da Lista e a sua posi��o
       printf("Elemento[%d] = %d",cont,elemento->conteudo);
       // Alterar o dado encontrado
       elemento->conteudo = novoDado; 
   	   gotoxy(3,8);
  	   // Exibe o Elemento (conte�do) da Lista e a sua posi��o
       printf("Novo Elemento[%d] = %d",cont,elemento->conteudo);
       // Indica que achou o elemento na Lista
       encontrouElemento = true; 
	 }
     // Obter o pr�ximo elemento da Lista
     elemento = elemento->proximo;
     cont++;  // indica a posi��o do elemento da Lista
  }
  // Se N�O encontrou o elemento
  if(!encontrouElemento){
   gotoxy(3,6);
   printf("O dado a ser alterado [%d], n�o consta na Lista.",dadoDaLista);
  }
  gotoxy(3,10);
  printf("Pressione uma tecla...");
  fflush(stdin);
  getch(); 	
 }
 menuPrincipal(inicio);	
}

// Procedimento:apagarLista(...). 
// Descri��o:
//   Apaga todos as c�lulas da Lsita desalocando  
//   dinamicamente a mem�ria.
// Parametro:
//   celula inicio: indica a refer�ncia da c�lula que 
//                  aoponta para o inicio da Lista.
//   Par�metro passado por: refer�ncia  
// -------------------------------------------
// Hist�rico:
// -------------------------------------------
// Data : 12/09/2019
// Autor: Benevaldo P. Gon�alves
// A��o : Cria��o do procedimento 
// -------------------------------------------
void apagarLista(celula *inicio){
 // Representa a c�lula que ser� apagada		
 celula *apagarCelula; 
 int cont=0;
 // Realiza a loop at� a lista chegar no fim = NULL
 while (inicio != NULL) {
 	  cont++;
 	 // Obtem a c�lua do in�cio da Lista.
 	 apagarCelula = inicio;
	 // O inicio aponta para a pr�xima c�lula da lsita     
 	 inicio = inicio->proximo;
	 // Libera a mem�ria dinamicamente da celula apagada  
 	 free(apagarCelula);       
  }
  printf("Quantidade: %d\n",cont);
  system("pause");
}

// Procedimento:definirIdioma() 
// Descri��o: Define o idioma do programa
// Parametro: N�o aplica
// -------------------------------------------
// Hist�rico:
// Data :12/09/2019
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
// Parametro: int x - Indica a coluna da tela: por valor
//            int y - Indica a linha  da tela: por valor          
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

