#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	
	int idade;
	
	printf("Digite a idade do nadador: ");
	scanf("%d",&idade);
	
	if(idade > 18){
		printf("Adulto");
	} else if(idade >= 14){
		printf("Juvenil B");
	} else if(idade >= 11){
		printf("Juvenil A");
	} else if(idade >= 8){
		printf("Infantil B");
	} else if(idade >= 5){
		printf("Infantil A");
	}
	
	
return 0;


}
