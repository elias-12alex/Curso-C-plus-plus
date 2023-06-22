/*#include <iostream>
using namespace std;

int main(){
	unsigned int dado = 0x9A;
	
	unsigned int mascara = 0x10;
	
	if (dado & mascara){
		cout << "o bit 4 esta ligado" <<endl;
	}else{
		cout << "o bit 4 esta desligado" << endl;
	}
	
	mascara = 0x04;
	dado |= mascara;
	cout << "Novo valor do dado: " << hex << dado << endl;
	
	
	unsigned int dado1 = (dado ^ mascara);
	cout << "Novo valor do dado: " << hex << dado1 << endl;
	

	unsigned int dado2 = (dado & mascara);
	cout << "Novo valor do dado: " << hex << dado2 << endl;
	
	return 0;
}
*/
