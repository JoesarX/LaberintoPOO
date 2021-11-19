#ifndef LABERINTO_H
#define LABERINTO_H

#include "Matriz.h"

class Laberinto
{
	public:
		Laberinto(int);
		~Laberinto();
		
		
		bool buscarEntrada();//TODO: debe encontrar el caracter que marca la entrada
		//y guardar la coordenada en xEntrada, yEntrada
		Matriz* getMatriz();
		
		bool buscarSalida(); //busca la salida llamando la función recursiva
		//desde la entrada
		
		int getxEntrada();
		int getyEntrada();
		void setxEntrada(int x);
		void setyEntrada(int y);
		
	private:
		Matriz* labMatrix;
		int xEntrada;
		int yEntrada;
		
		
		bool salir(int,int);//TODO: función recursiva para salir del laberinto recibe 
		//la coordenada de una casilla
		
	protected:
};

#endif