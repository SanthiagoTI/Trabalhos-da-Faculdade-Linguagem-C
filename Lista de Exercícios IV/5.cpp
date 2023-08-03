#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	
	int a,b,soma;
	
	do{
	
	printf("Digite o primeiro valor: ");
	scanf("%d",&a);
	printf("Digite o segundo valor: ");
	scanf("%d",&b);
	
	soma = a + b;
	}while(soma <= 15);

return 0;


}
