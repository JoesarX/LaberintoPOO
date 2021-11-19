#include "Matriz.h"

int Matriz::getSize(){
	return size;
}

char Matriz::get(int i,int j){
	//TODO: Validar rangos de i y j
	return matrix[i][j];
}

void Matriz::set(int i,int j,char valor){
	//TODO: Validar posición
	matrix[i][j] = valor;		
}

Matriz::Matriz(int pSize){
	 size=pSize;  
	 char** matriz=0;   
     if(size > 0){

        //crear el arreglo de apuntadores
        matriz = new char*[size];

        //instanciar los arreglos de chars
        for(int i =0; i<size;i++){
                matriz[i]=new char[size];
        } 
    }
    matrix=matriz; 
     
		
}

Matriz::~Matriz(){
	
	if(matrix!=0 && size > 0){
		
		//liberar los arreglos de chars              
        for(int i =0; i<size;i++){
            if(matrix[i]){
                delete[] matrix[i];
                matrix[i] = 0; // NULL = 0
            }
        } 
		
		//liberamos el arreglo de apuntadores a char (char*)
		delete[] matrix;
		
		matrix=0;
	}
}