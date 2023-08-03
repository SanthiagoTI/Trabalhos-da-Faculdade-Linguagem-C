#include <stdio.h>
#include <iostream>
#include <cstring>
#include <iomanip>
#include <locale.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL,"portuguese_Brazil");
	
	int vet[10], aux;
	
		for(int i=0; i<=9; i++){
			printf("Digite o %d° valor: ",i+1);
			scanf("%d",&vet[i]);
		}
		
		for(int i=0; i<=9; i++){
			printf("Os numeros Digitados: %d\n",vet[i]);
		}
		
		for(int i=0; i<=9; i++){
			for(int j=0; j<=9; j++){
				if(vet[i]<vet[j]){
					aux = vet[i];
					vet[i] = vet[j];
					vet[j] = aux;
				}
			}
		}
		
		for(int i=0; i<=9; i++){
			printf("Os numeros Digitados em ordem crescente: %d\n",vet[i]);
		}
}
	
