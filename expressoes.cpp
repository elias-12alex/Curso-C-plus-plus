#include <iostream>

using namespace std;
int main(){
    int a = 5, b = 10, c = 15;
    int resultado = (a+b)*c / b - a % b;
    int div = a/0;

    cout << "Resultado: " << resultado << endl;
    cout << "Resultado da divisao: " << div << endl; //Erro! Fazer tratamento
    
    return 0;

}