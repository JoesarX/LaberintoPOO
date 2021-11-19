#include <iostream>


#include "LaberintoReader.h"

#include "Laberinto.h"

#include "LaberintoPrinter.h"
using std::cout;
using std::endl;
int main(int argc, char** argv) {
	//instanciar Reader en el stack
	
	LaberintoReader laberintoReader;
	
	//obtener instancia del laberinto, memoria reservada en el Heap
	Laberinto* laberinto = laberintoReader.leerLaberinto();
	
	//instanciar Printer en el stack
	LaberintoPrinter laberintoPrinter;
	
	//imprimir laberinto leido
	//TODO: completar la función
	laberintoPrinter.printLaberinto(laberinto);
	
	//TODO:Safecoding, existe la instancia de laberinto?
	//TODO: Compltear la función buscarEntrada
	cout << laberinto->buscarEntrada();
	if(laberinto->buscarEntrada()){
		//TODO:Implementar la función salir
		bool tieneSalida = laberinto->buscarSalida();
		if(tieneSalida)
			laberintoPrinter.printLaberinto(laberinto);
		else{
			//TODO:mostrar un mensaje de que no tiene salida,
			//El mensaje se debe implementar en la clase printer y llamar aquí
		}		
	}
	delete laberinto;
		
	return 0;
}