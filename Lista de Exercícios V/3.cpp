#include <stdio.h>
#include <iostream>
#include <cstring>
#include <iomanip>
#include <locale.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL,"portuguese_Brazil");
	
	int tam1=0, tam2=0, vetor[20], impar[20], par[20];
	
		for(int i=0; i<=19;i++){
			printf("Digite o %d° Número: ",i+1);
			scanf("%d",&vetor[i]);
		}
		
		for(int i=0; i<=19;i++){
			if(vetor[i] % 2 == 0)
			{
				par[i] = vetor[i];
				tam2 = tam2 + 1;
			}
			else if(vetor[i] % 2 == 1){
			
				impar[i] = vetor[i];
				tam1 = tam1 + 1;
		}
	}
		printf("Primeiro Vetor\n");
		
		
		for(int i=0; i<=19;i++){
			printf("%d\n",vetor[i]);
			
		}
		
		
		
			printf("-----------------------------------\n\n");
			printf("Vetor de numeros Pares\n");
		for(int i=0; i<=19-1;i++){
			if(vetor[i] % 2 == 0)
			{
			printf("%d\n",par[i]);
			}
		}
		
		
			printf("-----------------------------------\n\n");
			printf("Vetor de numeros Impares\n");
		for(int i=0; i<=19-1;i++){
			 if(vetor[i] % 2 == 1){
			printf("%d\n",impar[i]);
		}
		}
		
	
		
	return 0;
}
