#include "Libro.h"
#include <string>
#include <iostream>

using namespace std; 
Libro::Libro(){
	
}
Libro::~Libro(){
	
}
Libro::Libro(int anioCreacion, int canPaginas, int vecesPrestado, string titulo, string autor, bool disponible){
	this-> anioCreacion =anioCreacion;
	this-> canPaginas = canPaginas;
	this-> vecesPrestado = vecesPrestado;
	this-> titulo = titulo;
	this-> autor = autor;
	this-> disponible = disponible;
	
}
int Libro::getAnioCreacion(){
	return 	this-> anioCreacion;
}
void Libro::setAnioCreacion(int anioCreacion){
	this-> anioCreacion = anioCreacion;;
}


int Libro::getCanPaginas(){
	return 	this-> canPaginas;
}
void Libro::setCanPaginas(int canPaginas ){
	this-> canPaginas = canPaginas;;
}


int Libro::getVecesPrestado(){
	return 	this-> vecesPrestado;
}
void Libro::setVecesPrestado(int vecesPrestado){
	this-> vecesPrestado = vecesPrestado;;
}


string Libro::getTitulo(){
	return 	this-> titulo;
}
void Libro::setTitulo(string titulo){
	this-> titulo = titulo;;
}


string Libro::getAutor(){
	return 	this-> autor;
} 
void Libro::setAutor(string autor){
	this-> autor = autor;;
}


bool Libro::getDisponible(){
	return 	this-> disponible;
}
void Libro::setDisponible(bool disponible){
	this-> disponible = disponible;;
}

string Libro:: toString(){
	return titulo + ", " + autor;
}