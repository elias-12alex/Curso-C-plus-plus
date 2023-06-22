/* Implementacao de structs para saber massa corporal ou area do circulo 
	Atividade Prometheus
	Elias Alexander
*/

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

struct area_do_Circulo
{
	double circun;
	double raio;
	double area;
};

int main(){
    int op;

    cout << "1. Area do circulo" << endl;
    cout << "2. Massa Corporal" << endl;

    cout << "Digite sua opção: ";
    cin >> op;

    switch(op){
        case 1:
            cout << "Opção selecionada: Area do círculo" << endl;
            area_do_Circulo a;
			//a.circun = 2*a.raio;
			cout << "Qual será o raio: " << endl;
			cin >> a.raio;
			a.area = M_PI*(a.raio*a.raio);
			cout << "Area do Circulo eh: " << a.area << endl;
			cout << "\n";
			//system("Pause");
			break;
        case 2:
            cout << "Opção selecionada: Massa Corporal" << endl;
            massa_corporal massa;
			cout << "Qual o peso (em kg): " << endl;
			cin >> massa.peso;
			cout << "Qual a altura (em metros): " << endl;
			cin >> massa.altura;

			massa.massa = massa.peso/(massa.altura*massa.altura);
			cout << "A massa corporal sera de: " << massa.massa << endl;
			cout << "\n";
			//system("Pause");

			break;
        default:
            cout << "Opção inválida " << endl;
            break;    
    }

	


    return 0;
}