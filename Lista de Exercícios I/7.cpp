#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
using namespace std;

int main(){setlocale(LC_ALL,"Portuguese_Brazil");
	
	int N1;
	int N2;
	int SOMA;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &N1);
	
    printf("Digite o segundo n�mero: ");
	scanf("%d", &N2);	
	
	SOMA = N1 + N2;
	
	printf("A soma dos valores digitados �: %d\n", SOMA);
    int a = pow(SOMA,2);
    
    printf("O resultado da eleva��o ao quadrado do produto da soma �: %d\n", a);
    int b = sqrt(a);
    
	printf("O resultado da raiz quadrada do produto da potencia��o �: %d\n", b);
	
return 0;
}
