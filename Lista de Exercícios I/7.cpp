#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
using namespace std;

int main(){setlocale(LC_ALL,"Portuguese_Brazil");
	
	int N1;
	int N2;
	int SOMA;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &N1);
	
    printf("Digite o segundo número: ");
	scanf("%d", &N2);	
	
	SOMA = N1 + N2;
	
	printf("A soma dos valores digitados é: %d\n", SOMA);
    int a = pow(SOMA,2);
    
    printf("O resultado da elevação ao quadrado do produto da soma é: %d\n", a);
    int b = sqrt(a);
    
	printf("O resultado da raiz quadrada do produto da potenciação é: %d\n", b);
	
return 0;
}
