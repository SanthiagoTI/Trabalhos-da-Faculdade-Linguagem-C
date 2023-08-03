
#include <stdio.h>
#include <iostream>
#include <cstring>
#include <iomanip>
#include <locale.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL,"portuguese_Brazil");
	 int cont=0, fim;
	 char nome[10], conc[25];
	 
	 	
	 	for(int i=0; i<=24; i++){
	 		
	 	conc[i] = ("%c",98+i);
	 }
	 
	 	for(int i=0; i<=9; i++){
	 		
	 	printf("Digite o %d° caracter: ",i+1);
	 	scanf("%s",&nome[i]);
	 }
		
		for(int i=0; i<=9; i++){
	 		for(int j=0; j<=24; j++){
	 			fim = 0;
	 			if(((nome[i] == 'a') || (nome[i] == 'e')|| (nome[i] == 'i') || (nome[i] == 'o') || (nome[i] == 'u')) && (fim == 0)){
	 				fim = 1;
				 }
		 		else if((nome[i] == ("%c",conc[j])) && (fim == 0)){
		 			cont = cont +1;
		 		}
		 	}	
		 }
		 
		 printf("A quantidade de Consoante é: %d",cont);	
	 	
}
	





