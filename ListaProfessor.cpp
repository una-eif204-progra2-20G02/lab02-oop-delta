#include <iostream>
using std::cout;
using std::cin;

#include <sstream>
using std::stringstream;

#include "ListaProfessor.h"

ListaProfessor::ListaProfessor() : primero(NULL), inicio(NULL) {
}

ListaProfessor::~ListaProfessor() {
	delete primero;
	delete inicio;
}

void ListaProfessor::agregarProfessor(Professor* pro) {
	primero = new NodoProfessor(pro, primero);
}

string ListaProfessor::toString() {
	stringstream s;
	NodoProfessor* actual = primero;
	Professor* _Professor;

	while (actual != NULL) {
		_Professor = actual->obtenerDato();
		s << _Professor->toString();
		actual = actual->obtenerSiguiente();
	}

	return s.str();
}
