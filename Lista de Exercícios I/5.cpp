#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main (int argc, char *argv[]){ setlocale(LC_ALL,"Portuguese_Brazil");

int numero;
int contador;
int resultado;
int decisao;

    printf("Digite um número para executar sua tabuada: ");
    scanf("%d", &numero);
    
	system("cls");
  
    printf("\n Então você quer saber a tabuada de %d, é isso mesmo ? ", numero );
  
    printf("\n 1 - sim \n");
    printf(" 2 - nao \n \n ");
    scanf("%d", &decisao );
   
 system("cls");
  
 if( decisao == 1 )
  {
   printf("\n --- TABUADA DE %d ----- \n", numero);
   
   for( contador = 0 ; contador < 11 ; contador ++ )
   {
    resultado = numero * contador ;
    
    system(" Color A");
    printf(" \n %d x %d = %d \n", numero, contador, resultado );
  }
 }
 
 else
 {
  printf("\n NÃO VAI TER TABUADA !!! \n");
 }
  
  return 0;
 }
