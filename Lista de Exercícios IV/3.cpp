#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");

int idade,maior;
	int i;
	
			for(i=0;i<10;i++){
				printf("insira a idade %i: ",i);
				scanf("%d",&idade);
				if(idade >=18){
					maior++;
				}
			}
			
			printf("\n%d sao maiores de idade",maior);
	
	return 0;


}
