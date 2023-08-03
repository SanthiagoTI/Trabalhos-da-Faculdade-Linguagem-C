#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>
#include <locale.h>
using namespace std;

int main (){ setlocale(LC_ALL,"Portuguese_Brazil");
    int CA, CB, CC, total;
    
    CA =  10;
    CB = 20;
    CC = 50;
    
    printf("Quantas chuteiras a loja possui: \t");
    scanf("%d", CA, CB, CC);
    
    if( CA<=10 ){
    	printf("A quantidade de Chuteiras CA disponíveis são: %d", CA);
	}
	if( CB<=20 ){
    	printf("A quantidade de Chuteiras CB disponíveis são: %d", CB);
	}
    if( CC<=50 ){
    	printf("A quantidade de Chuteiras CC disponíveis são: %d", CC);
    }

return 0;    
}
