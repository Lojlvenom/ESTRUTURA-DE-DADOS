/*
_______________________________________________________
        Alocação de Memória Estática
_______________________________________________________
   Na alocação estática de memória, os tipos de dados 
tem tamanho predefinido. Neste caso, o compilador vai 
alocar de forma automática o espaço de memória necessário.
Sendo assim, dizemos que a alocação estática é feita em 
tempo de compilação. Este tipo de alocação tende a 
desperdiçar recursos, já que nem sempre é possível 
determinar previamente qual é o espaço necessário para 
armazenar as informações. Quando não se conhece o espaço 
total necessário, a tendência é o programador exagerar
pois é melhor superdimensionar do que faltar espaço.
Ex: Declração de variáveis, registros, vetores,
    matrizes.
_________________________________________________________
        Alocação de Memória Dinâmica
_________________________________________________________
  Na alocação dinâmica podemos alocar espaços durante a 
execução de um programa, ou seja, a alocação dinâmica é 
feita em tempo de execução. Isto é bem interessante do 
ponto de vista do programador, pois permite que o espaço
em memória seja alocado apenas quando necessário. Além disso,
a alocação dinâmica permite aumentar ou até diminuir a 
quantidade de memória alocada.
Ex: Todo tipo de estrutura de dados encadeado: lista,
fila, pilha, árvore, etc...
_______________________________________________________
       Funções para implementar alocação dinâmica:

sizeof: A função sizeof determina o número de bytes para 
        um determinado tipo de dados. É interessante notar
		que o número de bytes reservados pode variar de 
		acordo com o compilador utilizado.
		Ex: int x = sizeof(int); //retorna 4 bytes no compulador gcc
		
malloc: A função malloc aloca um espaço de memória e retorna
        um ponteiro do tipo void (genérico) para o início do espaço
		de memória alocado.
		EX: int *x =  (int *) malloc(sizeof(int));
		
free:   A função free libera o espaço de memória alocado.
        Ex: free(x);
_______________________________________________________
              Lista Encadeada
_______________________________________________________
Definição:
  Uma lista encadeada (linked list ou lista ligada) 
  é uma sequência de células ou NO; cada célula ou NO
  contém um um tipo de Dados (todos os dados são do 
  mesmo tipo) e o Endereço da célula seguinte.
  Listas encadeadas são estruturas de dados lineares 
  e dinâmicas, a grande vantagem que elas possuem 
  em relação ao uso de vetor é o fato de terem tamanho
  máximo relativamente infinito (o tamanho máximo é 
  o da memória do computador), ao mesmo tempo que 
  podem ter o tamanho mínimo de 1 elemento evitando o 
  desperdício de memória.

ATEÇÃO:
 1 - Uma célula ou NO é constituído de duas parte: uma que
     armazena o DADO e a outra que representa um PONTEIRO,
	 que permite encadear a lista, isto é, ligar os elementos. 
 2 - O Endereço de uma lista encadeada é o endereço de 
     sua primeira célula, por exemplo, uma lista possui
     10 elementos, então o endereço da primeira célula
     indica o início da lista.
 3 - Em uma lista encadeada linear o ultimo elemento 
     aponta para NULL .
 4 - O operador NULL indica o fim de uma lista.    
_______________________________________________________
    As principais Estratégias para manipular 
    uma Lista Encadeada:
 1 - Adicionar ou remover elemento da lista 
     a partir do Início da lista encadeada.
 2 - Adicionar ou remover elemento da lista
     a partir do Fim da lista.
 3 - Adicionar ou remover elemento da lista
     entre os elementos já existentes.
_______________________________________________________
                     Lista Encadeada
     Possui uma estrutura formada por dois elementos:
     
 1 - Uma área para armazenar o tipo de dados desejado;
 2 - Um Ponteiro utilizado para encadear as céluas da lista.  
_______________________________________________________
                     Lista Encadeada
     Uma lista possui as seguintes Operações:
     
  1 - Criar a estrutura da Lista;
  2 - Inicializar a Lista, equivalente a criar Lista;
  3 - Adicionar um elemento na lista:
     3.1 - Nesta operação é ALOCADO dinamicamente
           uma área de Memória para uma célula.
  4 - Remover um elemento da lista:
     4.1 - Nesta operação é DESALOCADO dinamicamente
           uma área de Memória usada pela célula.
  5 - Listar elementos da Lista;
  6 - Pesquisar elemento da Lista;
  7 - Alterar conteúdo da célula da Lista            
  8 - Verificar se a lista está vazia;
  9 - Destruir Lista: garantir que todas as céluas alocads
      foram desalocadas na memória.  
_______________________________________________________ 
*/

