#ifndef MATRIZ_H
#define MATRIZ_H

class Matriz
{
	public:
		Matriz(int);
		~Matriz();	
		char get(int,int);
		void set(int,int,char);
		int getSize();
	private:
		char** matrix; 
		int size;
	protected:
};

#endif