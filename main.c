#include <stdio.h>
#include <stdlib.h>
#include "AlgoritmoSelection.h"

int main() {
	
	Selection* s = create(5);
	
	add(s, 10, 100.0);
	add(s, 8, 480.0);
	add(s, 2, 508.0);
	add(s, 11, 800.9);
	add(s, 99, 900.0);
	
	imprimir(s);
	
	selectionSort(s);
	
	imprimir(s);
	
	return 0;
}
