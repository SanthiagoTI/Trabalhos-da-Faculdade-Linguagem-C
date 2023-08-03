#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	
int tabuada = 0;
    int x;
    printf("\nDigite a tabuada que você deseja \n\t\t\t\n>>> ");
    scanf("%i", &tabuada);

    for(x = 1; x<=10; ++x){
        
        printf("%ix%i = %i\n", x, tabuada, x * tabuada);
    }

    return 0;


}
