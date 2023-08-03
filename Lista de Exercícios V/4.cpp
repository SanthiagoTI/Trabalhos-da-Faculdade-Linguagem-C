#include <stdio.h>
#include <iostream>
#include <cstring>
#include <iomanip>
#include <locale.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL,"portuguese_Brazil");
	
	float n1, n2, n3, n4, aluno[10], media[10];

		for(int i=0; i<=9; i++){
			printf("Digite a 1° Nota do Aluno %d: ",i+1);
			scanf("%f",&n1);
			printf("Digite a 2° Nota do Aluno %d: ",i+1);
			scanf("%f",&n2);
			printf("Digite a 3° Nota do Aluno %d: ",i+1);
			scanf("%f",&n3);
			printf("Digite a 4° Nota do Aluno %d: ",i+1);
			scanf("%f",&n4);
			media[i]=(n1+n2+n3+n4)/4;
		}
		
		for(int i=0; i<=9; i++){
			if(media[i]>=7){
				printf("Aluno %d com Média: %.2f\n",i+1,media[i]);
			
			}
		}
}
	





