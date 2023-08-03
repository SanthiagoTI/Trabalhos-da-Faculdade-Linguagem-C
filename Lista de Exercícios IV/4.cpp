#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	
	int n[5], menor, maior;
	
	
	for(int i=0; i<=4; i++){
	printf("Digite o %d° número: ",i+1);
	scanf("%d",&n[i]);
	}
	
	for(int i=0; i<=4; i++){
		for(int j=0; j<=4; j++){
		
			if(n[i] > n[j+1]){
				maior = n[i];
			}else if (n[i] < n[j+1]){
				menor = n[i];
			}
		}
	}
	
	printf("O maior numero: %d",maior);
	printf("O Menor numero: %d",menor);

}
