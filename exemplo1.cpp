//topico 9 - 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//busca binaria

//busca personalizada

/*int main(){
	//Declarar um ponteiro para uma funçao que recebe dois inteiros e retorna um inteiro
	std::vector<int> numeros = {10,20,30,40,50};
		
	auto it = std::find(numeros.begin(), numeros.end(), 30);
	
	if(it != numeros.end()){
		std::cout << "Valor encontrado na posicao: " << std::distance(numeros.begin(), it) << std::endl;
	}else {
		std::cout << "Valor nao encontrado" << std::endl;
	}
	
	return 0;
	
}*/


/*fila
int main(){
	//Declarar um ponteiro para uma funçao que recebe dois inteiros e retorna um inteiro
	std::queue<int> minhaFila;
	
	minhaFila.push(10);
	minhaFila.push(20);
	minhaFila.push(30);	
	minhaFila.push(40);	
	
	std::cout << "Elemento da frente: " << minhaFila.front() << std::endl;
	
	minhaFila.pop();
	
	std::cout << "Novo elemento da frente: " << minhaFila.front() << std::endl;

	if(minhaFila.empty()){
		std::cout << "A fila esta vazia" << std::endl;
	}else {
		std::cout << "A fila nao esta vazia" << std::endl;
	}
	
	//Exibir o tamanh da fila
	std::cout << "Tamanho da Fila: " << minhaFila.size() << std::endl;
	
	return 0;
	
}*/
/*
int main(){
	//Declarar um ponteiro para uma funçao que recebe dois inteiros e retorna um inteiro
	std::list<int> minhaLista;
	
	minhaLista.push_back(10);
	minhaLista.push_back(20);
	minhaLista.push_back(30);	
	
	for (const auto& elemento : minhaLista) {
	std::cout << elemento << " ";
	}
	cout << endl;
	
	auto it = minhaLista.begin();
	std::advance(it, 1);
	minhaLista.insert(it, 15);
	
	it = minhaLista.begin();
	std::advance(it, 2);
	minhaLista.erase(it);
	
	for (const auto& elemento : minhaLista){
		std::cout << elemento << " ";
	}
	std::cout << endl;
	
	return 0;
	
}	
*/	
	

//FUNÇAO DE EXEMPLO

/*int soma(int a, int b){
	return a + b;
}

int multiplica(int c, int d){
	return c * d;
}

int main(){
	//Declarar um ponteiro para uma funçao que recebe dois inteiros e retorna um inteiro
	int (*ptr)(int, int);

	//Atribuir o endereço da funcao à variavel do ponteiro
	ptr = soma;
	//Chamar a funçao atraves do ponteiro
	int resultado = ptr(3,4);
	cout << "Resultado: " << resultado << endl;
	
	ptr = multiplica;
	int resultado2 = ptr(3,4);
	cout << "Resultado: " << resultado2 << endl;
	
	return 0;
}*/









/*	int num = 10;
	int num2 = 20;
	int *ptr = &num;
	int *ptr2 = &num2;
	
	cout << "Valor de num: " << num <<endl; //numero1
	cout << "Valor de num2: " << num2 <<endl; //numero2
	cout << "Endereço de num: " << &num << endl; //endereço1
	cout << "Valor de ptr: " << ptr <<endl; //endereço2
	cout << "Valor de ptr2: " << ptr2 <<endl; //
	cout << "Valor de num: " << *ptr <<endl;
	cout << "Valor de num2: " << *ptr2 <<endl;
	
	int soma1 = (*ptr + *ptr2); //soma1 
	*ptr = (*ptr + *ptr2); //soma2 
	//int *soma3 = (ptr + ptr2); //soma3 (dando erro)
	
	cout << "Valor de soma1: " << soma1 <<endl; //(Atividade 1)
	cout << "Valor de soma2: " << *ptr <<endl;	//(Atividade 1.1)
	//cout << "Valor de soma3: " << *soma3 <<endl;	
	
		

*/
