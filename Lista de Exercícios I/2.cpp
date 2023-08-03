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
	
	printf("Qual o salário do funcionário? \t");
	scanf("%f", &SAL);
	 
	printf("O sálario deste funcionário anualmente é: %1.f", SAL * 12);

return 0;
}
