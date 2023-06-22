/* Implementaçao de lista simples
	Atividade Prometheus
	Elias Alexander

*/

#include <iostream>
#include <list>

using namespace std;

int main(){
	list<int> lista;
	list<int>:: iterator it;
	for(int i=0;i<5;i++){
		lista.push_back(i);
	}
	for(int i=5;i<10;i++){
		lista.push_back(i);
	}
	//Conteudo da Lista
	cout << lista.front() << endl;
	
	cout << lista.back() << endl;
	
	cout << lista.size() << endl;
	
	for(it = lista.begin(); it !=lista.end(); it++) {
		
		if(*it %2 == 0){
			cout << *it << endl;
		}
	}
	
	it--;
	
	lista.insert(it,2,11);
	for(it = lista.begin(); it !=lista.end(); it++) {
		cout << *it << " ";	
	}
	cout << endl;
	it--;
	
	
lista.erase(it);

cout << lista.back() << endl;

lista.clear();

cout << lista.size() << endl;

	list<char> lista_char;
	list<char>:: iterator it2;

	lista_char.push_back('C');
	lista_char.push_back('U');
	lista_char.push_back('R');
	lista_char.push_back('S');
	lista_char.push_back('O');

	
	for(it2 = lista_char.begin(); it2 !=lista_char.end(); it2++) {
		cout << *it2 << " ";
	}

	return 0;
}
