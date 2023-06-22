#include <iostream>
using namespace std;

class Ponteiros {
public:
    void printValor(int* ptr) {
        cout << "Valor: " << *ptr << std::endl;
    }
};

int main() {
    int n1 = 10;
    int* ptr = &n1;

    Ponteiros ponteiros;
    ponteiros.printValor(ptr);

    return 0;
}
	
/*int main(){
	
	int n1= 10, n2=20, *ptr;
	*ptr = n1;
	int recebe_ponteiros (*ptr);
	
	cout << "Valor de n1: " << n1 <<endl; //numero1
	cout << "Valor de n2: " << n2 <<endl; //numero2
	return recebe_ponteiros;
}*/
