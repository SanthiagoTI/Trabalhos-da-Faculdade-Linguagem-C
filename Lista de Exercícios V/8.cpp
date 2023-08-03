#include <stdio.h>
#include <iostream>
#include <cstring>
#include <iomanip>
#include <locale.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL,"portuguese_Brazil");
	
	int matriz1[5][5];



			for(int i=0; i<=4;i++){
				for(int j=0; j<=4;j++){
					if((i==0) && (j==0)){
						matriz1[i][j] = 1;
					}
					else if((i==1) && (j==1)){
						matriz1[i][j] = 1;
					}
					else if((i==2) && (j==2)){
						matriz1[i][j] = 1;
					}
					else if((i==3) && (j==3)){
						matriz1[i][j] = 1;
					}
					else if((i==4) && (j==4)){
						matriz1[i][j] = 1;
					}else{
						matriz1[i][j]=0;
					}
				}
			}
	
		printf("-------------------------------------------------\n\n");
	printf("A Matriz\n");
	for(int i=0; i<=4; i++){
		for(int j=0; j<=4; j++){
			printf("%d\t",matriz1[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
