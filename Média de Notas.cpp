//Programa em C++
#include <iostream> 
using namespace std;
int main (void)
{
	setlocale (LC_ALL,"Portuguese_Brazil");
	float nota1,nota2,nota3,media;
	cout << "Digite as tres notas:";
	cin >> nota1 >> nota2 >> nota3;
	media = (nota1 + nota2 + nota3)/3;
	cout <<"Media = " << media << endl;
	
	    cout<<"Ola Santhiago";
	cout<<"\nSuas notas foram:"<<nota1
	<<","<<nota2<<"e"<<nota3;
	cout<<"\nPortanto sua media foi:"<<media;
	
	return 0;
}
