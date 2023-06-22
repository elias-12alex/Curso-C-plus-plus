/*/Aula 1

//	Aula 2
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
	
	int num1=10;
	int num2=3;
	float resultado_1= num1/num2;
	float resultado_2 = (float) num1 / num2;
	cout << "Resultado_1: " << resultado_1 << endl;
	cout << "Resultado_2: " << resultado_2 << endl;
	cout << "\n";
	cout << "Cast de INT para FLOAT";
	cout << "\n";
	system("Pause");
	
	
	//Cast de String para Char
	string nome = "Joao";
	int n = nome.length();
	char char_array[n + 1];
	strcpy(char_array, nome.c_str());
		for (int i=0; i<n; i++){
			cout << char_array[i];
			
		}
	cout << "\n";
	cout << char_array[0];
	cout << "\n";
	cout << char_array[1];
	cout << "\n";
	cout << char_array[2];
	cout << "\n";
	cout << char_array[3];
	
	cout << "\n";
	cout << "Cast de Sting para CHAR";
	cout << "\n";
	system("Pause");
	
	
	
	bool estudante = true;
	int val_estudante = (int) estudante;
	cout << "\n";
	cout << "Cast de Bool para INT";
	cout << "\n";
	cout << val_estudante;
	
	
	//Cast de String par Int Fazer !!!!
	
	
	
	//Cast de String para Float dividindo por 2 FAZER!!!!
	string numero_1 = "10";
	string numero_2 = "3";
	
	//float resultado = (float) numero_1 / numero_2;
	
	
	
	return 0;
	
	
}

/*           //Anotações
	TABELA VERDADE
	
	*/

















