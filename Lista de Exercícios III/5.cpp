#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	float salario;
	float nota;

	printf("insira a nota\n");
	scanf("%f",&nota);
	
	if(nota >= 0 && nota <=10){
		if(nota<=1){
			printf("voce tirou F");
		}else if(nota<=2){
			printf("voce tirou E");
		}else if(nota == 3){
			printf("voce tirou D");
		}else if(nota == 4 || nota == 5){
			printf("voce tirou C");
		}else if(nota == 6 || nota == 7){
			printf("voce tirou B");
		}else if(nota == 8 || nota == 9 || nota == 10){
			printf("voce tirou A");
		}
	}
    return 0;
}

