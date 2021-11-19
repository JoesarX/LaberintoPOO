#ifndef MATRIZREADER_H
#define MATRIZREADER_H

#include <fstream> //file stream
using std::ifstream; //input file stream - archivo modo lectura

#include "Laberinto.h"


class MatrizReader
{
	public:
		MatrizReader();
		
		Laberinto* leerMatriz(/*nombre del archivo*/);
	protected:
};

#endif