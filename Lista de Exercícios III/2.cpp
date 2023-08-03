#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	
	float n1,n2;
	char operacao;
	
	
	printf("Digite o primeiro numero: ");
	scanf("%f",&n1);
	printf("Digite o Segundo numero: ");
	scanf("%f",&n2);
	
	printf("Digite o caracter: \n +: Soma\n -: Subtração\n *: Multiplicação\n /: Divisão \n: ");
	scanf("%s",&operacao);
	switch(operacao){
		case '+':
			printf("A soma: %.2f",n1+n2);
			break;
		case '-':
			printf("A subitração: %.2f",n1-n2);
			break;
		case '*':
			printf("A multiplicação: %.2f",n1*n2);
			break;
		case '/':
			printf("A divisão: %.2f",n1/n2);
			break;
		default:
			printf("Caractere Invalido");
	}

return 0;


}
