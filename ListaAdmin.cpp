#include <iostream>
using std::cout;
using std::cin;

#include <sstream>
using std::stringstream;

#include "ListaAdmin.h"

ListaAdmin::ListaAdmin() : primero(NULL), inicio(NULL) {
}

ListaAdmin::~ListaAdmin() {
	delete primero;
	delete inicio;
}

void ListaAdmin::agregarAdministrative(Administrative* ad) {
	primero = new NodoAdmin(p, primero);
}

string ListaAdmin::toString() {
	stringstream r;
	NodoAdmin* actual = primero;
	Administrative* _Administrative;

	while (actual != NULL) {
		_Administrative = actual->obtenerDato();
		r << _Administrative->toString();
		actual = actual->obtenerSiguiente();
	}

	return r.str();
}
