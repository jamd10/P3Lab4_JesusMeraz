#ifndef LIBRO_H
#define LIBRO_H
#include <string>
using namespace std;
class Libro
{
	private:
		int	anioCreacion;
		int canPaginas;
		int vecesPrestado;
		string titulo;
		string autor;
		bool disponible;
	public:
	 Libro();
	 ~Libro();
	 Libro(int, int, int, string, string, bool);
	 int getAnioCreacion();
	 int getCanPaginas();
	 int getVecesPrestado();
	 string getTitulo();
	 string getAutor();
	 bool getDisponible();
	 void setAnioCreacion(int);
	 void setCanPaginas(int);
	 void setVecesPrestado(int);
	 void setTitulo(string);
	 void setAutor(string);
	 void setDisponible(bool);
	 string toString();
};

#endif