// Inclusão das bibliotecas
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <windows.h>

// Definição da estrutura de uma célula ou NO
// da Lista Encadeada
typedef struct celula {
  // tipo int 4 bytes	
  int         conteudo;     
  // Aponta para uma estrutura do MESMO tipo celula,
  // logo possui 4 bytes
  struct celula *proximo; 
  
}celula; 
// Novo tipo de dado chamado celula com total de 8 bytes.

// Declaração dos Procedimentos e Funções
void gotoxy(int x, int y);
void cls();
void definirIdioma();
void menuPrincipal(celula *inicio);

// Operações da Lista
// Estratégia utilizada:
//  1 - Adicionar ou remover elemento da lista 
//      a partir do Início da lista encadeada. 
void criarLista(celula *inicio);
void inserirDadoInicio(celula *inicio);
void removerDadoInicio(celula *inicio);
void exibirListaInicio(celula *inicio);
void pesquisarDadoInicio(celula *inicio);
void alterarDadoInicio(celula *inicio);
void apagarLista(celula *inicio);


// Função: main() 
// Descrição: Função principal do programa.
// Parametro: Não aplica
// Retorno  : Retorna 0 para sucesso
//            Retorna valor diferente de 0 para falha
// -------------------------------------------
// Histórico:
// Data :12/09/2019
// Autor:Benevaldo P. Gonçalves
// Ação :Criação da função 
// -------------------------------------------
int main ()
 {
  /*
  A estratégia de manipulação da lista encadeada
  adotada neste exemplo será a de adicionar ou 
  remover elementos da lista a partir do INÍCIO
  da lista.  
  */
  
  // Declara uma variável do tipo celula, indicando
  // a estratégia de manipulação da Lista: a partir do 
  // início da Lista.
  celula *inicio;
  /*
   ATENÇÃO:
   Como a variável *inicio é um ponteiro e o seu tipo
   celula é uma estrutura formada pelo elemento inteiro
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
// Descrição: Cria o menu principal do programa
// Parametro: Não aplica
// -------------------------------------------
// Histórico:
// Data :12/09/2019
// Autor:Benevaldo P. Gonçalves
// Ação :Criação do procedimento 
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
	printf("Entre com a opção: ");
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
     case 6:  // Garantir que toda memória que foi Alocada seja
              // Desalocada libernado espaço na memória.
	          apagarLista(inicio);
	          gotoxy(25,12);
	          printf("Lista apagada...");
	          gotoxy(25,14);
	          printf("Programa finalizado...");
	     	  getch();
		      break;
     default: gotoxy(25,12);
	          printf("Opção Inválida...");
	          fflush(stdin);
	          getch();
	          menuPrincipal(inicio);
    }  
}

// Procedimento:criarLista(...). 
// Descrição:
//   Cria e inicia uma estrtura de dados 
//   do tipo Lista Encaeada
// Parametro:
//   celula inicio   : Inicia a célula do início da Lista
//   Passagem de parametro por : referência 
// -------------------------------------------
// Histórico:
// -------------------------------------------
// Data : 12/09/2019
// Autor: Benevaldo P. Gonçalves
// Ação : Criação do procedimento 
// -------------------------------------------
void criarLista(celula *inicio){
 // O início de uma Lista sempre aponta para NULL, 
 // que indica o fim de uma lista.	
 inicio = NULL;
}

// Procedimento:inserirDadoInicio(...). 
// Descrição:
//   Cria uma nova célula dinamicamente e inseri no
//   início da Lista Encaeada
// Parametro:
//   celula inicio: indica a referência da célula que 
//                  aoponta para o inicio da Lista.
//   Parâmetro passado por: referência  
// -------------------------------------------
// Histórico:
// -------------------------------------------
// Data : 12/09/2019
// Autor: Benevaldo P. Gonçalves
// Ação : Criação do procedimento 
// -------------------------------------------
void inserirDadoInicio(celula *inicio){
   celula *nova; // Nova célula da lista: um ponteiro
   int    dado;  // Novo dado da lista
   
   // Aloca dinâmicamente a memória para a 
   // NOVA célula da lista.
   nova =  (celula*) malloc(sizeof(celula));
   /* ATENÇÃO:
    1 - Converter o ponteiro para o tipo de dados desejado,
        como a função malloc retorna um ponteiro do tipo void,
        precisamos converter esse ponteiro (void) para o tipo 
	    da nossa variável, no caso celula, para isso usamos 
	    o comando de conversão explicita: (celula*).
	2 - Um ponteiro do tipo void é considerado um ponteiro
	    Genérico, sendo necessário convertê-lo em um tipo
		específico da variável em uso, no caso: celula     
   */
   
  // Indica que NÃO existe memória disponível.
  if (nova == NULL)
  {
   	 gotoxy(25,12);
	 printf("Não existe memória suficiente para realizar a locação.");
	 fflush(stdin);
	 getch();
  }
  else
  {
   // Existe memória disponível.	
   // Obter o dado novo
   cls();
   gotoxy(25,2);
   printf("Entrada de Dados Inteiro");
   gotoxy(3,4);
   printf("Entre com um valor = ");
   scanf("%d",&dado);
   // Preencher os dados na NOVA célula que será
   // inserida no INÍCIO da Lista.
   nova->conteudo = dado; // Novo dado da celula
   nova->proximo  = NULL; // Iniciar o ponteiro da celula
   
   // Verificar SE a NOVA CÉLULA é a primeira da Lista
   if (inicio==NULL)
      //Se for verdadeiro: Primeiro elemento da Lista.
      // A célula início é atualizado para o novo elemento 
	  // da lista, isto é, o início aponta para o novo 
	  // elemento da Lista.
	  
	  // O ponteiro inicio recebe o endereço, retornado pela função malloc,
	  // da nova celeula, logo o ponteiro inicio aponta
	  // para o endereço da nova celula.
      inicio = nova; 
   else
    {
   	  // Já existe elemento na Lista
   	  // Estratégia: O novo elemento deve apontar para o endereço que 
	  // o ponteiro inicio aponta, mantendo assim a conexão com os 
	  // outros elementos da Lista
	  nova->proximo = inicio;
	   
	  // Em seguida, o ponteiro início deve ser atualizado, para isso
	  // deve-se apontar para o endereço do novo elemento,
	  // isto é, o NOVO elemento passa a ser o novo início da lista.
	  inicio  = nova; 
	}   	
  }
  // Retorna ao Menu Principal com
  // o ponteiro inicio atualizado. 
  menuPrincipal(inicio);
}

