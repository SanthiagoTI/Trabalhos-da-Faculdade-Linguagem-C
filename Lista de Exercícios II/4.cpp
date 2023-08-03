#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	
	float n1, n2, n3, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f",&n1);
	printf("Digite a Segunda nota: ");
	scanf("%f",&n2);
	printf("Digite a Terceira nota: ");
	scanf("%f",&n3);
	
	media = (n1+n2+n3)/3;
	
	if(media>=9){
		printf("%.2f, Muito Bom",media);
	} else if(media >= 7){
		printf("%.2f, Bom",media);
	} else if(media >= 5){
		printf("%.2f - Recuperação",media);
	} else if(media >= 0){
		printf("%.2f, Insuficiente",media);
	}

return 0;


}
