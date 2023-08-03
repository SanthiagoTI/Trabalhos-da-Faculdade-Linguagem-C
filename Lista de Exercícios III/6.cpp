#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	
	float a, b;
	char c;
	
	printf("Digite o primeiro Valor: ");
	scanf("%f",&a);
	printf("Digite o segundo Valor: ");
	scanf("%f",&b);
	
	printf("Digite o caracter\n");
	printf("+  = Somar\n");
	printf("-  = Subtração\n");
	printf("*  = Multiplicação\n");
	printf("/  = Divisão\n");
	scanf("%s",&c);
	
	while((c =='/') && (b==0)){
	if((c == '/') && (b==0)){
		printf("Não é permitido divisão por zero, escolha outro valor pra B: ");
		scanf("%f",&b);
	}
	}
	
	if(c == '+'){
		printf("A Soma dos valores é: %.2f",a+b);
	} else if(c == '-'){
		printf("A Subtração dos valores é: %.2f",a-b);
	} 
	else if(c == '*'){
		printf("A Multiplicação dos valores é: %.2f",a*b);
	} 
	else if(c =='/'){
		printf("A Divisão dos valores é: %.2f",a/b);
	} 
return 0;


}
