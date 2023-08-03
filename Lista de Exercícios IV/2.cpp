#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	
	int n = 10;
	
	int x;
	
	int quantiaPares 	= 0,
		quantiaImpares 	= 0;
	register int i;
	
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &x);
		
		if( !(x%2) )
			quantiaPares++;
		else
			quantiaImpares++;
	}
	

	printf("%d numeros impares.\n", quantiaImpares);
	

return 0;


}
