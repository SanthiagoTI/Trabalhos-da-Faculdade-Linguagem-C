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
    	printf("A quantidade de Chuteiras CA dispon�veis s�o: %d", CA);
	}
	if( CB<=20 ){
    	printf("A quantidade de Chuteiras CB dispon�veis s�o: %d", CB);
	}
    if( CC<=50 ){
    	printf("A quantidade de Chuteiras CC dispon�veis s�o: %d", CC);
    }

return 0;    
}
