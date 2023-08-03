#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	
	float lado1,lado2,lado3;
	
	printf("Digite o 1° Lado do Triangulo: ");
	scanf("%f",&lado1);
	printf("Digite o 2° Lado do Triangulo: ");
	scanf("%f",&lado2);
	printf("Digite o 3° Lado do Triangulo: ");
	scanf("%f",&lado3);
	
	
	
if( ((lado1 + lado2) > lado3) && ((lado1 + lado3) > lado2) && ((lado2 + lado3) > lado1))
 {
		
	
	if((lado1 == lado2) && (lado1 == lado3) && (lado2 == lado3)){
		printf("Triangulo Equilatero");
	}

	else if((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3)){
		printf("Triangulo Isosceles");
	}
	 else {
		printf("Triangulo Escaleno");
	}
	
}
else
{
	printf("Não é um triangulo");
}
return 0;


}
