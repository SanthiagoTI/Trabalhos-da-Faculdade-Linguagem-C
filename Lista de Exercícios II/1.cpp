#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main(){setlocale(LC_ALL,"Portuguese_Brazil");
    char NOME[250], SEXO;
    
    printf("Digite o seu nome: ");
    scanf("%s", &NOME);
    
    printf("Digite o Sexo:\nM --> Masculino\nF --> Feminino\n: ");
	scanf("%s",&SEXO);

    if((SEXO == 'm') || (SEXO == 'M')){
    	
		printf("Olá Ilmo.Sr %s", NOME);
	}
	else if((SEXO=='F') || (SEXO=='f')){
		
		printf("Olá Ilma.Sra %s", NOME);
	}
return 0;  
}
