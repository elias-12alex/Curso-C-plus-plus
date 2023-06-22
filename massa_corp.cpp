#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct massa_corporal
{
	double peso;
	double altura;
	double massa;
};

int main(){

	massa_corporal massa;
	cout << "Qual o peso (em kg): " << endl;
	cin >> massa.peso;
	cout << "Qual a altura (em metros): " << endl;
	cin >> massa.altura;

	massa.massa = massa.peso/(massa.altura*massa.altura);
	cout << "A massa corporal sera de: " << massa.massa << endl;
	cout << "\n";
	//system("Pause");

    return 0;
}
