#include "LaberintoPrinter.h"
#include <iostream>
using std::cout;
using std::endl;

void LaberintoPrinter::printLaberinto(Laberinto* laberinto) {

	Matriz* matrix = laberinto->getMatriz();
	int size = matrix->getSize();
	
	for(int i = 0; i < size; i++) {

		for(int j = 0; j < size; j++) {
			cout << matrix->get(i,j) << " ";
		}
		cout << "\n";
	}
	cout<<endl<<endl;
}