// Procedimento:removerDadoInicio(...). 
// Descrição:
//   Remove a célula do início da Lista dinamicamente  
//   desalocando espaço na menória
// Parametro:
//   celula inicio: indica a referência da célula que 
//                  aoponta para o inicio da Lista.
//   Parâmetro passado por: referência  
// -------------------------------------------
// Histórico:
// -------------------------------------------
// Data : 12/09/2019
// Autor: Benevaldo P. Gonçalves
// Ação : Criação do procedimento 
// -------------------------------------------
void removerDadoInicio(celula *inicio){
  celula *removerElemento;
  cls();
  gotoxy(30,2);
  printf("Excluir Dado");
  // Verificar se a Lsita está vazia
  if (inicio->proximo == NULL){
    gotoxy(3,5);
    printf("Lista está Vazia. Pressione uma tecla.");
    fflush(stdin);
	getch();
  }
  else
  {
  	// Obterm o elemento do Início
    removerElemento = inicio;
    // Atualiza o ponteiro do Início para o proximo 
    // elemento da Lista
    inicio = inicio->proximo;
    // Libera a memória alocada para o antigo primeiro elemento
    free(removerElemento);
    gotoxy(3,5);
	printf("Dado excluído com sucesso. Pressione uma tecla.");
	fflush(stdin);
	getch();
  }	
  menuPrincipal(inicio);
}

