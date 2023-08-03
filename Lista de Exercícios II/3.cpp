#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	
	float salario;
	int tempo;
	
	printf("Digite o salario do Funcionario: ");
	scanf("%f",&salario);
	
	printf("Digite o Tempo de casa: ");
	scanf("%d",&tempo);
	
	if(tempo >= 10){
		printf("O novo salario: R$ %.2f", salario * 1.30);
	}else{
		printf("O novo salario: R$ %.2f", salario * 1.375);
	}
	
return 0;


}
