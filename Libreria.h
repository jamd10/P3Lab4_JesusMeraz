#ifndef LIBRERIA_H
#define LIBRERIA_H
#include <string>
#include <vector>
#include "Libro.h"

using namespace std;

class Libreria
{
	private:
	vector <Libro*> ListaLibros;
	public:
	 Libreria();
	~Libreria();
	int buscarLibro(string);
	void buscarAnio(string);
	void prestarLibro();
	void DevolverLibro(string);
	void estadisticasGenerales();
	void agregarLibro(Libro*);
	vector<Libro*> getVector();
	void eliminar(int);
	void imprimir();
	
};

#endif