#include <stdio.h>
#include <iostream>
#include <cstring>
#include <iomanip>
#include <locale.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL,"portuguese_Brazil");
	
	int vetor1[10], vetor2[10], vetor3[20];

		for(int i=0; i<=9; i++){
			printf("Digite a %d� n�mero do Vetor 1: ",i+1);
			scanf("%d",&vetor1[i]);
					
		}
		
		for(int i=0; i<=9; i++){
			printf("Digite a %d� n�mero do Vetor 2: ",i+1);
			scanf("%d",&vetor2[i]);
		}
		
		
		for(int i=0; i<=9; i++){
				vetor3[i]=vetor1[i];
			}
		
		for(int i=0; i<=9; i++){
				vetor3[i+10]=vetor2[i];
			}
	
		
		for(int i=0; i<=19; i++){
			printf("Posic�o %d: N�mero: %d\n",i+1,vetor3[i]);
		}
		
}
	
