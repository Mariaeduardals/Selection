#include <stdio.h>
#include <stdlib.h>
#include "AlgoritmoSelection.h"


struct produto{
		int codigo;
		float valor;
	};

	typedef struct produto Produto;

	struct selection{
		Produto** vetor;
		int n;
		int contador;
	};
	
	typedef struct selection Selection;
	
	Produto* novoProduto(int codigo, int valor){
		
		Produto *p = (Produto*) malloc(sizeof(Produto)); 
		if(p != NULL){
			p->codigo = codigo;
			p->valor = valor;
		}
			return p; 
					
				}

Selection* create(int n){
	 
	Selection *s = (Selection*)malloc(sizeof(Selection));
		 
	if (s != NULL) {
		s->n = n;
		s->contador = 0;
		s->vetor = (Produto**) malloc(n*sizeof(Produto));
	}
	return s;
}

void selectionSort(Selection *v){
    
	int i, j, menor;
    
    Produto *p;
    
    printf("\nOrdendando com o algoritmo Selection ...\n");
    
    for (i= 0; i < v->n -1; i++){
        menor = i;
        
    for (j= i+1; j < v->n; j++){
            
		if (v->vetor[j]->codigo < v->vetor[menor]->codigo)
        	menor = j;
    } 
    p = v->vetor[menor];
    v->vetor[menor] = v->vetor[i];
    v->vetor[i] = p;
    
    }
}

int add(Selection *v, int codigo, float valor){
	
	Produto *p = novoProduto(codigo, valor);
	
	if(p != NULL && v != NULL && v->contador < v->n){
		v->vetor[v->contador++] = p;
		return 1; 
	}else
		return 0;
	
}

void imprimir(Selection *v){
	int i;
 	for(i = 0; i < v->contador; i++){
		printf("Produto[%i] = codigo: %i, valor: %.2f \n", i, v->vetor[i]->codigo,v->vetor[i]->valor);
	}
 }
