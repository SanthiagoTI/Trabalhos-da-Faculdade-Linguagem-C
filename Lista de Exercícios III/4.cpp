#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	float salario;
	
	printf("escreva seu salario\n");
	scanf("%f",&salario);
	
	if(salario <= 600){
		printf("isento");
	}else if(salario >= 600 && salario <=1200){
		printf("o desconto é de 20%%");
	}else if(salario >= 1200 && salario <=2000){
		printf("o desconto é de 25%%");
	}else if(salario > 2000){
		printf("o desconto é de 30%%");
	}
	
	return 0;
}
