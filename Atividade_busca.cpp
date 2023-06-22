/* Implementaçao de busca binaria
	Atividade Prometheus
	Elias Alexander

*//*
#include <stdio.h>
#include <stdlib.h>

int buscabinaria(int chave, int *vetor);

int main(){
    int chave, resultado = -1;
    int vetor[] = {23,34,45,56,89,97};
   
    printf("Informe a chave:");
    scanf("%i",&chave);
   
    resultado = buscabinaria(chave, vetor);
   
    if (resultado != -1){
        printf("Valor em %i eh: %i",chave,resultado);
       
    }else{
        printf("NOT FOUND");
    }
   
    return 0;
}

int buscabinaria(int chave, int *vetor){
   
    int n = 7;
    int ini = 0, fim = n, meio;
   
    while(ini <= fim){
        meio = (ini+fim)/2;
        if (chave == vetor[meio]){
            return meio;
        }else if(chave > vetor[meio]){
            ini = meio-1;
           
        }else{
            fim = meio-1;
        }
       
    }
    return -1;
}*/