// Procedimento:exibirListaInicio(...). 
// Descrição:
//   Exibe todos os elementos da Lista a partir  
//   do início.
// Parametro:
//   celula inicio: indica a referência da célula que 
//                  aoponta para o inicio da Lista.
//   Parâmetro passado por: referência  
// -------------------------------------------
// Histórico:
// -------------------------------------------
// Data : 12/09/2019
// Autor: Benevaldo P. Gonçalves
// Ação : Criação do procedimento 
// -------------------------------------------
void exibirListaInicio(celula *inicio){
 // Representa a célula atual da lista	
 celula *elemento; 
 short  linha=5;
 short  cont=0;	
 cls();
 gotoxy(25,2);
 printf("Listar todos os Elementos da Lista");
 // Verifica se a Lista está vazia
 if (inicio->proximo == NULL){
   gotoxy(3,5);
   printf("Lista vazia. Pressione uma tecla.");
   fflush(stdin);
   getch();
 }else{
  // Existe elemento na lista
  // Aponta para o elemento do início da Lista
  elemento = inicio; 
  gotoxy(3,4);
  printf("Elemento da Lista:");
  // Realiza a loop até a lista chegar no fim = NULL
  while (elemento->proximo != NULL) {
  	 gotoxy(5,linha);
  	 // Exibe o Elemento (conteúdo) da Lista
     printf("Elemento[%d] = %d",cont,elemento->conteudo);
     // Obter o próximo elemento da Lista
     elemento = elemento->proximo;
     cont++;   // Indica a posição do elemento na Lista
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
// Descrição:
//   Pesquisa um determinado dado na Lista, a partir 
//   do início da Lista. Se a lsita tiver elementos 
//   repetidos o primeiro será exibido
// Parametro:
//   celula inicio: indica a referência da célula que 
//                  aoponta para o inicio da Lista.
//   Parâmetro passado por: referência  
// -------------------------------------------
// Histórico:
// -------------------------------------------
// Data : 12/09/2019
// Autor: Benevaldo P. Gonçalves
// Ação : Criação do procedimento 
// -------------------------------------------
void pesquisarDadoInicio(celula *inicio){
 int  dado=0;
 bool encontrouElemento = false;
 // Representa a célula atual da lista	
 celula *elemento; 
 short  cont=0;	
 cls();
 gotoxy(25,2);
 printf("Pesquisar Elemento da Lista");
 // Verifica se a Lista está vazia
 if (inicio->proximo == NULL){
   gotoxy(3,5);
   printf("Lista vazia. Pressione uma tecla.");
   fflush(stdin);
   getch();
 }else{
  // Existe elemento na lista
  // Aponta para o elemento do início da Lista
  elemento = inicio;
  gotoxy(3,4);
  printf("Entre com um valor = ");
  scanf("%d",&dado); 
  // Realiza a loop até a lista chegar no fim = NULL
  while (elemento->proximo != NULL) {
     // Verificar o dado de pesquisa 
     if(elemento->conteudo == dado)
	 {
   	   gotoxy(5,5);
  	   // Exibe o Elemento (conteúdo) da Lista e a sua posição
       printf("Elemento[%d] = %d",cont,elemento->conteudo);
       encontrouElemento = true; // Indica que achou o elemento na Lista
	 }
     // Obter o próximo elemento da Lista
     elemento = elemento->proximo;
     cont++;  // indica a posição do elemento da Lista
  }
  
  if(!encontrouElemento){
   gotoxy(3,6);
   printf("O dado %d, não consta na Lista.",dado);
  }
  gotoxy(3,8);
  printf("Pressione uma tecla...");
  fflush(stdin);  // libera o buffer do teclado
  getch(); 	
 }
 menuPrincipal(inicio);	
}

// Procedimento:alterarDadoInicio(...). 
// Descrição:
//   Pesquisa e altera um determinado dado na Lista,  
//   a partir do início da Lista. Se a lista tiver elementos 
//   repetidos o primeiro será alterado
// Parametro:
//   celula inicio: indica a referência da célula que 
//                  aoponta para o inicio da Lista.
//   Parâmetro passado por: referência  
// -------------------------------------------
// Histórico:
// -------------------------------------------
// Data : 12/09/2019
// Autor: Benevaldo P. Gonçalves
// Ação : Criação do procedimento 
// -------------------------------------------
void alterarDadoInicio(celula *inicio){
 int  dadoDaLista=0;
 int  novoDado=0; 
 bool encontrouElemento = false;
 // Representa a célula atual da lista	
 celula *elemento; 
 short  cont=0;	
 cls();
 gotoxy(25,2);
 printf("Alterar Elemento da Lista");
 // Verifica se a Lista está vazia
 if (inicio->proximo == NULL){
   gotoxy(3,5);
   printf("Lista vazia. Pressione uma tecla.");
   fflush(stdin);
   getch();
 }else{
  // Existe elemento na lista
  // Aponta para o elemento do início da Lista
  elemento = inicio;
  gotoxy(3,4);
  printf("Entre com o Dado a ser alterado = ");
  scanf("%d",&dadoDaLista);
  gotoxy(3,5);
  printf("Entre com o novo Dado           = ");
  scanf("%d",&novoDado);

  // Realiza a loop até a lista chegar no fim = NULL
  while (elemento->proximo != NULL) {
     // Verificar o dado de pesquisa.
	 // Este procedimento verifica o primeiro elemento
	 // encontrado, caso exista outro elemento igual
	 // na lista não será alterado, apenas o primeiro 
     if(elemento->conteudo == dadoDaLista)
	 {
   	   gotoxy(3,7);
  	   // Exibe o Elemento (conteúdo) da Lista e a sua posição
       printf("Elemento[%d] = %d",cont,elemento->conteudo);
       // Alterar o dado encontrado
       elemento->conteudo = novoDado; 
   	   gotoxy(3,8);
  	   // Exibe o Elemento (conteúdo) da Lista e a sua posição
       printf("Novo Elemento[%d] = %d",cont,elemento->conteudo);
       // Indica que achou o elemento na Lista
       encontrouElemento = true; 
	 }
     // Obter o próximo elemento da Lista
     elemento = elemento->proximo;
     cont++;  // indica a posição do elemento da Lista
  }
  // Se NÃO encontrou o elemento
  if(!encontrouElemento){
   gotoxy(3,6);
   printf("O dado a ser alterado [%d], não consta na Lista.",dadoDaLista);
  }
  gotoxy(3,10);
  printf("Pressione uma tecla...");
  fflush(stdin);
  getch(); 	
 }
 menuPrincipal(inicio);	
}

// Procedimento:apagarLista(...). 
// Descrição:
//   Apaga todos as células da Lsita desalocando  
//   dinamicamente a memória.
// Parametro:
//   celula inicio: indica a referência da célula que 
//                  aoponta para o inicio da Lista.
//   Parâmetro passado por: referência  
// -------------------------------------------
// Histórico:
// -------------------------------------------
// Data : 12/09/2019
// Autor: Benevaldo P. Gonçalves
// Ação : Criação do procedimento 
// -------------------------------------------
void apagarLista(celula *inicio){
 // Representa a célula que será apagada		
 celula *apagarCelula; 
 int cont=0;
 // Realiza a loop até a lista chegar no fim = NULL
 while (inicio != NULL) {
 	  cont++;
 	 // Obtem a célua do início da Lista.
 	 apagarCelula = inicio;
	 // O inicio aponta para a próxima célula da lsita     
 	 inicio = inicio->proximo;
	 // Libera a memória dinamicamente da celula apagada  
 	 free(apagarCelula);       
  }
  printf("Quantidade: %d\n",cont);
  system("pause");
}

// Procedimento:definirIdioma() 
// Descrição: Define o idioma do programa
// Parametro: Não aplica
// -------------------------------------------
// Histórico:
// Data :12/09/2019
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
// Parametro: int x - Indica a coluna da tela: por valor
//            int y - Indica a linha  da tela: por valor          
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

