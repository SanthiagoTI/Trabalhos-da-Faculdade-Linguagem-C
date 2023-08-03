#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>
#include <locale.h>
using namespace std;

int main (){ setlocale(LC_ALL,"Portuguese_Brazil");
	float N1, N2, N3, N4, MEDIA;
	
	printf("Digite a primeira nota: \t");
	scanf("%f", &N1);
	
	printf("Digite a segunda nota: \t");
	scanf("%f", &N2);
	
	printf("Digite a terceira nota: \t");
	scanf("%f", &N3);
	
	printf("Digite a quarta nota: \t");
	scanf("%f", &N4);
	
	MEDIA = (N1 + N2 + N3 + N4)/4 ;
	
	printf("A média final de todas as notas é: %.2f", MEDIA);
	
return 0;
}
