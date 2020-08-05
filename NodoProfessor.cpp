#include "NodoProfessor.h"
#include "ListaProfessor.h"

#include <sstream>
using std::string;

NodoProfessor::NodoProfessor(Professor* dato, NodoProfessor* siguiente)
	: dato(dato), siguiente(siguiente) {
}

NodoProfessor::~NodoProfessor() {
	if (siguiente != NULL) {
		delete siguiente;
	}
}

Professor* NodoProfessor::obtenerDato() {
	return dato;
}

void NodoProfessor::fijarDato(Professor* dt) {
	dato = dt;
}

NodoProfessor* NodoProfessor::obtenerSiguiente() {
	return siguiente;
}


void NodoProfessor::fijarSiguiente(NodoProfessor* sig) {
	siguiente = sig;
}

