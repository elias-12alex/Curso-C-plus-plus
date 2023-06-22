#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Vetores {
private:
    int vetor[10];

public:
    Vetores() {
        for (int i = 0; i < 10; i++) {
            vetor[i] = rand() % 100; // Valores quaisquer de 0 a 99
        }
    }

    int getValor(int i) {
        return vetor[i];
    }

};

int main() {
    Vetores vet;

    int indice = 5;
    int valor = vet.getValor(indice);
    cout << "Valor retornado: " << valor << endl;

    return 0;
}

