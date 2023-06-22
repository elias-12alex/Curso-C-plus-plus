/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	string name[3];
	
	name[0] = "UFAM";
	name[1] = "CURSO";
	name[2] = "C++";
	
	cout << "Nome: " <<name[0] << endl;
    cout << "Nome: " <<name[1] << endl;
    cout << "Nome: " <<name[2] << endl;
    
    //std::cout << std::endl;

    return 0;
}
*/


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
	
	
	return 0;
	
	
	
}
