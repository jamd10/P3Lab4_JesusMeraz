#include "Libreria.h"
#include <vector>
#include <string>
#include <iostream>
#include <time.h>
#include <sstream>
using std::vector;
using namespace std;

Libreria::Libreria() {
}
Libreria::~Libreria() {
	for(int i = 0; i<ListaLibros.size(); i++) {
		delete ListaLibros.at(i);
	}
}
vector<Libro*> Libreria::getVector() {
	return this->ListaLibros;
}

void Libreria::agregarLibro(Libro* book) {
	ListaLibros.push_back(book);
}
void Libreria::eliminar(int po) {
	ListaLibros.erase(begin(ListaLibros)+po);
};
void Libreria::imprimir(){
	for(int i = 0; i < ListaLibros.size(); i++){
		cout<<i<<", "<<ListaLibros[i]->getAnioCreacion()<<", "<<ListaLibros[i]->getCanPaginas()<<", "<<ListaLibros[i]->getVecesPrestado()<<", "<<ListaLibros[i]->getTitulo()<<", "<<ListaLibros[i]->getAutor()<<", "<<ListaLibros[i]->getDisponible()<<", "<< endl;
	}
}
void Libreria::buscarAnio(string year){
	int num; 
  	stringstream anio;  
  	anio << year;  
  	anio >> num;	
	for(int i = 0; i < ListaLibros.size(); i++){
		if(ListaLibros[i]->getAnioCreacion() == num){
			cout<<i<<ListaLibros[i]->getTitulo()<<", "<<ListaLibros[i]->getAutor()<<", "<<ListaLibros[i]->getAnioCreacion()<< endl;
		}
	}
}
int Libreria::buscarLibro(string titulo){
	int cont;
	for(int i = 0; i < ListaLibros.size(); i++){
		if(ListaLibros[i]->getTitulo() == titulo){
			cont++;
		}
	}
	if(cont = 1){
		return 1;
	}else{
		return -1;
	}
}
void Libreria::prestarLibro(){
	for(int i = 0; i < ListaLibros.size(); i++){
		cout<<i<<", "<<ListaLibros[i]->getAnioCreacion()<<", "<<ListaLibros[i]->getCanPaginas()<<", "<<ListaLibros[i]->getVecesPrestado()<<", "<<ListaLibros[i]->getTitulo()<<", "<<ListaLibros[i]->getAutor()<<", "<<ListaLibros[i]->getDisponible()<<", "<< endl;
	}
	cout<<"Ingrese la posicion del libro que desea: "<<endl;
	int pos;
	cin>> pos;
	if(ListaLibros[pos]->getDisponible()== true){
		cout<<"Su libro esta disponible, puede tomarlo"<<endl;
		ListaLibros[pos]->setDisponible(false);
		
	}else{
		cout<<"Lo sentimos pero su libro no esta disponible"<<endl;
	}
}
void Libreria::DevolverLibro(string name){
	for(int i = 0; i < ListaLibros.size(); i++){
		if(ListaLibros[i]->getTitulo() == name){
			cout<<"Su libro esta disponible, gracias por devolverlos"<<endl;
			ListaLibros[i]->setDisponible(true);
		}else{
			cout<<"Lo sentimos pero su libro no esta disponible"<<endl;
		}
	}
}

