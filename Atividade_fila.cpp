/* Implementaçao de pilha simples
	Atividade Prometheus
	Elias Alexander

*/
/*
#include <iostream>
#define tamanho 5

using namespace std;

typedef struct {
	int ini = 0;
	int fim = 0;
	int item [tamanho];
	
} FILA;

bool filaVazia(FILA p){
	if (p.ini == p.fim){
		return true;
	} else {
		return false;
	}
}

bool filaCheia(FILA p) {
	int tam = sizeof(p.item)/sizeof(int);
	
	if (p.fim < tam){
		return false;
	} else {
		return true;
	}
}

//adiciona valor na fila
void enfileira(FILA &p, int x){
	p.item[p.fim++] = x;
}

//remove valor da fita
int desinfileira(FILA &p){
	return (p.item[p.ini++]);
}

void mostraFila(FILA p){
	cout << "Valores da fila:";
	for(int i = p.ini; i < p.fim; i++){
		cout << p.item[i] << " ";
	}
	cout << "\n";
}


int main(){
	FILA s; //criar a fila
	
	if(filaVazia(s)){
		cout<< "Afila esta vazia"<<endl;
	} else {
		cout<< "A fila não esta vazia"<<endl;
	}
	
	enfileira(s,10);
	if(filaVazia(s)){
		cout<< "A fila esta vazia"<<endl;
	} else {
		cout<< "A fila não esta vazia." <<endl;
	}
	
	//insere 3 elementos da fila
	enfileira(s,20);
	enfileira(s,30);
	enfileira(s,40);
	
	mostraFila(s);
	
	
	if(filaCheia(s)){
		cout<< "A fila esta cheia"<<endl;
	} else {
		cout<< "A fila não esta cheia." <<endl;
	}

	return 0;
}*/
