#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	int n, cont;
	do{
		
		printf("Digite um valor: ");
		scanf("%d",&n);
		
		if(n % 2 == 0){
			cont = cont +1;
		}
		
	}while(n % 11 != 0);

		printf("A quantidade de Par foi %d",cont);
		
return 0;


}
