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
	printf("-  = Subtra��o\n");
	printf("*  = Multiplica��o\n");
	printf("/  = Divis�o\n");
	scanf("%s",&c);
	
	while((c =='/') && (b==0)){
	if((c == '/') && (b==0)){
		printf("N�o � permitido divis�o por zero, escolha outro valor pra B: ");
		scanf("%f",&b);
	}
	}
	
	if(c == '+'){
		printf("A Soma dos valores �: %.2f",a+b);
	} else if(c == '-'){
		printf("A Subtra��o dos valores �: %.2f",a-b);
	} 
	else if(c == '*'){
		printf("A Multiplica��o dos valores �: %.2f",a*b);
	} 
	else if(c =='/'){
		printf("A Divis�o dos valores �: %.2f",a/b);
	} 
return 0;


}
