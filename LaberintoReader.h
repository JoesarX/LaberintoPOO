#ifndef LABERINTOREADER_H
#define LABERINTOREADER_H

#include <fstream> //file stream
using std::ifstream; //input file stream - archivo modo lectura

#include "Laberinto.h"

class LaberintoReader
{
	
	public:
		
		LaberintoReader();		
		Laberinto* leerLaberinto(/*nombre del archivo*/);
		
	protected:
		ifstream file;
};

#endif