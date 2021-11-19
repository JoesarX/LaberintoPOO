#include "Laberinto.h"



bool Laberinto::salir(int x, int y){
	return false;
}

bool Laberinto::buscarEntrada(){
	int size = labMatrix->getSize();
	bool flag = false;
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			if(labMatrix->get(i,j) == '$'){
				flag = true;
				setxEntrada(i);
				setyEntrada(j);
			}
		}
	}
	return flag;
}

Matriz* Laberinto::getMatriz(){
	return labMatrix;
}

int Laberinto::getxEntrada(){
	return xEntrada;
}

int Laberinto::getyEntrada(){
	return yEntrada;
}
void Laberinto::setxEntrada(int x){
	xEntrada = x;
}

void Laberinto::setyEntrada(int y){
	yEntrada = y;
}

Laberinto::Laberinto(int pSize)
{
	labMatrix = new Matriz(pSize);
}

Laberinto::~Laberinto()
{
	delete labMatrix;
}

//TODO: Safecoding, validar variables xEntrada y yEntrada
bool Laberinto::buscarSalida(){
	return salir(xEntrada,yEntrada);
}