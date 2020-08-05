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
	primero = new NodoAdmin(ad, primero);
}

string ListaAdmin::toString() {
	stringstream s;
	NodoAdmin* actual = primero;
	Administrative* _Administrative;

	while (actual != NULL) {
		_Administrative = actual->obtenerDato();
		s << _Administrative->toString();
		actual = actual->obtenerSiguiente();
	}

	return s.str();
}
