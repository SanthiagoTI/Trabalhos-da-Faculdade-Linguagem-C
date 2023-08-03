#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main(int argc, char * * argv){
	int tempo, horas, minutos, segundos;
	
	horas = 0;
	minutos = 0;
	segundos = 0;
	
	printf("informe o tempo: ");
	scanf("%d", &tempo);
	
	segundos = tempo;
	while(segundos >= 60){
		minutos ++;
		if(minutos == 60){
			horas ++;
			minutos = 0;
		}
		segundos = segundos - 60;
	}
	printf("Tempo: [%d]:[%d]:[%d]\n\n", horas, minutos, segundos);

system("pause");
return 0;
}
