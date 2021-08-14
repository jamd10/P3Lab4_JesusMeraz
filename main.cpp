#include <iostream>
#include <string>
#include "Libro.h"
#include "Libreria.h"
#include <vector>
using namespace std;
int menu();
void ejercicio3(int);
int main(int argc, char** argv) {
	int op = menu();
	Libreria* lista = new Libreria();
	while(op != 7){
		switch(op){
			case 1:{
				int op;
				cout<<"******************** Menu ********************"<<endl;
				cout<<"* 1. Agregar libro                           *"<<endl;
				cout<<"* 2. Modificar libro                         *"<<endl;
				cout<<"* 3. eliminar libroo                         *"<<endl;
				cout<<"* 4. Listar libros                           *"<<endl;
				cout<<"**********************************************"<<endl;
				cout<<"Elija una opcion: "<<endl;
				cin>> op;
				switch(op){
					case 1:{
						int elejir;
						int	anioCreacion;
						int canPaginas;
						int vecesPrestado;
						string titulo;
						string autor;
						bool disponible;
						
						cout << "Ingrese  anio de creacion: ";
						cin>> anioCreacion;
						cout << "Ingrese cantidad de paginas: ";
						cin>> canPaginas;
						cout << "Ingrese veces prestado: ";
						cin>> vecesPrestado;
						cin.ignore();
						cout<<"Ingrese titulo: "<<endl;
						getline(cin,titulo);
						cout<<"Ingrese autor: "<<endl;
						getline(cin,autor);
						cout<<"Ingrese disponibilidad [disponible = 1 | no disponible = 2]: "<<endl;
						cin>>elejir;
						while(elejir < 1 || elejir > 2){
							cout<<"Intente de nuevo [disponible = 1 | no disponible = 2]: "<<endl;
							cin>>elejir;
						}
						if(elejir == 1){
							disponible = true;
						}else {
							disponible = false;
						}
						Libro* libro = new Libro(anioCreacion,canPaginas, vecesPrestado,titulo,	autor, disponible);
						lista ->  agregarLibro(libro);
						break;
					}
					case 2:{
						int pos1;
						if(!lista->getVector().empty()) {
							for(int i =0; i<lista->getVector().size(); i++) {
								Libro* aux = lista->getVector().at(i);
								cout<<(i+1)<<") "<<"Anio creacion: "<<aux->getAnioCreacion()<<endl;
								cout<<"    Genero: "<<aux->getCanPaginas()<<endl;
								cout<<"    Director: "<<aux->getVecesPrestado()<<endl;
								cout<<"    Valoracion: "<<aux->getTitulo()<<endl;
								cout<<"    Valoracion: "<<aux->getAutor()<<endl;
								cout<<"    Valoracion: "<<aux->getDisponible()<<endl;
								cout<<endl;
							}
					cout<<"Ingrese la posicion del libro a eliminar: ";
					cin>>pos1;
					pos1 = pos1-1;
					while(pos1<0||pos1>lista->getVector().size()) {
						cout<<"Posicion invalida, ingrese de nuevo: ";
						cin>>pos1;
						pos1=pos1-1;
					}
					lista->eliminar(pos1);
					cout<<"Libro eliminado exitosamente!"<<endl;
				} else {
					cout<<"Lista vacia !! "<<endl;
				}				
						break;
					}
					case 3:{
						int pos;
						if(!lista->getVector().empty()) {
							for(int i =0; i<lista->getVector().size(); i++) {
								Libro* aux = lista->getVector().at(i);
								cout<<(i+1)<<") "<<"Anio creacion: "<<aux->getAnioCreacion()<<endl;
								cout<<"    Genero: "<<aux->getCanPaginas()<<endl;
								cout<<"    Director: "<<aux->getVecesPrestado()<<endl;
								cout<<"    Valoracion: "<<aux->getTitulo()<<endl;
								cout<<"    Valoracion: "<<aux->getAutor()<<endl;
								cout<<"    Valoracion: "<<aux->getDisponible()<<endl;
								cout<<endl;
							}
							cout<<"Ingrese la posicion del libro a modificar: ";
							cin>>pos;
							pos = pos-1;
							while(pos<0||pos>lista->getVector().size()) {
								cout<<"Ingrese una posicion valida";
								cin>>pos;
								pos=pos-1;
							}
							int opcion;
							bool seguir = true;
							while(seguir) {
								cout<<"******************** Menu ********************"<<endl;
								cout<<"* 1. Anio de creacion                        *"<<endl;
								cout<<"* 2. Cantidad de paginas                     *"<<endl;
								cout<<"* 3. Veces prestado                          *"<<endl;
								cout<<"* 4. Titulo                                  *"<<endl;
								cout<<"* 4. Autor                                   *"<<endl;
								cout<<"* 4. Disponibilidad                          *"<<endl;
								cout<<"**********************************************"<<endl;
								cin >> opcion;
								switch (opcion) {
									case 1: {
										int newYear;
										cout<<"Ingrese el nuevo anio: ";
										cin>>newYear;
										Libro* PMT = lista->getVector().at(pos);
										PMT->setAnioCreacion(newYear);
										cout<<"Modificacion realizada con exito "<<endl;
										break;
									}
									case 2: {
										int newPages;
										cout<<"Ingrese la nueva cantidad de paginas: ";
										cin>>newPages;
										Libro* PMT = lista->getVector().at(pos);
										PMT->setCanPaginas(newPages);
										cout<<"Modificacion realizada con exito "<<endl;
										break;
									}
									case 3: {
										int newVecesPrestado;;
										cout<<"Ingrese las nuevas veces prestado: ";
										cin>>newVecesPrestado;
										Libro* PMT = lista->getVector().at(pos);
										PMT->setVecesPrestado(newVecesPrestado);
										cout<<"Modificacion realizada con exito "<<endl;
										break;
									}
									case 4: {
										cin.ignore();
										string newTittle;
										cout<<"Ingrese el nuevo titulo: ";
										getline(cin,newTittle);
										Libro* PMT = lista->getVector().at(pos);
										PMT->setTitulo(newTittle);
										cout<<"Modificacion exitosa!! "<<endl;
										break;
									}
									case 5: {
										cin.ignore();
										string newAutor;
										cout<<"Ingrese el nuevo titulo: ";
										getline(cin,newAutor);
										Libro* PMT = lista->getVector().at(pos);
										PMT->setAutor(newAutor);
										cout<<"Modificacion exitosa!! "<<endl;
										break;
									}
									case 6: {
										int elejir;
										bool flag;
										cout<<"Ingrese nueva disponibilidad [disponible = 1 | no disponible = 2]: "<<endl;
										cin>>elejir;
										while(elejir < 1 || elejir > 2){
										cout<<"Intente de nuevo [disponible = 1 | no disponible = 2]: "<<endl;
										cin>>elejir;
										}
										if(elejir == 1){
											flag = true;
										}else {
											flag = false;
										};
										Libro* PMT = lista->getVector().at(pos);
										PMT->setDisponible(flag);
										cout<<"Modificacion exitosa!! "<<endl;
										break;
									}
									default: {
										cout << "Saliendo..."<<endl;
										seguir = false;
										break;
									}
								}
							}//fin while
						} else {
							cout<<"Lista vacia !!"<<endl;
						}
						break;
					}
					case 4:{
						lista-> imprimir();
						break;
					}
					default: {
						cout<<"Opcion invalida"<< endl;
						menu();
						break;
					}
				}
						
				break;
			}
			case 2:{
				
				break;
			}
			case 3:{
				int verificar;
				cin.ignore();
				string tittle;
				cout<<"Ingrese el anio: "<<endl;
				getline(cin,tittle);
				verificar = lista->buscarLibro(tittle);
				if(verificar == 1){
					cout<<"1 = Hay un solo libro con este titulo"<<endl;
				}else{
					cout<<"-1 = hay mas de un libro con este titulo"<<endl;
				}
				
				
				break;
			}
			case 4:{
				string year;
				cout<<"Ingrese el anio: "<<endl;
				cin>>year;
				lista->buscarAnio(year);
				break;
			}
			case 5:{
				lista->prestarLibro();				
				break;
			}
			case 6:{
				cin.ignore();
				cout<<"Ingrese el nombre del libro a devolver: "<<endl;
				string name;
				getline(cin,name);
				lista->DevolverLibro(name);	
				break;
			}
				
			default: {
				cout<<"Opcion invalida"<< endl;
				menu();
				break;
			}
		}
		op = menu();
	}
//	lista->~Libreria();
	return 0;
}
int menu(){
	int opcion = 0;
	cout<<"******************** Menu ********************"<<endl;
	cout<<"* 1. Mantenimiento de libro                  *"<<endl;
	cout<<"* 2. Estadisticas generales                  *"<<endl;
	cout<<"* 3. Buscar por titulos                      *"<<endl;
	cout<<"* 4. Buscar por anio                         *"<<endl;
	cout<<"* 5. Prestar Libro                           *"<<endl;
	cout<<"* 6. Devolver libro                          *"<<endl;
	cout<<"* 7. Salir                                   *"<<endl;
	cout<<"**********************************************"<<endl;
	cout<<"Elija una opcion: "<<endl;
	cin>> opcion;
	return opcion;
}