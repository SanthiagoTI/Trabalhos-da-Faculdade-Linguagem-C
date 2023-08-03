
#include <stdio.h>
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
int main (void)
{
	 int n[10];
	 
	 for(int i=0; i<=9; i++){
	 printf("Digite o %d numero: ",i+1);
	 scanf("%d",&n[i]);
	}
	
	for(int i=9; i>=0; i-- ){
		printf("o %d° numero do Vetor: %d\n",i+1,n[i]);
	}
	return 0;
}

