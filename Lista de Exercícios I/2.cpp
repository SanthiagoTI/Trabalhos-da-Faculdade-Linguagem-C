#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>
#include <locale.h>
using namespace std;

int main (){ setlocale(LC_ALL,"Portuguese_Brazil");
	float SAL;
	
	printf("Qual o sal�rio do funcion�rio? \t");
	scanf("%f", &SAL);
	 
	printf("O s�lario deste funcion�rio anualmente �: %1.f", SAL * 12);

return 0;
}
