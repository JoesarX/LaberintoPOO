#include "LaberintoReader.h"

LaberintoReader::LaberintoReader(){
}

Laberinto* LaberintoReader::leerLaberinto(/*nombre del archivo*/){
	int size=0; 
	//TODO: Pasar el nombre del archivo del parámetro
 	file.open("laberinto.txt");
	 //si el archivo existe
 	if( file.is_open() ){
  		//leer el tamaño
   		file >> size;
   
   		//inicializar un laberinto en el heap
   		//por medio de apuntador
   		Laberinto* laberinto= new Laberinto(size);

   
   		//leer la matriz del archivo
   		if (size > 0)
   		 for( int i = 0; i < size; i++)
     		 for( int j = 0; j < size; j++){
     		 	  char buffer;
     		 	  file >> buffer;
     		 	  laberinto->getMatriz()->set(i,j,buffer);
			  }
         		

   		file.close();//cerrar archivo
   		return laberinto;
 	}//if file is open
 	else
 		return 0; //retornar null
}