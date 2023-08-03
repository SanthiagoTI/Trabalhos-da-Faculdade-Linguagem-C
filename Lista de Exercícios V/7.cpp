#include <stdio.h>
#include <iostream>
#include <cstring>
#include <iomanip>
#include <locale.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL,"portuguese_Brazil");
	
	int matriz1[4][4], matriz2[4][4];
	float media,soma;
	
	for(int i=0; i<=3; i++){
		for(int j=0; j<=3; j++){
			printf("Digite o Valor da Linha %d e Coluna %d: ",i+1,j+1);
			scanf("%d",&matriz1[i][j]);
			
			soma = soma + matriz1[i][j];
		}
	}
	
	media = soma/16;
	
	printf("-------------------------------------------------\n\n");
	printf("A matriz é: \n");
	for(int i=0; i<=3; i++){
		for(int j=0; j<=3; j++){
			printf("%d\t",matriz1[i][j]);
		}
		printf("\n");
	}
	printf("-------------------------------------------------\n\n");
	printf("A soma da matriz é: %.2f\n",soma);
	printf("A Média da matriz é: %.2f",media);
	
	printf("-------------------------------------------------\n\n");
	
	for(int i=0; i<=3; i++){
		for(int j=0; j<=3; j++){
			if(matriz1[i][j]>media){
				matriz2[i][j] = matriz1[i][j];
			}
			else
			{
				matriz2[i][j] = 0;
			}
		}
	}
	printf("-------------------------------------------------\n\n");
	printf("A Matriz maior que a Média\n");
	for(int i=0; i<=3; i++){
		for(int j=0; j<=3; j++){
			printf("%d\t",matriz2[i][j]);
		}
		printf("\n");
	}
	
	
}
	
