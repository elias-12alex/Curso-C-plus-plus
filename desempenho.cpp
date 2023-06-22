/* Implementaçao de busca binaria
	Atividade Prometheus
	Elias Alexander

*/

/* single-thread -> só ocupa uma linha de memoria (executa tudo em uma linha de endereços)
	multi-thread -> ocupa mais de uma linha de memória (executa em varios endereços fatiados (ganha velocidade)
	1ciclo = 0,5 Hz
	Quanto maior o ciclo mais memória é necessária no processador, portanto quanto mais o ciclo pior o sistema;
	
	Linux (melhor gerenciamento de memória)
		Tem 4 profiling:
			Text;
			Data;
			Stack;
			Heap;			
	windows 
		Tem 2 profiling: 
			
Ferramentas: (faz testes/debugs)
	- valgrind (especialmente o valgrind's callgrind);
	- google performance tools (gperf);
	
	github.com/google/benchmark
	
	
*/
/*
#include <iostream>
#include <stdlib.h>
#include <>

int main(){
	auto start = crono::high_resolution_clock::now();
	
	//codigo
	
	auto start = crono::high_resolution_clock::now();
	chrono::duration<double> duration = end - start;
	cout << << ;
	
    return 0;
}

*/
