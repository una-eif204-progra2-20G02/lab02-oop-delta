#include "NodoAdmin.h"
#include "ListaAdmin.h"

#include <sstream>
using std::string;

NodoAdmin::NodoAdmin(Administrative* dato, NodoAdmin* siguiente)
	: dato(dato), siguiente(siguiente) {
}

NodoAdmin::~NodoAdmin() {
	if (siguiente != NULL) {
		delete siguiente;
	}
}

Administrative* NodoAdmin::obtenerDato() {
	return dato;
}

void NodoAdmin::fijarDato(Administrative* dt) {
	dato = dt;
}

NodoAdmin* NodoAdmin::obtenerSiguiente() {
	return siguiente;
}


void NodoAdmin::fijarSiguiente(NodoAdmin* sig) {
	siguiente = sig;
}

