#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main (){ setlocale(LC_ALL,"Portuguese_Brazil");
	
	float LADO, AREA, PERIMETRO;
	
	printf("Digite quantos lados possui o quadrado: \t");
	scanf("%f", &LADO);	
	
	AREA = LADO * LADO;
	PERIMETRO = 4 * LADO;

    printf("O valor da área é %.2f \n", AREA);
    printf("O valor do perímetro é %.2f \n", PERIMETRO);
return 0;
}

