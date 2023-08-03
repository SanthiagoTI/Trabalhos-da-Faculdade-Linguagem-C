#include <stdio.h>
#include <iostream>
#include <cstring>
#include <iomanip>
#include <locale.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL,"portuguese_Brazil");
	
	int matriz[3][3],soma[3];
	



			for(int i=0; i<=2; i++){
		for(int j=0; j<=2; j++){
			printf("Digite o Valor da Linha %d e Coluna %d: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
				}
			}
			
		printf("-------------------------------------------------\n\n");
		
	printf("----------A Matriz-----------\n");
	for(int i=0; i<=2; i++){
		for(int j=0; j<=2; j++){
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
		printf("\n\n-------------------------------------------------\n\n");
		
	
				soma[0] = matriz[0][0] + matriz[1][0] + matriz[2][0];

				soma[1] = matriz[0][1] + matriz[1][1] + matriz[2][1];
	
				soma[2] = matriz[0][2] + matriz[1][2] + matriz[2][2];
		
			
			for(int i=0; i<=2;i++){
				printf("%d\t",soma[i]);
			}
	return 0;
}
