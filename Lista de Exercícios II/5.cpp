#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	
	float salario,aumento;
	int codigo;
	
	printf("Digite o salario: ");
	scanf("%f",&salario);
	
	printf("Digite o Codigo: ");
	scanf("%d",&codigo);
	
	if(codigo==1){
		aumento = salario * 0.50;
		printf("Codigo: 1\nCargo: Escrituario\nAumento: R$ %.2f\nNovo Salario: %.2f",aumento,salario+aumento);
	} else if(codigo==2){
		aumento = salario * 0.35;
		printf("Codigo: 2\nCargo: Secretario\nAumento: R$ %.2f\nNovo Salario: %.2f",aumento,salario+aumento);
	} else if(codigo==3){
		aumento = salario * 0.20;
		printf("Codigo: 3\nCargo: Caixa\nAumento: R$ %.2f\nNovo Salario: %.2f",aumento,salario+aumento);
	} else if(codigo==4){
		aumento = salario * 0.10;
		printf("Codigo: 4\nCargo: Gerente\nAumento: R$ %.2f\nNovo Salario: %.2f",aumento,salario+aumento);
	}else if(codigo==5){
		printf("Codigo: 4\nCargo: Diretor\nAumento: Sem aumento");
	}

return 0;


}
